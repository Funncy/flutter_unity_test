#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>
struct U3CU3Ef__AnonymousType0_4_t6AD706F84E39BA82CD246ACA839166C93733D2BF;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>
struct Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_tAA90B0A114C70EBF9CC4A6380409C4899CB35DD5;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityMessage>
struct KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6;
// System.Lazy`1<UnityMessageManager>
struct Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D;
// SingletonMonoBehaviour`1<System.Object>
struct SingletonMonoBehaviour_1_tE14741F2799AE3F949345E77B1A572DC11A30DDE;
// SingletonMonoBehaviour`1<UnityMessageManager>
struct SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityMessage>
struct ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityMessage>[]
struct EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785;
// KartGame.KartSystems.ArcadeKart
struct ArcadeKart_tB7265B1EF18FF1E0E494EFDDFC6EB96C0896D3AE;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// EmitParticlesOnBallBounce
struct EmitParticlesOnBallBounce_t0883ADBD8CC33CC0059CF2349284E551A8AD1E92;
// EmitParticlesOnKartBounce
struct EmitParticlesOnKartBounce_t0EE3DD839B2232D6CB069C8B7AB7AADFC9FCDD7B;
// EmitParticlesOnLand
struct EmitParticlesOnLand_tB5146E279198C83B7EE2EDF968F59F9EFE54BB8E;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B;
// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2;
// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t4B6750AB73A0DD4C352768B8B429B014C4C2401D;
// Jiggler
struct Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9;
// KartGame.KartSystems.KartBounce
struct KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// MessageHandler
struct MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NativeAPI
struct NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// SimpleTrigger
struct SimpleTrigger_tE8EA35B02B012AB1597B8214885C99B5DF44EA9A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityMessage
struct UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD;
// UnityMessageManager
struct UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityMessageManager/MessageDelegate
struct MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9;
// UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisKartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408_mCC0AF5DC19E9AC0CB066A6BFC7277931FD7C8961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m93F62F5FBC6403976ABF2EAB5A45219B76DE92C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_m82B466E8D610611C6867BC66AB3DA978BFB62E70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14  : public RuntimeObject
{
public:
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___U3CdataU3Ei__Field_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ei__Field_0() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14, ___U3CidU3Ei__Field_0)); }
	inline int32_t get_U3CidU3Ei__Field_0() const { return ___U3CidU3Ei__Field_0; }
	inline int32_t* get_address_of_U3CidU3Ei__Field_0() { return &___U3CidU3Ei__Field_0; }
	inline void set_U3CidU3Ei__Field_0(int32_t value)
	{
		___U3CidU3Ei__Field_0 = value;
	}

	inline static int32_t get_offset_of_U3CseqU3Ei__Field_1() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14, ___U3CseqU3Ei__Field_1)); }
	inline String_t* get_U3CseqU3Ei__Field_1() const { return ___U3CseqU3Ei__Field_1; }
	inline String_t** get_address_of_U3CseqU3Ei__Field_1() { return &___U3CseqU3Ei__Field_1; }
	inline void set_U3CseqU3Ei__Field_1(String_t* value)
	{
		___U3CseqU3Ei__Field_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CseqU3Ei__Field_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ei__Field_2() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14, ___U3CnameU3Ei__Field_2)); }
	inline String_t* get_U3CnameU3Ei__Field_2() const { return ___U3CnameU3Ei__Field_2; }
	inline String_t** get_address_of_U3CnameU3Ei__Field_2() { return &___U3CnameU3Ei__Field_2; }
	inline void set_U3CnameU3Ei__Field_2(String_t* value)
	{
		___U3CnameU3Ei__Field_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ei__Field_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ei__Field_3() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14, ___U3CdataU3Ei__Field_3)); }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * get_U3CdataU3Ei__Field_3() const { return ___U3CdataU3Ei__Field_3; }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 ** get_address_of_U3CdataU3Ei__Field_3() { return &___U3CdataU3Ei__Field_3; }
	inline void set_U3CdataU3Ei__Field_3(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * value)
	{
		___U3CdataU3Ei__Field_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3Ei__Field_3), (void*)value);
	}
};


// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6  : public RuntimeObject
{
public:
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	RuntimeObject * ___U3CdataU3Ei__Field_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ei__Field_0() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CidU3Ei__Field_0)); }
	inline int32_t get_U3CidU3Ei__Field_0() const { return ___U3CidU3Ei__Field_0; }
	inline int32_t* get_address_of_U3CidU3Ei__Field_0() { return &___U3CidU3Ei__Field_0; }
	inline void set_U3CidU3Ei__Field_0(int32_t value)
	{
		___U3CidU3Ei__Field_0 = value;
	}

	inline static int32_t get_offset_of_U3CseqU3Ei__Field_1() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CseqU3Ei__Field_1)); }
	inline String_t* get_U3CseqU3Ei__Field_1() const { return ___U3CseqU3Ei__Field_1; }
	inline String_t** get_address_of_U3CseqU3Ei__Field_1() { return &___U3CseqU3Ei__Field_1; }
	inline void set_U3CseqU3Ei__Field_1(String_t* value)
	{
		___U3CseqU3Ei__Field_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CseqU3Ei__Field_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ei__Field_2() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CnameU3Ei__Field_2)); }
	inline String_t* get_U3CnameU3Ei__Field_2() const { return ___U3CnameU3Ei__Field_2; }
	inline String_t** get_address_of_U3CnameU3Ei__Field_2() { return &___U3CnameU3Ei__Field_2; }
	inline void set_U3CnameU3Ei__Field_2(String_t* value)
	{
		___U3CnameU3Ei__Field_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ei__Field_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ei__Field_3() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CdataU3Ei__Field_3)); }
	inline RuntimeObject * get_U3CdataU3Ei__Field_3() const { return ___U3CdataU3Ei__Field_3; }
	inline RuntimeObject ** get_address_of_U3CdataU3Ei__Field_3() { return &___U3CdataU3Ei__Field_3; }
	inline void set_U3CdataU3Ei__Field_3(RuntimeObject * value)
	{
		___U3CdataU3Ei__Field_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3Ei__Field_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>
struct Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___entries_1)); }
	inline EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___keys_7)); }
	inline KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___values_8)); }
	inline ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____parent_1)); }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * get__parent_1() const { return ____parent_1; }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_1), (void*)value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____previous_2)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__previous_2() const { return ____previous_2; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_2), (void*)value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____next_3)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__next_3() const { return ____next_3; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_3), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____annotations_4)); }
	inline RuntimeObject * get__annotations_4() const { return ____annotations_4; }
	inline RuntimeObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(RuntimeObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_4), (void*)value);
	}
};

struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t4B6750AB73A0DD4C352768B8B429B014C4C2401D * ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BigIntegerTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___StringTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___GuidTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___TimeSpanTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___UriTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___CharTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___DateTimeTypes_13;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BytesTypes_14;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_t4B6750AB73A0DD4C352768B8B429B014C4C2401D * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_t4B6750AB73A0DD4C352768B8B429B014C4C2401D ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_t4B6750AB73A0DD4C352768B8B429B014C4C2401D * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_BigIntegerTypes_7() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BigIntegerTypes_7)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BigIntegerTypes_7() const { return ___BigIntegerTypes_7; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BigIntegerTypes_7() { return &___BigIntegerTypes_7; }
	inline void set_BigIntegerTypes_7(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BigIntegerTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BigIntegerTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_8() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___StringTypes_8)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_StringTypes_8() const { return ___StringTypes_8; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_StringTypes_8() { return &___StringTypes_8; }
	inline void set_StringTypes_8(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___StringTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_9() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___GuidTypes_9)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_GuidTypes_9() const { return ___GuidTypes_9; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_GuidTypes_9() { return &___GuidTypes_9; }
	inline void set_GuidTypes_9(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___GuidTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_10() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___TimeSpanTypes_10)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_TimeSpanTypes_10() const { return ___TimeSpanTypes_10; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_TimeSpanTypes_10() { return &___TimeSpanTypes_10; }
	inline void set_TimeSpanTypes_10(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___TimeSpanTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_11() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___UriTypes_11)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_UriTypes_11() const { return ___UriTypes_11; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_UriTypes_11() { return &___UriTypes_11; }
	inline void set_UriTypes_11(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___UriTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_12() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___CharTypes_12)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_CharTypes_12() const { return ___CharTypes_12; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_CharTypes_12() { return &___CharTypes_12; }
	inline void set_CharTypes_12(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___CharTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_13() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___DateTimeTypes_13)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_DateTimeTypes_13() const { return ___DateTimeTypes_13; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_DateTimeTypes_13() { return &___DateTimeTypes_13; }
	inline void set_DateTimeTypes_13(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___DateTimeTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_13), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_14() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BytesTypes_14)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BytesTypes_14() const { return ___BytesTypes_14; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BytesTypes_14() { return &___BytesTypes_14; }
	inline void set_BytesTypes_14(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BytesTypes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_14), (void*)value);
	}
};


// MessageHandler
struct MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7  : public RuntimeObject
{
public:
	// System.Int32 MessageHandler::id
	int32_t ___id_0;
	// System.String MessageHandler::seq
	String_t* ___seq_1;
	// System.String MessageHandler::name
	String_t* ___name_2;
	// Newtonsoft.Json.Linq.JToken MessageHandler::data
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___data_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_seq_1() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___seq_1)); }
	inline String_t* get_seq_1() const { return ___seq_1; }
	inline String_t** get_address_of_seq_1() { return &___seq_1; }
	inline void set_seq_1(String_t* value)
	{
		___seq_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seq_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___data_3)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get_data_3() const { return ___data_3; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_3), (void*)value);
	}
};


