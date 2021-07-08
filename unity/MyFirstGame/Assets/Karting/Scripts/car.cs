using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;

public class car : MonoBehaviour
{
    public float carSpeed;
    public Transform target;
    int nextTarget = 0;
    public Text speedText;

    // Start is called before the first frame update
    private void Start()
    {
        speedText.text = "0";
        target = GameManager.instance.target[nextTarget];
        GetComponent<NavMeshAgent>().speed = carSpeed * 3;
        GetComponent<NavMeshAgent>().SetDestination(target.position);
        //StartCoroutine("AI_Move");
        //StartCoroutine("AI_Animation");
    }

    IEnumerator AI_Move()
    {
        GetComponent<NavMeshAgent>().SetDestination(target.position);
        while (true)
        {
            float dis = (target.position - transform.position).magnitude;

            if (dis <= 1)
            {
                nextTarget += 1;
                if (nextTarget >= GameManager.instance.target.Length) nextTarget = 0;
                print(nextTarget);

                target = GameManager.instance.target[nextTarget];
                GetComponent<NavMeshAgent>().SetDestination(target.position);


            }

            yield return null;
        }
    }

    IEnumerator AI_Animation()
    {
        Vector3 lastPosition;
        while(true)
        {
            lastPosition = transform.position;
            yield return new WaitForSecondsRealtime(0.03f);

            if((lastPosition - transform.position).magnitude > 0)
            {
                Vector3 dir = transform.InverseTransformPoint(lastPosition);
                if (dir.x >= -0.01f && dir.x <= 0.01f)
                    GetComponent<Animator>().Play("PlayerIdel");
                if (dir.x < -0.01f)
                    GetComponent<Animator>().Play("PlayerTurnRight");
                if (dir.x > 0.01f)
                    GetComponent<Animator>().Play("PlayerTurnLeft");

            }
            if ((lastPosition - transform.position).magnitude <= 0)
                GetComponent<Animator>().Play("PlayerIdel");
        }
    }

    public void SetSpeed(string carSpeed)
    {
        speedText.text = carSpeed;
        GetComponent<NavMeshAgent>().speed = float.Parse(carSpeed) * 3;
        GetComponent<NavMeshAgent>().SetDestination(target.position);
    }

}
