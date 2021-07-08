using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public Transform[] target;
    private void Awake()
    {
        if (instance == null) instance = this;
    }
}