// NativeAPI
struct NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityMessage
struct UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD  : public RuntimeObject
{
public:
	// System.String UnityMessage::name
	String_t* ___name_0;
	// Newtonsoft.Json.Linq.JObject UnityMessage::data
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___data_1;
	// System.Action`1<System.Object> UnityMessage::callBack
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___callBack_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD, ___data_1)); }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * get_data_1() const { return ___data_1; }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}

	inline static int32_t get_offset_of_callBack_2() { return static_cast<int32_t>(offsetof(UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD, ___callBack_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_callBack_2() const { return ___callBack_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_callBack_2() { return &___callBack_2; }
	inline void set_callBack_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___callBack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callBack_2), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B  : public JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_15;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 * ____addingNew_16;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * ____collectionChanged_17;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_18;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_19;

public:
	inline static int32_t get_offset_of__listChanged_15() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____listChanged_15)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_15() const { return ____listChanged_15; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_15() { return &____listChanged_15; }
	inline void set__listChanged_15(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_15), (void*)value);
	}

	inline static int32_t get_offset_of__addingNew_16() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____addingNew_16)); }
	inline AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 * get__addingNew_16() const { return ____addingNew_16; }
	inline AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 ** get_address_of__addingNew_16() { return &____addingNew_16; }
	inline void set__addingNew_16(AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 * value)
	{
		____addingNew_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____addingNew_16), (void*)value);
	}

	inline static int32_t get_offset_of__collectionChanged_17() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____collectionChanged_17)); }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * get__collectionChanged_17() const { return ____collectionChanged_17; }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 ** get_address_of__collectionChanged_17() { return &____collectionChanged_17; }
	inline void set__collectionChanged_17(NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * value)
	{
		____collectionChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collectionChanged_17), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_18() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____syncRoot_18)); }
	inline RuntimeObject * get__syncRoot_18() const { return ____syncRoot_18; }
	inline RuntimeObject ** get_address_of__syncRoot_18() { return &____syncRoot_18; }
	inline void set__syncRoot_18(RuntimeObject * value)
	{
		____syncRoot_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_18), (void*)value);
	}

	inline static int32_t get_offset_of__busy_19() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____busy_19)); }
	inline bool get__busy_19() const { return ____busy_19; }
	inline bool* get_address_of__busy_19() { return &____busy_19; }
	inline void set__busy_19(bool value)
	{
		____busy_19 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807  : public JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * ____properties_20;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_21;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * ___PropertyChanging_22;

public:
	inline static int32_t get_offset_of__properties_20() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ____properties_20)); }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * get__properties_20() const { return ____properties_20; }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 ** get_address_of__properties_20() { return &____properties_20; }
	inline void set__properties_20(JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * value)
	{
		____properties_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_20), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_21() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanged_21)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_21() const { return ___PropertyChanged_21; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_21() { return &___PropertyChanged_21; }
	inline void set_PropertyChanged_21(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_21), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_22() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanging_22)); }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * get_PropertyChanging_22() const { return ___PropertyChanging_22; }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 ** get_address_of_PropertyChanging_22() { return &___PropertyChanging_22; }
	inline void set_PropertyChanging_22(PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * value)
	{
		___PropertyChanging_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_22), (void*)value);
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityMessageManager/MessageDelegate
struct MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9  : public MulticastDelegate_t
{
public:

public:
};


// UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// SingletonMonoBehaviour`1<UnityMessageManager>
struct SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_StaticFields
{
public:
	// System.Lazy`1<T> SingletonMonoBehaviour`1::LazyInstance
	Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D * ___LazyInstance_4;

public:
	inline static int32_t get_offset_of_LazyInstance_4() { return static_cast<int32_t>(offsetof(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_StaticFields, ___LazyInstance_4)); }
	inline Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D * get_LazyInstance_4() const { return ___LazyInstance_4; }
	inline Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D ** get_address_of_LazyInstance_4() { return &___LazyInstance_4; }
	inline void set_LazyInstance_4(Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D * value)
	{
		___LazyInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LazyInstance_4), (void*)value);
	}
};


// EmitParticlesOnBallBounce
struct EmitParticlesOnBallBounce_t0883ADBD8CC33CC0059CF2349284E551A8AD1E92  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.ParticleSystem EmitParticlesOnBallBounce::pSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___pSystem_4;
	// System.Boolean EmitParticlesOnBallBounce::emitOnCollision
	bool ___emitOnCollision_5;
	// System.Boolean EmitParticlesOnBallBounce::emitOnKick
	bool ___emitOnKick_6;

public:
	inline static int32_t get_offset_of_pSystem_4() { return static_cast<int32_t>(offsetof(EmitParticlesOnBallBounce_t0883ADBD8CC33CC0059CF2349284E551A8AD1E92, ___pSystem_4)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_pSystem_4() const { return ___pSystem_4; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_pSystem_4() { return &___pSystem_4; }
	inline void set_pSystem_4(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___pSystem_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pSystem_4), (void*)value);
	}

	inline static int32_t get_offset_of_emitOnCollision_5() { return static_cast<int32_t>(offsetof(EmitParticlesOnBallBounce_t0883ADBD8CC33CC0059CF2349284E551A8AD1E92, ___emitOnCollision_5)); }
	inline bool get_emitOnCollision_5() const { return ___emitOnCollision_5; }
	inline bool* get_address_of_emitOnCollision_5() { return &___emitOnCollision_5; }
	inline void set_emitOnCollision_5(bool value)
	{
		___emitOnCollision_5 = value;
	}

	inline static int32_t get_offset_of_emitOnKick_6() { return static_cast<int32_t>(offsetof(EmitParticlesOnBallBounce_t0883ADBD8CC33CC0059CF2349284E551A8AD1E92, ___emitOnKick_6)); }
	inline bool get_emitOnKick_6() const { return ___emitOnKick_6; }
	inline bool* get_address_of_emitOnKick_6() { return &___emitOnKick_6; }
	inline void set_emitOnKick_6(bool value)
	{
		___emitOnKick_6 = value;
	}
};


// EmitParticlesOnKartBounce
struct EmitParticlesOnKartBounce_t0EE3DD839B2232D6CB069C8B7AB7AADFC9FCDD7B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.ParticleSystem EmitParticlesOnKartBounce::effect
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___effect_4;
	// KartGame.KartSystems.KartBounce EmitParticlesOnKartBounce::vehicleBounce
	KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408 * ___vehicleBounce_5;

public:
	inline static int32_t get_offset_of_effect_4() { return static_cast<int32_t>(offsetof(EmitParticlesOnKartBounce_t0EE3DD839B2232D6CB069C8B7AB7AADFC9FCDD7B, ___effect_4)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_effect_4() const { return ___effect_4; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_effect_4() { return &___effect_4; }
	inline void set_effect_4(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___effect_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___effect_4), (void*)value);
	}

	inline static int32_t get_offset_of_vehicleBounce_5() { return static_cast<int32_t>(offsetof(EmitParticlesOnKartBounce_t0EE3DD839B2232D6CB069C8B7AB7AADFC9FCDD7B, ___vehicleBounce_5)); }
	inline KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408 * get_vehicleBounce_5() const { return ___vehicleBounce_5; }
	inline KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408 ** get_address_of_vehicleBounce_5() { return &___vehicleBounce_5; }
	inline void set_vehicleBounce_5(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408 * value)
	{
		___vehicleBounce_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vehicleBounce_5), (void*)value);
	}
};


// EmitParticlesOnLand
struct EmitParticlesOnLand_tB5146E279198C83B7EE2EDF968F59F9EFE54BB8E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean EmitParticlesOnLand::emitOnLand
	bool ___emitOnLand_4;
	// System.Boolean EmitParticlesOnLand::emitOnEnemyDeath
	bool ___emitOnEnemyDeath_5;

public:
	inline static int32_t get_offset_of_emitOnLand_4() { return static_cast<int32_t>(offsetof(EmitParticlesOnLand_tB5146E279198C83B7EE2EDF968F59F9EFE54BB8E, ___emitOnLand_4)); }
	inline bool get_emitOnLand_4() const { return ___emitOnLand_4; }
	inline bool* get_address_of_emitOnLand_4() { return &___emitOnLand_4; }
	inline void set_emitOnLand_4(bool value)
	{
		___emitOnLand_4 = value;
	}

	inline static int32_t get_offset_of_emitOnEnemyDeath_5() { return static_cast<int32_t>(offsetof(EmitParticlesOnLand_tB5146E279198C83B7EE2EDF968F59F9EFE54BB8E, ___emitOnEnemyDeath_5)); }
	inline bool get_emitOnEnemyDeath_5() const { return ___emitOnEnemyDeath_5; }
	inline bool* get_address_of_emitOnEnemyDeath_5() { return &___emitOnEnemyDeath_5; }
	inline void set_emitOnEnemyDeath_5(bool value)
	{
		___emitOnEnemyDeath_5 = value;
	}
};


// Jiggler
struct Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Jiggler::power
	float ___power_4;
	// System.Boolean Jiggler::jigPosition
	bool ___jigPosition_5;
	// UnityEngine.Vector3 Jiggler::positionJigAmount
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionJigAmount_6;
	// System.Single Jiggler::positionFrequency
	float ___positionFrequency_7;
	// System.Single Jiggler::positionTime
	float ___positionTime_8;
	// System.Boolean Jiggler::jigRotation
	bool ___jigRotation_9;
	// UnityEngine.Vector3 Jiggler::rotationJigAmount
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotationJigAmount_10;
	// System.Single Jiggler::rotationFrequency
	float ___rotationFrequency_11;
	// System.Single Jiggler::rotationTime
	float ___rotationTime_12;
	// System.Boolean Jiggler::jigScale
	bool ___jigScale_13;
	// UnityEngine.Vector3 Jiggler::scaleJigAmount
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scaleJigAmount_14;
	// System.Single Jiggler::scaleFrequency
	float ___scaleFrequency_15;
	// System.Single Jiggler::scaleTime
	float ___scaleTime_16;
	// UnityEngine.Vector3 Jiggler::basePosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___basePosition_17;
	// UnityEngine.Quaternion Jiggler::baseRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___baseRotation_18;
	// UnityEngine.Vector3 Jiggler::baseScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___baseScale_19;

public:
	inline static int32_t get_offset_of_power_4() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___power_4)); }
	inline float get_power_4() const { return ___power_4; }
	inline float* get_address_of_power_4() { return &___power_4; }
	inline void set_power_4(float value)
	{
		___power_4 = value;
	}

	inline static int32_t get_offset_of_jigPosition_5() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___jigPosition_5)); }
	inline bool get_jigPosition_5() const { return ___jigPosition_5; }
	inline bool* get_address_of_jigPosition_5() { return &___jigPosition_5; }
	inline void set_jigPosition_5(bool value)
	{
		___jigPosition_5 = value;
	}

	inline static int32_t get_offset_of_positionJigAmount_6() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___positionJigAmount_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionJigAmount_6() const { return ___positionJigAmount_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionJigAmount_6() { return &___positionJigAmount_6; }
	inline void set_positionJigAmount_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionJigAmount_6 = value;
	}

	inline static int32_t get_offset_of_positionFrequency_7() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___positionFrequency_7)); }
	inline float get_positionFrequency_7() const { return ___positionFrequency_7; }
	inline float* get_address_of_positionFrequency_7() { return &___positionFrequency_7; }
	inline void set_positionFrequency_7(float value)
	{
		___positionFrequency_7 = value;
	}

	inline static int32_t get_offset_of_positionTime_8() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___positionTime_8)); }
	inline float get_positionTime_8() const { return ___positionTime_8; }
	inline float* get_address_of_positionTime_8() { return &___positionTime_8; }
	inline void set_positionTime_8(float value)
	{
		___positionTime_8 = value;
	}

	inline static int32_t get_offset_of_jigRotation_9() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___jigRotation_9)); }
	inline bool get_jigRotation_9() const { return ___jigRotation_9; }
	inline bool* get_address_of_jigRotation_9() { return &___jigRotation_9; }
	inline void set_jigRotation_9(bool value)
	{
		___jigRotation_9 = value;
	}

	inline static int32_t get_offset_of_rotationJigAmount_10() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___rotationJigAmount_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotationJigAmount_10() const { return ___rotationJigAmount_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotationJigAmount_10() { return &___rotationJigAmount_10; }
	inline void set_rotationJigAmount_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotationJigAmount_10 = value;
	}

	inline static int32_t get_offset_of_rotationFrequency_11() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___rotationFrequency_11)); }
	inline float get_rotationFrequency_11() const { return ___rotationFrequency_11; }
	inline float* get_address_of_rotationFrequency_11() { return &___rotationFrequency_11; }
	inline void set_rotationFrequency_11(float value)
	{
		___rotationFrequency_11 = value;
	}

	inline static int32_t get_offset_of_rotationTime_12() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___rotationTime_12)); }
	inline float get_rotationTime_12() const { return ___rotationTime_12; }
	inline float* get_address_of_rotationTime_12() { return &___rotationTime_12; }
	inline void set_rotationTime_12(float value)
	{
		___rotationTime_12 = value;
	}

	inline static int32_t get_offset_of_jigScale_13() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___jigScale_13)); }
	inline bool get_jigScale_13() const { return ___jigScale_13; }
	inline bool* get_address_of_jigScale_13() { return &___jigScale_13; }
	inline void set_jigScale_13(bool value)
	{
		___jigScale_13 = value;
	}

	inline static int32_t get_offset_of_scaleJigAmount_14() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___scaleJigAmount_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scaleJigAmount_14() const { return ___scaleJigAmount_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scaleJigAmount_14() { return &___scaleJigAmount_14; }
	inline void set_scaleJigAmount_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scaleJigAmount_14 = value;
	}

	inline static int32_t get_offset_of_scaleFrequency_15() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___scaleFrequency_15)); }
	inline float get_scaleFrequency_15() const { return ___scaleFrequency_15; }
	inline float* get_address_of_scaleFrequency_15() { return &___scaleFrequency_15; }
	inline void set_scaleFrequency_15(float value)
	{
		___scaleFrequency_15 = value;
	}

	inline static int32_t get_offset_of_scaleTime_16() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___scaleTime_16)); }
	inline float get_scaleTime_16() const { return ___scaleTime_16; }
	inline float* get_address_of_scaleTime_16() { return &___scaleTime_16; }
	inline void set_scaleTime_16(float value)
	{
		___scaleTime_16 = value;
	}

	inline static int32_t get_offset_of_basePosition_17() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___basePosition_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_basePosition_17() const { return ___basePosition_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_basePosition_17() { return &___basePosition_17; }
	inline void set_basePosition_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___basePosition_17 = value;
	}

	inline static int32_t get_offset_of_baseRotation_18() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___baseRotation_18)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_baseRotation_18() const { return ___baseRotation_18; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_baseRotation_18() { return &___baseRotation_18; }
	inline void set_baseRotation_18(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___baseRotation_18 = value;
	}

	inline static int32_t get_offset_of_baseScale_19() { return static_cast<int32_t>(offsetof(Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9, ___baseScale_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_baseScale_19() const { return ___baseScale_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_baseScale_19() { return &___baseScale_19; }
	inline void set_baseScale_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___baseScale_19 = value;
	}
};


// KartGame.KartSystems.KartBounce
struct KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean KartGame.KartSystems.KartBounce::<BounceFlag>k__BackingField
	bool ___U3CBounceFlagU3Ek__BackingField_4;
	// System.Single KartGame.KartSystems.KartBounce::BounceFactor
	float ___BounceFactor_5;
	// System.Single KartGame.KartSystems.KartBounce::RotationSpeed
	float ___RotationSpeed_6;
	// UnityEngine.LayerMask KartGame.KartSystems.KartBounce::CollisionLayer
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___CollisionLayer_7;
	// System.Single KartGame.KartSystems.KartBounce::RayDistance
	float ___RayDistance_8;
	// System.Single KartGame.KartSystems.KartBounce::PauseTime
	float ___PauseTime_9;
	// System.Single KartGame.KartSystems.KartBounce::HeightOffset
	float ___HeightOffset_10;
	// System.Single[] KartGame.KartSystems.KartBounce::Angles
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Angles_11;
	// System.Boolean KartGame.KartSystems.KartBounce::DrawGizmos
	bool ___DrawGizmos_12;
	// UnityEngine.AudioClip KartGame.KartSystems.KartBounce::BounceSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___BounceSound_13;
	// KartGame.KartSystems.ArcadeKart KartGame.KartSystems.KartBounce::kart
	ArcadeKart_tB7265B1EF18FF1E0E494EFDDFC6EB96C0896D3AE * ___kart_14;
	// System.Single KartGame.KartSystems.KartBounce::resumeTime
	float ___resumeTime_15;
	// System.Boolean KartGame.KartSystems.KartBounce::hasCollided
	bool ___hasCollided_16;
	// UnityEngine.Vector3 KartGame.KartSystems.KartBounce::reflectionVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___reflectionVector_17;

public:
	inline static int32_t get_offset_of_U3CBounceFlagU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408, ___U3CBounceFlagU3Ek__BackingField_4)); }
	inline bool get_U3CBounceFlagU3Ek__BackingField_4() const { return ___U3CBounceFlagU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CBounceFlagU3Ek__BackingField_4() { return &___U3CBounceFlagU3Ek__BackingField_4; }
	inline void set_U3CBounceFlagU3Ek__BackingField_4(bool value)
	{
		___U3CBounceFlagU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_BounceFactor_5() { return static_cast<int32_t>(offsetof(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408, ___BounceFactor_5)); }
	inline float get_BounceFactor_5() const { return ___BounceFactor_5; }
	inline float* get_address_of_BounceFactor_5() { return &___BounceFactor_5; }
	inline void set_BounceFactor_5(float value)
	{
		___BounceFactor_5 = value;
	}

	inline static int32_t get_offset_of_RotationSpeed_6() { return static_cast<int32_t>(offsetof(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408, ___RotationSpeed_6)); }
	inline float get_RotationSpeed_6() const { return ___RotationSpeed_6; }
	inline float* get_address_of_RotationSpeed_6() { return &___RotationSpeed_6; }
	inline void set_RotationSpeed_6(float value)
	{
		___RotationSpeed_6 = value;
	}

	inline static int32_t get_offset_of_CollisionLayer_7() { return static_cast<int32_t>(offsetof(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408, ___CollisionLayer_7)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_CollisionLayer_7() const { return ___CollisionLayer_7; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_CollisionLayer_7() { return &___CollisionLayer_7; }
	inline void set_CollisionLayer_7(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___CollisionLayer_7 = value;
	}

	inline static int32_t get_offset_of_RayDistance_8() { return static_cast<int32_t>(offsetof(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408, ___RayDistance_8)); }
	inline float get_RayDistance_8() const { return ___RayDistance_8; }
	inline float* get_address_of_RayDistance_8() { return &___RayDistance_8; }
	inline void set_RayDistance_8(float value)
	{
		___RayDistance_8 = value;
	}

	inline static int32_t get_offset_of_PauseTime_9() { return static_cast<int32_t>(offsetof(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408, ___PauseTime_9)); }
	inline float get_PauseTime_9() const { return ___PauseTime_9; }
	inline float* get_address_of_PauseTime_9() { return &___PauseTime_9; }
	inline void set_PauseTime_9(float value)
	{
		___PauseTime_9 = value;
	}

	inline static int32_t get_offset_of_HeightOffset_10() { return static_cast<int32_t>(offsetof(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408, ___HeightOffset_10)); }
	inline float get_HeightOffset_10() const { return ___HeightOffset_10; }
	inline float* get_address_of_HeightOffset_10() { return &___HeightOffset_10; }
	inline void set_HeightOffset_10(float value)
	{
		___HeightOffset_10 = value;
	}

	inline static int32_t get_offset_of_Angles_11() { return static_cast<int32_t>(offsetof(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408, ___Angles_11)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Angles_11() const { return ___Angles_11; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Angles_11() { return &___Angles_11; }
	inline void set_Angles_11(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Angles_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Angles_11), (void*)value);
	}

	inline static int32_t get_offset_of_DrawGizmos_12() { return static_cast<int32_t>(offsetof(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408, ___DrawGizmos_12)); }
	inline bool get_DrawGizmos_12() const { return ___DrawGizmos_12; }
	inline bool* get_address_of_DrawGizmos_12() { return &___DrawGizmos_12; }
	inline void set_DrawGizmos_12(bool value)
	{
		___DrawGizmos_12 = value;
	}

	inline static int32_t get_offset_of_BounceSound_13() { return static_cast<int32_t>(offsetof(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408, ___BounceSound_13)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_BounceSound_13() const { return ___BounceSound_13; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_BounceSound_13() { return &___BounceSound_13; }
	inline void set_BounceSound_13(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___BounceSound_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BounceSound_13), (void*)value);
	}

	inline static int32_t get_offset_of_kart_14() { return static_cast<int32_t>(offsetof(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408, ___kart_14)); }
	inline ArcadeKart_tB7265B1EF18FF1E0E494EFDDFC6EB96C0896D3AE * get_kart_14() const { return ___kart_14; }
	inline ArcadeKart_tB7265B1EF18FF1E0E494EFDDFC6EB96C0896D3AE ** get_address_of_kart_14() { return &___kart_14; }
	inline void set_kart_14(ArcadeKart_tB7265B1EF18FF1E0E494EFDDFC6EB96C0896D3AE * value)
	{
		___kart_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kart_14), (void*)value);
	}

	inline static int32_t get_offset_of_resumeTime_15() { return static_cast<int32_t>(offsetof(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408, ___resumeTime_15)); }
	inline float get_resumeTime_15() const { return ___resumeTime_15; }
	inline float* get_address_of_resumeTime_15() { return &___resumeTime_15; }
	inline void set_resumeTime_15(float value)
	{
		___resumeTime_15 = value;
	}

	inline static int32_t get_offset_of_hasCollided_16() { return static_cast<int32_t>(offsetof(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408, ___hasCollided_16)); }
	inline bool get_hasCollided_16() const { return ___hasCollided_16; }
	inline bool* get_address_of_hasCollided_16() { return &___hasCollided_16; }
	inline void set_hasCollided_16(bool value)
	{
		___hasCollided_16 = value;
	}

	inline static int32_t get_offset_of_reflectionVector_17() { return static_cast<int32_t>(offsetof(KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408, ___reflectionVector_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_reflectionVector_17() const { return ___reflectionVector_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_reflectionVector_17() { return &___reflectionVector_17; }
	inline void set_reflectionVector_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___reflectionVector_17 = value;
	}
};


// SimpleTrigger
struct SimpleTrigger_tE8EA35B02B012AB1597B8214885C99B5DF44EA9A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody SimpleTrigger::triggerBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___triggerBody_4;
	// UnityEngine.Events.UnityEvent SimpleTrigger::onTriggerEnter
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onTriggerEnter_5;

public:
	inline static int32_t get_offset_of_triggerBody_4() { return static_cast<int32_t>(offsetof(SimpleTrigger_tE8EA35B02B012AB1597B8214885C99B5DF44EA9A, ___triggerBody_4)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_triggerBody_4() const { return ___triggerBody_4; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_triggerBody_4() { return &___triggerBody_4; }
	inline void set_triggerBody_4(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___triggerBody_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triggerBody_4), (void*)value);
	}

	inline static int32_t get_offset_of_onTriggerEnter_5() { return static_cast<int32_t>(offsetof(SimpleTrigger_tE8EA35B02B012AB1597B8214885C99B5DF44EA9A, ___onTriggerEnter_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onTriggerEnter_5() const { return ___onTriggerEnter_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onTriggerEnter_5() { return &___onTriggerEnter_5; }
	inline void set_onTriggerEnter_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onTriggerEnter_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onTriggerEnter_5), (void*)value);
	}
};


// UnityMessageManager
struct UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831  : public SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD
{
public:
	// UnityMessageManager/MessageDelegate UnityMessageManager::OnMessage
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * ___OnMessage_7;
	// UnityMessageManager/MessageHandlerDelegate UnityMessageManager::OnFlutterMessage
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * ___OnFlutterMessage_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage> UnityMessageManager::waitCallbackMessageMap
	Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * ___waitCallbackMessageMap_9;

public:
	inline static int32_t get_offset_of_OnMessage_7() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831, ___OnMessage_7)); }
	inline MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * get_OnMessage_7() const { return ___OnMessage_7; }
	inline MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 ** get_address_of_OnMessage_7() { return &___OnMessage_7; }
	inline void set_OnMessage_7(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * value)
	{
		___OnMessage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessage_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnFlutterMessage_8() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831, ___OnFlutterMessage_8)); }
	inline MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * get_OnFlutterMessage_8() const { return ___OnFlutterMessage_8; }
	inline MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 ** get_address_of_OnFlutterMessage_8() { return &___OnFlutterMessage_8; }
	inline void set_OnFlutterMessage_8(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * value)
	{
		___OnFlutterMessage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFlutterMessage_8), (void*)value);
	}

	inline static int32_t get_offset_of_waitCallbackMessageMap_9() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831, ___waitCallbackMessageMap_9)); }
	inline Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * get_waitCallbackMessageMap_9() const { return ___waitCallbackMessageMap_9; }
	inline Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E ** get_address_of_waitCallbackMessageMap_9() { return &___waitCallbackMessageMap_9; }
	inline void set_waitCallbackMessageMap_9(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * value)
	{
		___waitCallbackMessageMap_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitCallbackMessageMap_9), (void*)value);
	}
};

struct UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields
{
public:
	// System.Int32 UnityMessageManager::ID
	int32_t ___ID_6;

public:
	inline static int32_t get_offset_of_ID_6() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields, ___ID_6)); }
	inline int32_t get_ID_6() const { return ___ID_6; }
	inline int32_t* get_address_of_ID_6() { return &___ID_6; }
	inline void set_ID_6(int32_t value)
	{
		___ID_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m93F62F5FBC6403976ABF2EAB5A45219B76DE92C7_gshared (RuntimeObject* ___value0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_mFD998B98327E94D4CCADB61467E889A820AABACC_gshared (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared (U3CU3Ef__AnonymousType0_4_t6AD706F84E39BA82CD246ACA839166C93733D2BF * __this, int32_t ___id0, RuntimeObject * ___seq1, RuntimeObject * ___name2, RuntimeObject * ___data3, const RuntimeMethod* method);
// T SingletonMonoBehaviour`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SingletonMonoBehaviour_1_get_Instance_mCA27DE8B40FBF13AC39B556178FCEE9909F030E4_gshared (const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// T MessageHandler::getData<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_gshared (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void SingletonMonoBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1__ctor_mFE92A122FFAD62C1BBD57040124CFB238F2301E3_gshared (SingletonMonoBehaviour_1_tE14741F2799AE3F949345E77B1A572DC11A30DDE * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInParent<KartGame.KartSystems.KartBounce>()
inline KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408 * Component_GetComponentInParent_TisKartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408_mCC0AF5DC19E9AC0CB066A6BFC7277931FD7C8961 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Boolean KartGame.KartSystems.KartBounce::get_BounceFlag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KartBounce_get_BounceFlag_mAE879494CF55810377715059C930E9A0603AF5C9_inline (KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * JObject_Parse_mC11381640E6167C288580E6797E60FC950896C21 (String_t* ___json0, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * JObject_GetValue_m0AAB5836A67C6D57A98083361102AAEDF5ECE682 (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * __this, String_t* ___propertyName0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline int32_t Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m93F62F5FBC6403976ABF2EAB5A45219B76DE92C7 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m93F62F5FBC6403976ABF2EAB5A45219B76DE92C7_gshared)(___value0, method);
}
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisRuntimeObject_mFD998B98327E94D4CCADB61467E889A820AABACC_gshared)(___value0, method);
}
// System.Void MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m88684D58D64080CE7766BEE3D2D32EA5193A00B4 (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___data3, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, RuntimeObject * ___data3, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 *, int32_t, String_t*, String_t*, RuntimeObject *, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared)(__this, ___id0, ___seq1, ___name2, ___data3, method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * JObject_FromObject_m467B80E8812E8B4494FCCED0AE9CBC7A050C10CE (RuntimeObject * ___o0, const RuntimeMethod* method);
// T SingletonMonoBehaviour`1<UnityMessageManager>::get_Instance()
inline UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2 (const RuntimeMethod* method)
{
	return ((  UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * (*) (const RuntimeMethod*))SingletonMonoBehaviour_1_get_Instance_mCA27DE8B40FBF13AC39B556178FCEE9909F030E4_gshared)(method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void NativeAPI::OnUnitySceneLoaded(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnitySceneLoaded_m2F3C71B76C7BC469B27E51DB6FDD828BC2F54384 (String_t* ___name0, int32_t ___buildIndex1, bool ___isLoaded2, bool ___IsValid3, const RuntimeMethod* method);
// System.Void NativeAPI::OnUnityMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnityMessage_m1CF7151340955DF0256F5C6AD708DBE71F45AFB5 (String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Collider_get_attachedRigidbody_m101FED12AD292F372F98E94A6D02A5E428AA896A (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0 (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___value0, const RuntimeMethod* method);
// System.Void NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m3664DB25D28063B8628236EA7338D05DEB78694A (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_mF11F3AE0A8A16104D2546D5225A967CAEF20F494 (const RuntimeMethod* method);
// System.Void NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_mC078E094545CA94E5BAF399E7C8B75E39274A855 (const RuntimeMethod* method);
// System.Void NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m53C753446251C8F1D17D43FAC31BFC8DAEB12607 (const RuntimeMethod* method);
// System.Void NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m589A00F5AE6DABEECC576A5E6BC709850513AE9B (String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_m044493EEA44FD0FE6040EAAC4F26AF0AA65D32B1 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::Add(!0,!1)
inline void Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, int32_t ___key0, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, int32_t, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_m82B466E8D610611C6867BC66AB3DA978BFB62E70 (U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___data3, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14 *, int32_t, String_t*, String_t*, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared)(__this, ___id0, ___seq1, ___name2, ___data3, method);
}
// System.Void UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m38A45D4D87F60621AB4E4B6A68DDDE146B332DDD (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// MessageHandler MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * MessageHandler_Deserialize_mFD7001A5166EDD8386B2979B3C0FDC4544D0F123 (String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, int32_t ___key0, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, int32_t, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::Remove(!0)
inline bool Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// T MessageHandler::getData<System.Object>()
inline RuntimeObject * MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9 (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*))MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_gshared)(__this, method);
}
// System.Void System.Action`1<System.Object>::Invoke(!0)
inline void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::Invoke(MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_m001CCB602D2B55DD220BF06E2AA4828575197FFE (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * ___handler0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::.ctor()
inline void Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void SingletonMonoBehaviour`1<UnityMessageManager>::.ctor()
inline void SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F (SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD * __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD *, const RuntimeMethod*))SingletonMonoBehaviour_1__ctor_mFE92A122FFAD62C1BBD57040124CFB238F2301E3_gshared)(__this, method);
}
IL2CPP_EXTERN_C void DEFAULT_CALL OnUnityMessage(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL OnUnitySceneLoaded(char*, int32_t, int32_t, int32_t);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EmitParticlesOnBallBounce::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParticlesOnBallBounce__ctor_mCF81A2E4649DF8B02E743E13E9F79A843E0F8F5F (EmitParticlesOnBallBounce_t0883ADBD8CC33CC0059CF2349284E551A8AD1E92 * __this, const RuntimeMethod* method)
{
	{
		// public bool emitOnCollision = true;
		__this->set_emitOnCollision_5((bool)1);
		// public bool emitOnKick = true;
		__this->set_emitOnKick_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EmitParticlesOnKartBounce::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParticlesOnKartBounce_Awake_m052423641AECF051FF9B40E3A9D2C9073FADA887 (EmitParticlesOnKartBounce_t0EE3DD839B2232D6CB069C8B7AB7AADFC9FCDD7B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisKartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408_mCC0AF5DC19E9AC0CB066A6BFC7277931FD7C8961_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// effect = GetComponent<ParticleSystem>();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0;
		L_0 = Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		__this->set_effect_4(L_0);
		// vehicleBounce = GetComponentInParent<KartBounce>();
		KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408 * L_1;
		L_1 = Component_GetComponentInParent_TisKartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408_mCC0AF5DC19E9AC0CB066A6BFC7277931FD7C8961(__this, /*hidden argument*/Component_GetComponentInParent_TisKartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408_mCC0AF5DC19E9AC0CB066A6BFC7277931FD7C8961_RuntimeMethod_var);
		__this->set_vehicleBounce_5(L_1);
		// }
		return;
	}
}
// System.Void EmitParticlesOnKartBounce::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParticlesOnKartBounce_Update_m4FDCBFEE49BD780D4E608985199C16DD9A8871DE (EmitParticlesOnKartBounce_t0EE3DD839B2232D6CB069C8B7AB7AADFC9FCDD7B * __this, const RuntimeMethod* method)
{
	{
		// if (vehicleBounce.BounceFlag)
		KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408 * L_0 = __this->get_vehicleBounce_5();
		NullCheck(L_0);
		bool L_1;
		L_1 = KartBounce_get_BounceFlag_mAE879494CF55810377715059C930E9A0603AF5C9_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// effect.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_2 = __this->get_effect_4();
		NullCheck(L_2);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void EmitParticlesOnKartBounce::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParticlesOnKartBounce__ctor_m8ADE5985EF491633B2FEDA98E678D0C8CE2430F3 (EmitParticlesOnKartBounce_t0EE3DD839B2232D6CB069C8B7AB7AADFC9FCDD7B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EmitParticlesOnLand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParticlesOnLand__ctor_m31368C3AFDEEECE7FBC16E86D8F52399E50D627A (EmitParticlesOnLand_tB5146E279198C83B7EE2EDF968F59F9EFE54BB8E * __this, const RuntimeMethod* method)
{
	{
		// public bool emitOnLand = true;
		__this->set_emitOnLand_4((bool)1);
		// public bool emitOnEnemyDeath = true;
		__this->set_emitOnEnemyDeath_5((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Jiggler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jiggler_Start_m87197CD4EE3FB11AC75C20A3B0CC168D8CC276DA (Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9 * __this, const RuntimeMethod* method)
{
	{
		// basePosition = this.transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		__this->set_basePosition_17(L_1);
		// baseRotation = this.transform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_2, /*hidden argument*/NULL);
		__this->set_baseRotation_18(L_3);
		// baseScale = this.transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_4, /*hidden argument*/NULL);
		__this->set_baseScale_19(L_5);
		// }
		return;
	}
}
// System.Void Jiggler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jiggler_Update_mDF64EEB40683F2B2FC38A37837A0FB6CD10B69C4 (Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// var dt = Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_0 = L_0;
		// positionTime += dt * positionFrequency;
		float L_1 = __this->get_positionTime_8();
		float L_2 = V_0;
		float L_3 = __this->get_positionFrequency_7();
		__this->set_positionTime_8(((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))));
		// rotationTime += dt * rotationFrequency;
		float L_4 = __this->get_rotationTime_12();
		float L_5 = V_0;
		float L_6 = __this->get_rotationFrequency_11();
		__this->set_rotationTime_12(((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)))));
		// scaleTime += dt * scaleFrequency;
		float L_7 = __this->get_scaleTime_16();
		float L_8 = V_0;
		float L_9 = __this->get_scaleFrequency_15();
		__this->set_scaleTime_16(((float)il2cpp_codegen_add((float)L_7, (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)))));
		// if (jigPosition)
		bool L_10 = __this->get_jigPosition_5();
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		// transform.localPosition = basePosition + positionJigAmount * Mathf.Sin(positionTime) * power;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_basePosition_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_positionJigAmount_6();
		float L_14 = __this->get_positionTime_8();
		float L_15;
		L_15 = sinf(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_power_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_18, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_11, L_19, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// if (jigRotation)
		bool L_20 = __this->get_jigRotation_9();
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		// transform.localRotation = baseRotation * Quaternion.Euler(rotationJigAmount * Mathf.Sin(rotationTime) * power);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22 = __this->get_baseRotation_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = __this->get_rotationJigAmount_10();
		float L_24 = __this->get_rotationTime_12();
		float L_25;
		L_25 = sinf(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_23, L_25, /*hidden argument*/NULL);
		float L_27 = __this->get_power_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_26, L_27, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		L_29 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_28, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
		L_30 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_22, L_29, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_21, L_30, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		// if (jigScale)
		bool L_31 = __this->get_jigScale_13();
		if (!L_31)
		{
			goto IL_0107;
		}
	}
	{
		// transform.localScale = baseScale + scaleJigAmount * Mathf.Sin(scaleTime) * power;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = __this->get_baseScale_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_scaleJigAmount_14();
		float L_35 = __this->get_scaleTime_16();
		float L_36;
		L_36 = sinf(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, L_36, /*hidden argument*/NULL);
		float L_38 = __this->get_power_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_37, L_38, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_33, L_39, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_32, L_40, /*hidden argument*/NULL);
	}

IL_0107:
	{
		// }
		return;
	}
}
// System.Void Jiggler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jiggler__ctor_mF14B81D0E0B3746FA83E791942C50211217B1CD1 (Jiggler_t1431EA59D03ED8222B49662E4821BAB9666550A9 * __this, const RuntimeMethod* method)
{
	{
		// public float power = .1f;
		__this->set_power_4((0.100000001f));
		// public bool jigPosition = true;
		__this->set_jigPosition_5((bool)1);
		// public float positionFrequency = 10;
		__this->set_positionFrequency_7((10.0f));
		// public bool jigRotation = true;
		__this->set_jigRotation_9((bool)1);
		// public float rotationFrequency = 10;
		__this->set_rotationFrequency_11((10.0f));
		// public bool jigScale = true;
		__this->set_jigScale_13((bool)1);
		// public Vector3 scaleJigAmount = new Vector3(.1f, -.1f, .1f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.100000001f), (-0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		__this->set_scaleJigAmount_14(L_0);
		// public float scaleFrequency = 10;
		__this->set_scaleFrequency_15((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MessageHandler MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * MessageHandler_Deserialize_mFD7001A5166EDD8386B2979B3C0FDC4544D0F123 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m93F62F5FBC6403976ABF2EAB5A45219B76DE92C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * V_0 = NULL;
	{
		// JObject m = JObject.Parse(message);
		String_t* L_0 = ___message0;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_1;
		L_1 = JObject_Parse_mC11381640E6167C288580E6797E60FC950896C21(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// MessageHandler handler = new MessageHandler(
		//     m.GetValue("id").Value<int>(),
		//     m.GetValue("seq").Value<string>(),
		//     m.GetValue("name").Value<string>(),
		//     m.GetValue("data")
		// );
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_2 = V_0;
		NullCheck(L_2);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_3;
		L_3 = JObject_GetValue_m0AAB5836A67C6D57A98083361102AAEDF5ECE682(L_2, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m93F62F5FBC6403976ABF2EAB5A45219B76DE92C7(L_3, /*hidden argument*/Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m93F62F5FBC6403976ABF2EAB5A45219B76DE92C7_RuntimeMethod_var);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_5 = V_0;
		NullCheck(L_5);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_6;
		L_6 = JObject_GetValue_m0AAB5836A67C6D57A98083361102AAEDF5ECE682(L_5, _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984(L_6, /*hidden argument*/Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_8 = V_0;
		NullCheck(L_8);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_9;
		L_9 = JObject_GetValue_m0AAB5836A67C6D57A98083361102AAEDF5ECE682(L_8, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984(L_9, /*hidden argument*/Extensions_Value_TisString_t_mE454079DDACB55830A1DEB2BADFC211055C63984_RuntimeMethod_var);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_11 = V_0;
		NullCheck(L_11);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_12;
		L_12 = JObject_GetValue_m0AAB5836A67C6D57A98083361102AAEDF5ECE682(L_11, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, /*hidden argument*/NULL);
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_13 = (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *)il2cpp_codegen_object_new(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7_il2cpp_TypeInfo_var);
		MessageHandler__ctor_m88684D58D64080CE7766BEE3D2D32EA5193A00B4(L_13, L_4, L_7, L_10, L_12, /*hidden argument*/NULL);
		// return handler;
		return L_13;
	}
}
// System.Void MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m88684D58D64080CE7766BEE3D2D32EA5193A00B4 (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___data3, const RuntimeMethod* method)
{
	{
		// public MessageHandler(int id, string seq, string name, JToken data)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.id = id;
		int32_t L_0 = ___id0;
		__this->set_id_0(L_0);
		// this.seq = seq;
		String_t* L_1 = ___seq1;
		__this->set_seq_1(L_1);
		// this.name = name;
		String_t* L_2 = ___name2;
		__this->set_name_2(L_2);
		// this.data = data;
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_3 = ___data3;
		__this->set_data_3(L_3);
		// }
		return;
	}
}
// System.Void MessageHandler::send(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_send_m9EF609A41518571430690AFA490250C054CA5C4B (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, RuntimeObject * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * V_0 = NULL;
	{
		// JObject o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = "end",
		//     name = name,
		//     data = data
		// });
		int32_t L_0 = __this->get_id_0();
		String_t* L_1 = __this->get_name_2();
		RuntimeObject * L_2 = ___data0;
		U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 * L_3 = (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 *)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var);
		U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD(L_3, L_0, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_1, L_2, /*hidden argument*/U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_4;
		L_4 = JObject_FromObject_m467B80E8812E8B4494FCCED0AE9CBC7A050C10CE(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// UnityMessageManager.Instance.SendMessageToFlutter(UnityMessageManager.MessagePrefix + o.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * L_5;
		L_5 = SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7(L_5, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeAPI::OnUnityMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnityMessage_m1CF7151340955DF0256F5C6AD708DBE71F45AFB5 (String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(OnUnityMessage)(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void NativeAPI::OnUnitySceneLoaded(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnitySceneLoaded_m2F3C71B76C7BC469B27E51DB6FDD828BC2F54384 (String_t* ___name0, int32_t ___buildIndex1, bool ___isLoaded2, bool ___IsValid3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t);

	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(OnUnitySceneLoaded)(____name0_marshaled, ___buildIndex1, static_cast<int32_t>(___isLoaded2), static_cast<int32_t>(___IsValid3));

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m3664DB25D28063B8628236EA7338D05DEB78694A (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		// OnUnitySceneLoaded(scene.name, scene.buildIndex, scene.isLoaded, scene.IsValid());
		String_t* L_0;
		L_0 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		bool L_3;
		L_3 = Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		NativeAPI_OnUnitySceneLoaded_m2F3C71B76C7BC469B27E51DB6FDD828BC2F54384(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m589A00F5AE6DABEECC576A5E6BC709850513AE9B (String_t* ___message0, const RuntimeMethod* method)
{
	{
		// OnUnityMessage(message);
		String_t* L_0 = ___message0;
		NativeAPI_OnUnityMessage_m1CF7151340955DF0256F5C6AD708DBE71F45AFB5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_mF11F3AE0A8A16104D2546D5225A967CAEF20F494 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_mC078E094545CA94E5BAF399E7C8B75E39274A855 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m53C753446251C8F1D17D43FAC31BFC8DAEB12607 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NativeAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI__ctor_m078F288AC03B02E77E2017CB3EBD3E42B9FED0E4 (NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTrigger_OnTriggerEnter_m41608CB4300EF79410BCF79A214B34C266A19253 (SimpleTrigger_tE8EA35B02B012AB1597B8214885C99B5DF44EA9A * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (triggerBody == null) return;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_triggerBody_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (triggerBody == null) return;
		return;
	}

IL_000f:
	{
		// var hitRb = other.attachedRigidbody;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2 = ___other0;
		NullCheck(L_2);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3;
		L_3 = Collider_get_attachedRigidbody_m101FED12AD292F372F98E94A6D02A5E428AA896A(L_2, /*hidden argument*/NULL);
		// if (hitRb == triggerBody){
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_4 = __this->get_triggerBody_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// onTriggerEnter.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_6 = __this->get_onTriggerEnter_5();
		NullCheck(L_6);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_6, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void SimpleTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTrigger__ctor_mF33DC40F0DE8A926F29C6EEA79C3D58F17DC7246 (SimpleTrigger_tE8EA35B02B012AB1597B8214885C99B5DF44EA9A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessage__ctor_m31453D518E0E54753A5581B23A7ABEFD6165C537 (UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_m044493EEA44FD0FE6040EAAC4F26AF0AA65D32B1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ID = ID + 1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var))->get_ID_6();
		((UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var))->set_ID_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// return ID;
		int32_t L_1 = ((UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var))->get_ID_6();
		return L_1;
	}
}
// System.Void UnityMessageManager::add_OnMessage(UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnMessage_m7F72EFB7A6934E92EE91211BE100AAFAC60F1EF8 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_0 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_1 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_2 = NULL;
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_0 = __this->get_OnMessage_7();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_2 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var));
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 ** L_5 = __this->get_address_of_OnMessage_7();
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_6 = V_2;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_7 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *>((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_9 = V_0;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_9) == ((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::remove_OnMessage(UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnMessage_mFBE226643D6E84B5D7931C507A60D9C965B8E2B0 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_0 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_1 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_2 = NULL;
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_0 = __this->get_OnMessage_7();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_2 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var));
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 ** L_5 = __this->get_address_of_OnMessage_7();
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_6 = V_2;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_7 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *>((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_9 = V_0;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_9) == ((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::add_OnFlutterMessage(UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnFlutterMessage_m739FF9E4E00FCB9BC32CB2D7892444941B0601AC (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_0 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_1 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_2 = NULL;
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_0 = __this->get_OnFlutterMessage_8();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_2 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 ** L_5 = __this->get_address_of_OnFlutterMessage_8();
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_6 = V_2;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_7 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *>((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_9 = V_0;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::remove_OnFlutterMessage(UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnFlutterMessage_m6407A819093B1AFEF9270B4453A3E479124326A5 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_0 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_1 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_2 = NULL;
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_0 = __this->get_OnFlutterMessage_8();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_2 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 ** L_5 = __this->get_address_of_OnFlutterMessage_8();
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_6 = V_2;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_7 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *>((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_9 = V_0;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_Start_m366A7C3E50AE07BA45A2A49FE9382E9AA838F54B (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * L_0 = (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *)il2cpp_codegen_object_new(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0(L_0, __this, (intptr_t)((intptr_t)UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		// NativeAPI.OnSceneLoaded(scene, mode);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0 = ___scene0;
		int32_t L_1 = ___mode1;
		NativeAPI_OnSceneLoaded_m3664DB25D28063B8628236EA7338D05DEB78694A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_ShowHostMainWindow_m247203DD3FC1D1995A57C0302A6E23E594A927D2 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.ShowHostMainWindow();
		NativeAPI_ShowHostMainWindow_mF11F3AE0A8A16104D2546D5225A967CAEF20F494(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_UnloadMainWindow_m37214FA2AE636F567825DB030434D31C80223593 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.UnloadMainWindow();
		NativeAPI_UnloadMainWindow_mC078E094545CA94E5BAF399E7C8B75E39274A855(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_QuitUnityWindow_m08F6EEDA9F59BB793055A6101DD1ACD62F18F49F (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.QuitUnityWindow();
		NativeAPI_QuitUnityWindow_m53C753446251C8F1D17D43FAC31BFC8DAEB12607(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// NativeAPI.SendMessageToFlutter(message);
		String_t* L_0 = ___message0;
		NativeAPI_SendMessageToFlutter_m589A00F5AE6DABEECC576A5E6BC709850513AE9B(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::SendMessageToFlutter(UnityMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m72DFFAE91711298BB40833DC9C92B0D3BD778C65 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_m82B466E8D610611C6867BC66AB3DA978BFB62E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * V_1 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	{
		// int id = generateId();
		IL2CPP_RUNTIME_CLASS_INIT(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = UnityMessageManager_generateId_m044493EEA44FD0FE6040EAAC4F26AF0AA65D32B1(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (message.callBack != null)
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_1 = ___message0;
		NullCheck(L_1);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_2 = L_1->get_callBack_2();
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// waitCallbackMessageMap.Add(id, message);
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_3 = __this->get_waitCallbackMessageMap_9();
		int32_t L_4 = V_0;
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_5 = ___message0;
		NullCheck(L_3);
		Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99_RuntimeMethod_var);
	}

IL_001b:
	{
		// JObject o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = message.callBack != null ? "start" : "",
		//     name = message.name,
		//     data = message.data
		// });
		int32_t L_6 = V_0;
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_7 = ___message0;
		NullCheck(L_7);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_8 = L_7->get_callBack_2();
		G_B3_0 = L_6;
		if (L_8)
		{
			G_B4_0 = L_6;
			goto IL_002b;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B3_0;
		goto IL_0030;
	}

IL_002b:
	{
		G_B5_0 = _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
		G_B5_1 = G_B4_0;
	}

IL_0030:
	{
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_9 = ___message0;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_name_0();
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_11 = ___message0;
		NullCheck(L_11);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_12 = L_11->get_data_1();
		U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14 * L_13 = (U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14 *)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_tA4B468AA51ACFB35812852DE80F87F89E0F51F14_il2cpp_TypeInfo_var);
		U3CU3Ef__AnonymousType0_4__ctor_m82B466E8D610611C6867BC66AB3DA978BFB62E70(L_13, G_B5_1, G_B5_0, L_10, L_12, /*hidden argument*/U3CU3Ef__AnonymousType0_4__ctor_m82B466E8D610611C6867BC66AB3DA978BFB62E70_RuntimeMethod_var);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_14;
		L_14 = JObject_FromObject_m467B80E8812E8B4494FCCED0AE9CBC7A050C10CE(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// UnityMessageManager.Instance.SendMessageToFlutter(MessagePrefix + o.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * L_15;
		L_15 = SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7(L_15, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::onMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onMessage_m4D0F43F8D328F97496576D9930AAB3686E6A8558 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// if (OnMessage != null)
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_0 = __this->get_OnMessage_7();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnMessage(message);
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_1 = __this->get_OnMessage_7();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		MessageDelegate_Invoke_m38A45D4D87F60621AB4E4B6A68DDDE146B332DDD(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UnityMessageManager::onFlutterMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onFlutterMessage_m1A5DC207EFB4A24E9571BDA6EBD3D8E3AFBB576F (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * V_0 = NULL;
	UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * V_1 = NULL;
	{
		// if (message.StartsWith(MessagePrefix))
		String_t* L_0 = ___message0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_0, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// message = message.Replace(MessagePrefix, "");
		String_t* L_2 = ___message0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_2, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		___message0 = L_3;
		// }
		goto IL_0022;
	}

IL_0021:
	{
		// return;
		return;
	}

IL_0022:
	{
		// MessageHandler handler = MessageHandler.Deserialize(message);
		String_t* L_4 = ___message0;
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_5;
		L_5 = MessageHandler_Deserialize_mFD7001A5166EDD8386B2979B3C0FDC4544D0F123(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if ("end".Equals(handler.seq))
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_seq_1();
		NullCheck(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		bool L_8;
		L_8 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// if (waitCallbackMessageMap.TryGetValue(handler.id, out m))
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_9 = __this->get_waitCallbackMessageMap_9();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_id_0();
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5(L_9, L_11, (UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		// waitCallbackMessageMap.Remove(handler.id);
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_13 = __this->get_waitCallbackMessageMap_9();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_id_0();
		NullCheck(L_13);
		bool L_16;
		L_16 = Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67(L_13, L_15, /*hidden argument*/Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67_RuntimeMethod_var);
		// if (m.callBack != null)
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_17 = V_1;
		NullCheck(L_17);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_18 = L_17->get_callBack_2();
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		// m.callBack(handler.getData<object>()); // todo
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_19 = V_1;
		NullCheck(L_19);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_20 = L_19->get_callBack_2();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_21 = V_0;
		NullCheck(L_21);
		RuntimeObject * L_22;
		L_22 = MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9(L_21, /*hidden argument*/MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_RuntimeMethod_var);
		NullCheck(L_20);
		Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744(L_20, L_22, /*hidden argument*/Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
	}

IL_007b:
	{
		// return;
		return;
	}

IL_007c:
	{
		// if (OnFlutterMessage != null)
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_23 = __this->get_OnFlutterMessage_8();
		if (!L_23)
		{
			goto IL_0090;
		}
	}
	{
		// OnFlutterMessage(handler);
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_24 = __this->get_OnFlutterMessage_8();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_25 = V_0;
		NullCheck(L_24);
		MessageHandlerDelegate_Invoke_m001CCB602D2B55DD220BF06E2AA4828575197FFE(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void UnityMessageManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__ctor_m03CBB4E08C8BA079E07D430AD377D38400DB82BF (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<int, UnityMessage> waitCallbackMessageMap = new Dictionary<int, UnityMessage>();
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_0 = (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *)il2cpp_codegen_object_new(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147(L_0, /*hidden argument*/Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147_RuntimeMethod_var);
		__this->set_waitCallbackMessageMap_9(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F(__this, /*hidden argument*/SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityMessageManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__cctor_m89611F0C2BAAF282BE647049B11F835262EFDB73 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityMessageManager/MessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate__ctor_mABBBB0720CEC9ADB6560700A2EE640194D040EF8 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m38A45D4D87F60621AB4E4B6A68DDDE146B332DDD (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityMessageManager/MessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDelegate_BeginInvoke_m5FD705274B59AF179AE22FF30A248A4A24B4BECA (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityMessageManager/MessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_EndInvoke_m8EB1088C4795F088A729524E99334E63ED48E6B7 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityMessageManager/MessageHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate__ctor_m27BFC33CA6935FF169ED735C704019CD4DF0E8C1 (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::Invoke(MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_m001CCB602D2B55DD220BF06E2AA4828575197FFE (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * ___handler0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___handler0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___handler0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handler0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handler0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(targetMethod, targetThis, ___handler0);
					else
						GenericVirtActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(targetMethod, targetThis, ___handler0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handler0);
					else
						VirtActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handler0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityMessageManager/MessageHandlerDelegate::BeginInvoke(MessageHandler,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandlerDelegate_BeginInvoke_m6F3C7C037B912D8BD1CB2FAB6CF0E8D8CB3825BA (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * ___handler0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___handler0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityMessageManager/MessageHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_EndInvoke_mE67B6A56FC2D25FC6BAE72DF3DDA9A01260DF3D2 (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KartBounce_get_BounceFlag_mAE879494CF55810377715059C930E9A0603AF5C9_inline (KartBounce_t5E2DA67CA2DD2A3955D435B0B6E3290AF8183408 * __this, const RuntimeMethod* method)
{
	{
		// public bool BounceFlag { get; private set; }
		bool L_0 = __this->get_U3CBounceFlagU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
