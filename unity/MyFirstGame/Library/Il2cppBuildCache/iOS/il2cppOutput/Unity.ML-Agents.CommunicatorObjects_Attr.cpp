#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Diagnostics.DebuggerNonUserCodeAttribute
struct DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41;
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C;
// Google.Protobuf.Reflection.OriginalNameAttribute
struct OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Diagnostics.DebuggerNonUserCodeAttribute
struct DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____allInternalsVisible_1)); }
	inline bool get__allInternalsVisible_1() const { return ____allInternalsVisible_1; }
	inline bool* get_address_of__allInternalsVisible_1() { return &____allInternalsVisible_1; }
	inline void set__allInternalsVisible_1(bool value)
	{
		____allInternalsVisible_1 = value;
	}
};


// Google.Protobuf.Reflection.OriginalNameAttribute
struct OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Google.Protobuf.Reflection.OriginalNameAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean Google.Protobuf.Reflection.OriginalNameAttribute::<PreferredAlias>k__BackingField
	bool ___U3CPreferredAliasU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreferredAliasU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39, ___U3CPreferredAliasU3Ek__BackingField_1)); }
	inline bool get_U3CPreferredAliasU3Ek__BackingField_1() const { return ___U3CPreferredAliasU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CPreferredAliasU3Ek__BackingField_1() { return &___U3CPreferredAliasU3Ek__BackingField_1; }
	inline void set_U3CPreferredAliasU3Ek__BackingField_1(bool value)
	{
		___U3CPreferredAliasU3Ek__BackingField_1 = value;
	}
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
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


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.InternalsVisibleToAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9 (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * __this, String_t* ___assemblyName0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggerNonUserCodeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OriginalNameAttribute__ctor_mD06192D005F4407A2D4EEA0FBBF3B42CAFB05683 (OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 * __this, String_t* ___name0, const RuntimeMethod* method);
static void Unity_MLU2DAgents_CommunicatorObjects_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[0];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x4D\x4C\x2D\x41\x67\x65\x6E\x74\x73\x2E\x45\x64\x69\x74\x6F\x72\x2E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[1];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x4D\x4C\x2D\x41\x67\x65\x6E\x74\x73"), NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[2];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[3];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[4];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[5];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x4D\x4C\x2D\x41\x67\x65\x6E\x74\x73\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto__ctor_m45827FC1FC4D1DB855C380DE272030258CB178A5(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto__ctor_m7CCEDB9C6725926911B2A64B0DB6039A07589056(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_Clone_m774A9CD63B92D7430E7D9E2F90F11200878A6709(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_Equals_mD3A605F6C4253B4EE4FEB1A5FD3A027B9C8A9281(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_Equals_m83FF84EB2B21C4380664D693D55A18589C647C85(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_GetHashCode_m01EBC03648DC933A61F57B6B130EC5563CE72546(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_ToString_m0A80CB05A0AEE772FBE5AF5D89FE97F1CA2DFC75(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_WriteTo_mF83CB266FD7B26930BF53E506436CA06C18F0062(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_CalculateSize_m9D1199145479FA6DDF23FF218059EB08258CD6FD(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_MergeFrom_m490A00EB14BB867B1E49E7F8F001165DE56E1085(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_MergeFrom_m7252C1B2D2E24AB6E174E0E9862795245B762409(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760____VectorActions_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760____Value_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void U3CU3Ec_t980D03921C98FEDD1910C8CC3FB0A389B80F45D2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto__ctor_mE730F3CFEDC6FBF4E47D89521AA73D1B6BA6466E(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto__ctor_m1662BCB00A97B1EEACFDD09E302E1E7B8BE558B1(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_Clone_m8B1F488281FD41768569E8F34828B25DAC6786B6(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_Equals_m5F7A7DBDA37AFC422780F99E9FE4C7D66351B23E(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_Equals_m0D5032F58999510F9CEC40C119BBE0294985C5A2(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_GetHashCode_m83BBA5EB2A3DBC4FE280012C3F3A5F4E5FC0C7EB(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_ToString_m8CC2D32D1C4298D88A2B388808198EA9927985D1(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_WriteTo_m841656BC59D6274E51F100919FEEA2683B65A7F7(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_CalculateSize_m57448E75249828596F00A5CE24F07063E93589D9(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_MergeFrom_m7B6D84CFFF63EFD129607243481C8874EDB5E515(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_MergeFrom_mA1BDB625F16552F42C76866DA4BDE3019D7032FE(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____Reward_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____Done_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____MaxStepReached_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____Id_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____ActionMask_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____Observations_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void U3CU3Ec_tB35EAAD104D4D4FBCFCA64AA195BBCC248B50AE1_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto__ctor_m95D4C963380EC8CE617B0EAD920FE79005E53029(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto__ctor_m641A3FB096E7C184A962A9DEF8D4ABAAEBCEABA0(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_Clone_m60AA0FE8232130E286E32D0862799A152A9E67A6(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_Equals_mFD916C6E4D7B603BF28DE619C7DA18290040D0B2(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_Equals_mF7CD5DDF192AFD576913D3CC1A746F5FAAF6CC87(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_GetHashCode_m27C2BD6A69D6508C6B58FBD52D875BF70133C945(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_ToString_m6FBC1821CB2150773090BD7C5F57B6C54FBA7E57(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_WriteTo_m04A2E3AFEC50741036F3D5AE0F0EC0FF5E637A5F(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_CalculateSize_mC3E730E59A0444FEC131A5C8E5CC12BFF94E7E29(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_MergeFrom_m55EBAF4828260C7264CAB1348B18AA11DD959BE3(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_MergeFrom_m5377D91FBF26C113736F8A3C5B2836928C6A5257(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C____AgentInfo_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C____ActionInfo_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void U3CU3Ec_tDDBACA40EEF08F9CC085DD4A696D77FA030A743B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto__ctor_m804C9F12FB6CDE0695E4390B85A6BEFC4139644F(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto__ctor_m0534775D88E5D019CEBDD9DD14B6DD216F51837F(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_Clone_m91D59F3B5A1DF19B643F3E19D0917CAA7A4FCFC5(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_Equals_mA5947CBAF8E4F1EE9CA62C8F058C788DC65996BB(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_Equals_m953B1713ACD46B0DA38AD3DBD082EF42E680397E(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_GetHashCode_m7A6EA45ADB5A7A2C5AC9D3713DF40BD99A0C491F(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_ToString_m6BC123F951F28F006316F11A86CE7569AE9746C2(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_WriteTo_mC20BBBC53F3FC0CFB64A93597DD295A159072EEF(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_CalculateSize_mA517AB8D8C0BBD35ECD659E767852A0FC082A783(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_MergeFrom_m238A49E3853F3C39CB95A62DABB6BD66A4E2F960(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_MergeFrom_m947808DDC3FD92A55CFE1609469EFFD5275A35EF(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____VectorActionSize_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____VectorActionDescriptions_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____VectorActionSpaceType_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____BrainName_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____IsTraining_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void U3CU3Ec_t9F118173C37A39382F5FEDCFC5702900DE4448A1_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto__ctor_m0F74FE0F956DC1424E75E26CECD8FBA4745E3466(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto__ctor_mEFDBF10241795D71B58930DAAEC773E37EC61A8A(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_Clone_mD0BC330D6C72D7BD7BE70E4500E69BDD146DE11D(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_Equals_m5F304C9497102F87EEB895DD86D4808034EDC5CA(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_Equals_m3C127DD9692ED6CFA6FA01B3A2D14F04B978EF91(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_GetHashCode_mBF51D599F2DB83043FBE5B5752E1022D99763478(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_ToString_m39068F8FE8CFAD97BDCD435E040CE48443753984(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_WriteTo_m0635AC074F790742E1A38696821057A711F7939E(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_CalculateSize_m5B29591B405E0FA8B1CCAFC7BAB902FA95903014(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_MergeFrom_mE0BD7EC9F0A37B6E272C67FD2E101C6220558EEA(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_MergeFrom_m200F2656F617A92118DEB407674BC927701F5108(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5____BaseRLCapabilities_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void U3CU3Ec_tA308CA3B51BF406264B754641DDF3E1EDB2AA844_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CommandProto_t058095ED7EF482C7AB215F158710C57BD8C3F98B_CustomAttributesCacheGenerator_Step(CustomAttributesCache* cache)
{
	{
		OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 * tmp = (OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 *)cache->attributes[0];
		OriginalNameAttribute__ctor_mD06192D005F4407A2D4EEA0FBBF3B42CAFB05683(tmp, il2cpp_codegen_string_new_wrapper("\x53\x54\x45\x50"), NULL);
	}
}
static void CommandProto_t058095ED7EF482C7AB215F158710C57BD8C3F98B_CustomAttributesCacheGenerator_Reset(CustomAttributesCache* cache)
{
	{
		OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 * tmp = (OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 *)cache->attributes[0];
		OriginalNameAttribute__ctor_mD06192D005F4407A2D4EEA0FBBF3B42CAFB05683(tmp, il2cpp_codegen_string_new_wrapper("\x52\x45\x53\x45\x54"), NULL);
	}
}
static void CommandProto_t058095ED7EF482C7AB215F158710C57BD8C3F98B_CustomAttributesCacheGenerator_Quit(CustomAttributesCache* cache)
{
	{
		OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 * tmp = (OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 *)cache->attributes[0];
		OriginalNameAttribute__ctor_mD06192D005F4407A2D4EEA0FBBF3B42CAFB05683(tmp, il2cpp_codegen_string_new_wrapper("\x51\x55\x49\x54"), NULL);
	}
}
static void CompressionTypeProto_tEFE19059E2ED43B6C85491BF694AC6FB043C7C4A_CustomAttributesCacheGenerator_None(CustomAttributesCache* cache)
{
	{
		OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 * tmp = (OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 *)cache->attributes[0];
		OriginalNameAttribute__ctor_mD06192D005F4407A2D4EEA0FBBF3B42CAFB05683(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x4F\x4E\x45"), NULL);
	}
}
static void CompressionTypeProto_tEFE19059E2ED43B6C85491BF694AC6FB043C7C4A_CustomAttributesCacheGenerator_Png(CustomAttributesCache* cache)
{
	{
		OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 * tmp = (OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 *)cache->attributes[0];
		OriginalNameAttribute__ctor_mD06192D005F4407A2D4EEA0FBBF3B42CAFB05683(tmp, il2cpp_codegen_string_new_wrapper("\x50\x4E\x47"), NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto__ctor_mAC8BFF6E6FA844D941E1355423A24E507877FA41(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto__ctor_m94C80BA68091E869E0E6A1FCC0FFB4B8FAC4A182(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_Clone_mDB0E140A150107A8726F88D56BA5851F06CEA326(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_Equals_mD893399B0DA57B1C67BA16A6BB167FCD05C48DAE(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_Equals_m54D439A8F64F33DC8FABEB53E577D69AB6BC2EA8(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_GetHashCode_m4E4721ACE98D97819992E808E478D4AD0F3378A9(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_ToString_m35649D8FCD31D650692CF7DAD631ED3C1F6A4337(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_WriteTo_mE79691FA1A8D48DB51FBF838B170083A2523BD8A(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_CalculateSize_mFDD502D7E89332F35BFFC399203BB170C1086088(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_MergeFrom_m8F556A1EEDB0C9926C9E4978D0559CAE05643411(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_MergeFrom_mCD2A340FEA1FBB33E8479D6B89CDF28DA90D1C09(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____Shape_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____CompressionType_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____CompressedData_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____FloatData_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____ObservationDataCase_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void Types_tBE5DEEE2E2F311A4EAD67B7B451A3780CB9B9194_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData__ctor_mC361BFD104C98A1BF2F749FB90AC38283DE76AE1(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData__ctor_m902C797C1E728C9AE625C0DFD0D1730189889765(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_Clone_m562B222DFADB0B0555BC21EF0B166A05147EEC49(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_Equals_mFA73A43DAD1E51A29955E153313512141E187175(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_Equals_mF2A6D500ABB98F2974D03CEB1979CAD879F4EB8F(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_GetHashCode_mC0AC712395725D5A7EAEEF62B305058752A399DA(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_ToString_mDE283425EF3C6C7ABE95D6011A5D3BF018FC1C9D(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_WriteTo_mC693F9D738B889203423F2967BCE31DEE798F6C9(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_CalculateSize_mB94DEE57B4075C5D0684F156D6ABF9196686DA7A(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_MergeFrom_mA416BF8BC216C5D60CA429773A477AFB54AA6349(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_MergeFrom_m34CDDF4491CFFC0F2CC43095C29ECE17D6AB6C55(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885____Data_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tE8A0D5AE0D983307B53FACA7022F8D6ADD628746_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SpaceTypeProto_tDA4BBBEF1479203C847467F3FBB926D0C11336CC_CustomAttributesCacheGenerator_Discrete(CustomAttributesCache* cache)
{
	{
		OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 * tmp = (OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 *)cache->attributes[0];
		OriginalNameAttribute__ctor_mD06192D005F4407A2D4EEA0FBBF3B42CAFB05683(tmp, il2cpp_codegen_string_new_wrapper("\x64\x69\x73\x63\x72\x65\x74\x65"), NULL);
	}
}
static void SpaceTypeProto_tDA4BBBEF1479203C847467F3FBB926D0C11336CC_CustomAttributesCacheGenerator_Continuous(CustomAttributesCache* cache)
{
	{
		OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 * tmp = (OriginalNameAttribute_t6694565EEE7FBEE4D65C7DCADAD432B034E92D39 *)cache->attributes[0];
		OriginalNameAttribute__ctor_mD06192D005F4407A2D4EEA0FBBF3B42CAFB05683(tmp, il2cpp_codegen_string_new_wrapper("\x63\x6F\x6E\x74\x69\x6E\x75\x6F\x75\x73"), NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto__ctor_m57E4E42DFD847CBCE7F0B8B826B4E4C0C339BE69(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto__ctor_m2A30ACE5E3BA8EE419B4784E18F5ACA0D09B535C(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_Clone_m450B7FF90B9174693BEAF57DB67B038C849DCF68(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_Equals_m9796A5E4C673D12E74FCFC00A047BB37BB688754(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_Equals_m9675D20C26D2D0A4CBD66F050F0B988E7530908E(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_GetHashCode_mAFBB40119A37E6FF9B161E00BE2E9E57FBB528B2(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_ToString_m910D01F7777A45BCB0C097C7F40FBA01BA5CDE63(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_WriteTo_m9B44941DD2DAA73C098C5294D1EEB8DDF9658FCD(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_CalculateSize_m70118B211EF67BC00021763BE72176ACDB833AA9(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_MergeFrom_m1B01D1B10F8DF9D3528144AD7BEA845512A13957(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_MergeFrom_mED094D8140C4E5DD46B4124AD8303F1A589C2E78(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329____RlInput_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329____RlInitializationInput_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void U3CU3Ec_tC647AD0CCD963DF1F30828A45917F1C612BCB2CA_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto__ctor_m3B2F85244B4DC767DC064A7AFD5E17FCC84AC43E(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto__ctor_m72CCC0B4EA5536F9F96FF424064A9F45620A1911(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_Clone_mC007C623525C9B51F183CA097FE84F94E5CCD5DA(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_Equals_m08A6F72007F36E83B07ECB7A95FDD76D10B949EA(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_Equals_m2BFFE86D341B3E5DC11B6210ADB085C44D7D5015(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_GetHashCode_m837986906EA92BADE7FC5FE08E67AC93CC0B87A7(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_ToString_m50208C9F1C120B5766AF7273810CDEF5C4B2B448(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_WriteTo_mB31EBD06BEE994A49AB3B07B61EC34EA34B4E2E3(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_CalculateSize_mD3C6B6BC045913C9B792ADA6F7AC3B4F39FEBE78(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_MergeFrom_m9A020DD15C533D2A898145FCE04F5D1B8B27B543(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_MergeFrom_mCFF956406E20D489C22E1727BF9682B19CAF139F(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27____RlOutput_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27____RlInitializationOutput_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void U3CU3Ec_t74C7F4954CBFBA5408E655E550951B6B3F17EA42_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto__ctor_m683F130C5852CB05830B81AB39CCA0C6FF0A8DF4(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto__ctor_m3727A1D068F5F624CDF3314E1F4B14F72AA397C9(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_Clone_m04D799EFB5B787368C1E7F53FCFCF954733B668B(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_Equals_m9BF44AFC6EAFE3B169DDFB348DD6083D9568BA98(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_Equals_m914BA4BDFFC6A52E4B0C37854068E26183FB9926(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_GetHashCode_mDC0DBDEB0A13F5DBADF67203B236534D2ECF15E9(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_ToString_m05BF76CE1B8A53051910731B343DF84663971403(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_WriteTo_m8CE1327654E8E7BFA46B299A295D05C49D3D4A67(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_CalculateSize_m9579A1AAF35EFCC12D1A7B420F19CA117BD4FB80(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_MergeFrom_m47D1F2C0DC2BD24471B18F39C6C7312D33DF8DAD(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_MergeFrom_mF089DC94A9FB0AB9BA49D6B6B5D50E0185799520(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD____Seed_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD____CommunicationVersion_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD____PackageVersion_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD____Capabilities_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void U3CU3Ec_t094218609E1453AF09C8C1B3620C5BD8FDD2488B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto__ctor_mA94457FB3936C72AB9A43DA0859411E32A0D99C6(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto__ctor_mAF913554D5EA638F71C7E2B4FF0DECF375696FBA(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_Clone_mCD58BA19A6A7075233A24BC355354BC4F5E66AA8(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_Equals_mD954104C858274E57EC21B3249C3204773BB9800(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_Equals_m1A49BE49EC9EBE0C55FDF759E8F4356D0D7DBD77(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_GetHashCode_m3F2B47D8B1DD52D281F63DF3183B992888794F5E(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_ToString_mA29B89CC5FF6759951FE46F0B56EC826E560B03B(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_WriteTo_m074EF56A46A75DEC64D2CD7E52C055A4D773814D(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_CalculateSize_m5B56D62B2CD65683998A3142A470C1074EDC461C(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_MergeFrom_mDBBEAC76316DDB715C731E36E9EE5E3340E234FE(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_MergeFrom_mBE0389746E22C3E4E10989D851909B650FED9B4F(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____Name_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____CommunicationVersion_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____LogPath_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____BrainParameters_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____PackageVersion_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____Capabilities_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void U3CU3Ec_t1F27885219118941179A8E1DDC6CE2B72663C9A1_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto__ctor_m552A099E20081FA48E583C5379715C060BF951AA(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto__ctor_mC45B7B120E8E0B108E6A40FA0A7A535D375C562B(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_Clone_mA28CF7393597EA8779F0B9D3782A113DF051B0D4(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_Equals_m0E002E15F46269B89D611F435AA1C6BD6CB44861(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_Equals_m7DEA93C5CBC00D1CBD2E6345CC66916E87B86A17(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_GetHashCode_mF3747453353D8746BB3594103B5808E35AB898E3(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_ToString_m50F72994DDA75345D9444381F67AA69E7D3E763F(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_WriteTo_mAAD984F6C7C118177F6588B1F02B2F8D120DD7E5(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_CalculateSize_m9977EA88DA3F9EDE6B4AAA4A3339D6A90AF91AB3(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_MergeFrom_mB1C4E38297CF51C740DB4557809CD6659C5E03DA(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_MergeFrom_m7018E0B61EF92A3D223EED445C95FC43EC6C3872(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851____AgentActions_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851____Command_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851____SideChannel_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void Types_t67EE0CDE58D2895A065ACA004A8B8F7CC18C5175_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto__ctor_mCE34C0822ABC92DDAB72EB25AB114000D33A5E45(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto__ctor_m8C8672752CAF17D32DFD161C68E9E25C28B91405(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_Clone_mC5105F5271B40E7AC41B905A3E7FD440C2ED3D18(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_Equals_mFB913E506159336F45920A180238F2FFB4B23D52(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_Equals_mC03D738AA0B2B3040B279F4CC6CE73544DA3D7D0(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_GetHashCode_mA5B39F94D0C457A55D2F4BBB4193D3114DF9625B(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_ToString_mBA6C6A1C1E6034C5458218F81EF204C6F8AEFC72(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_WriteTo_m36F37BCD69ECBC5A6F33E239E03B3FF0179FE33E(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_CalculateSize_m4E8640B72B0AC05573E60F8C3AF11D2E4401957F(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_MergeFrom_m28355491B18D1344670601B1C60B68FB623FDE7A(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_MergeFrom_m5F3EFF91351B4C6893004D70B36B79F8858178DB(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF____Value_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t492C5EED8F898ACD70A510F95585858D56A0D7F2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto__ctor_mDC072D8577206C900EFF8C9533C4D89431A07F1C(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto__ctor_m0EDC85337A3DD8FA01C304B6822A315267005291(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_Clone_m5D983544CC6512263C3AB63F74E75C61DC0FCE2A(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_Equals_m80EADB95FA9EEE21717ABB978B91217C4039833B(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_Equals_m3600B470E537B7E9121E647908C7FB7A8EF3E6E8(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_GetHashCode_mF9F4E27E24137C82CED52B3ED7E6C23250AF7738(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_ToString_mE9F43052E2914036B36E8BABBA4550055284A647(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_WriteTo_m124884B35E8524FB04A11E04E5CF214D06F747EE(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_CalculateSize_m7F69E280F6662B1395ACA4B0FDF1B8FA5B391746(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_MergeFrom_m3E968619DC1203C0AD3571F0C741213B00056732(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_MergeFrom_mDF2F8EF5E4B9FD7331866A47E200F9AA041A8FE9(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C____AgentInfos_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C____SideChannel_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void Types_tCEFFA249D8D42DEF98ADFD1A5FAAAF215B6186F9_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto__ctor_mD6804758545863CF8E4DB5EE501B7F3A7AFA85E5(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto__ctor_m2CBA7E17614C4FCC23D329DE91BD6C672471CA1C(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_Clone_mC85511EFF06504FE071ABAA07FD8B2E603CBB186(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_Equals_m3A5AF2E1AEB67B31CB816D7649ECC8FFCF98C684(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_Equals_m18428F9ACDD4E94F1CE07FEDAEB2DC9543ACDD8E(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_GetHashCode_m450C6BDF3F2C68FB8436D2E7BD140C066D286420(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_ToString_m4A829D4BB12357ABD52AEE6E4ACCC9FAABA579C9(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_WriteTo_m4C845FF2BC77764964AE297D703F96B634450C20(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_CalculateSize_mD5654C96128D33A3EBCF9764E932F5D8DDEAF146(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_MergeFrom_mB73D8207733526C9036DF85E97C6A1E90B8225CD(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_MergeFrom_m18F7E90BD4C1D0C66CED0F3F99663CB0BCA7CA54(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5____Parser_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5____Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5____Value_PropertyInfo(CustomAttributesCache* cache)
{
	{
		DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 * tmp = (DebuggerNonUserCodeAttribute_t47FE9BBE8F4A377B2EDD62B769D2AF2392ED7D41 *)cache->attributes[0];
		DebuggerNonUserCodeAttribute__ctor_m91A90A6224EE679EBFC714DA3C5D2B006974D8AF(tmp, NULL);
	}
}
static void U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tBABEF654FA9C46AD88E37D940BD344845264E857_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Unity_MLU2DAgents_CommunicatorObjects_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Unity_MLU2DAgents_CommunicatorObjects_AttributeGenerators[279] = 
{
	U3CU3Ec_t980D03921C98FEDD1910C8CC3FB0A389B80F45D2_CustomAttributesCacheGenerator,
	U3CU3Ec_tB35EAAD104D4D4FBCFCA64AA195BBCC248B50AE1_CustomAttributesCacheGenerator,
	U3CU3Ec_tDDBACA40EEF08F9CC085DD4A696D77FA030A743B_CustomAttributesCacheGenerator,
	U3CU3Ec_t9F118173C37A39382F5FEDCFC5702900DE4448A1_CustomAttributesCacheGenerator,
	U3CU3Ec_tA308CA3B51BF406264B754641DDF3E1EDB2AA844_CustomAttributesCacheGenerator,
	Types_tBE5DEEE2E2F311A4EAD67B7B451A3780CB9B9194_CustomAttributesCacheGenerator,
	U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E_CustomAttributesCacheGenerator,
	U3CU3Ec_tE8A0D5AE0D983307B53FACA7022F8D6ADD628746_CustomAttributesCacheGenerator,
	U3CU3Ec_tC647AD0CCD963DF1F30828A45917F1C612BCB2CA_CustomAttributesCacheGenerator,
	U3CU3Ec_t74C7F4954CBFBA5408E655E550951B6B3F17EA42_CustomAttributesCacheGenerator,
	U3CU3Ec_t094218609E1453AF09C8C1B3620C5BD8FDD2488B_CustomAttributesCacheGenerator,
	U3CU3Ec_t1F27885219118941179A8E1DDC6CE2B72663C9A1_CustomAttributesCacheGenerator,
	Types_t67EE0CDE58D2895A065ACA004A8B8F7CC18C5175_CustomAttributesCacheGenerator,
	U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1_CustomAttributesCacheGenerator,
	U3CU3Ec_t492C5EED8F898ACD70A510F95585858D56A0D7F2_CustomAttributesCacheGenerator,
	Types_tCEFFA249D8D42DEF98ADFD1A5FAAAF215B6186F9_CustomAttributesCacheGenerator,
	U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062_CustomAttributesCacheGenerator,
	U3CU3Ec_tBABEF654FA9C46AD88E37D940BD344845264E857_CustomAttributesCacheGenerator,
	CommandProto_t058095ED7EF482C7AB215F158710C57BD8C3F98B_CustomAttributesCacheGenerator_Step,
	CommandProto_t058095ED7EF482C7AB215F158710C57BD8C3F98B_CustomAttributesCacheGenerator_Reset,
	CommandProto_t058095ED7EF482C7AB215F158710C57BD8C3F98B_CustomAttributesCacheGenerator_Quit,
	CompressionTypeProto_tEFE19059E2ED43B6C85491BF694AC6FB043C7C4A_CustomAttributesCacheGenerator_None,
	CompressionTypeProto_tEFE19059E2ED43B6C85491BF694AC6FB043C7C4A_CustomAttributesCacheGenerator_Png,
	SpaceTypeProto_tDA4BBBEF1479203C847467F3FBB926D0C11336CC_CustomAttributesCacheGenerator_Discrete,
	SpaceTypeProto_tDA4BBBEF1479203C847467F3FBB926D0C11336CC_CustomAttributesCacheGenerator_Continuous,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto__ctor_m45827FC1FC4D1DB855C380DE272030258CB178A5,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto__ctor_m7CCEDB9C6725926911B2A64B0DB6039A07589056,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_Clone_m774A9CD63B92D7430E7D9E2F90F11200878A6709,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_Equals_mD3A605F6C4253B4EE4FEB1A5FD3A027B9C8A9281,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_Equals_m83FF84EB2B21C4380664D693D55A18589C647C85,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_GetHashCode_m01EBC03648DC933A61F57B6B130EC5563CE72546,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_ToString_m0A80CB05A0AEE772FBE5AF5D89FE97F1CA2DFC75,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_WriteTo_mF83CB266FD7B26930BF53E506436CA06C18F0062,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_CalculateSize_m9D1199145479FA6DDF23FF218059EB08258CD6FD,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_MergeFrom_m490A00EB14BB867B1E49E7F8F001165DE56E1085,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_MergeFrom_m7252C1B2D2E24AB6E174E0E9862795245B762409,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto__ctor_mE730F3CFEDC6FBF4E47D89521AA73D1B6BA6466E,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto__ctor_m1662BCB00A97B1EEACFDD09E302E1E7B8BE558B1,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_Clone_m8B1F488281FD41768569E8F34828B25DAC6786B6,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_Equals_m5F7A7DBDA37AFC422780F99E9FE4C7D66351B23E,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_Equals_m0D5032F58999510F9CEC40C119BBE0294985C5A2,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_GetHashCode_m83BBA5EB2A3DBC4FE280012C3F3A5F4E5FC0C7EB,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_ToString_m8CC2D32D1C4298D88A2B388808198EA9927985D1,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_WriteTo_m841656BC59D6274E51F100919FEEA2683B65A7F7,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_CalculateSize_m57448E75249828596F00A5CE24F07063E93589D9,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_MergeFrom_m7B6D84CFFF63EFD129607243481C8874EDB5E515,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_MergeFrom_mA1BDB625F16552F42C76866DA4BDE3019D7032FE,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto__ctor_m95D4C963380EC8CE617B0EAD920FE79005E53029,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto__ctor_m641A3FB096E7C184A962A9DEF8D4ABAAEBCEABA0,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_Clone_m60AA0FE8232130E286E32D0862799A152A9E67A6,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_Equals_mFD916C6E4D7B603BF28DE619C7DA18290040D0B2,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_Equals_mF7CD5DDF192AFD576913D3CC1A746F5FAAF6CC87,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_GetHashCode_m27C2BD6A69D6508C6B58FBD52D875BF70133C945,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_ToString_m6FBC1821CB2150773090BD7C5F57B6C54FBA7E57,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_WriteTo_m04A2E3AFEC50741036F3D5AE0F0EC0FF5E637A5F,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_CalculateSize_mC3E730E59A0444FEC131A5C8E5CC12BFF94E7E29,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_MergeFrom_m55EBAF4828260C7264CAB1348B18AA11DD959BE3,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_MergeFrom_m5377D91FBF26C113736F8A3C5B2836928C6A5257,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto__ctor_m804C9F12FB6CDE0695E4390B85A6BEFC4139644F,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto__ctor_m0534775D88E5D019CEBDD9DD14B6DD216F51837F,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_Clone_m91D59F3B5A1DF19B643F3E19D0917CAA7A4FCFC5,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_Equals_mA5947CBAF8E4F1EE9CA62C8F058C788DC65996BB,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_Equals_m953B1713ACD46B0DA38AD3DBD082EF42E680397E,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_GetHashCode_m7A6EA45ADB5A7A2C5AC9D3713DF40BD99A0C491F,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_ToString_m6BC123F951F28F006316F11A86CE7569AE9746C2,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_WriteTo_mC20BBBC53F3FC0CFB64A93597DD295A159072EEF,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_CalculateSize_mA517AB8D8C0BBD35ECD659E767852A0FC082A783,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_MergeFrom_m238A49E3853F3C39CB95A62DABB6BD66A4E2F960,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_MergeFrom_m947808DDC3FD92A55CFE1609469EFFD5275A35EF,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto__ctor_m0F74FE0F956DC1424E75E26CECD8FBA4745E3466,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto__ctor_mEFDBF10241795D71B58930DAAEC773E37EC61A8A,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_Clone_mD0BC330D6C72D7BD7BE70E4500E69BDD146DE11D,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_Equals_m5F304C9497102F87EEB895DD86D4808034EDC5CA,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_Equals_m3C127DD9692ED6CFA6FA01B3A2D14F04B978EF91,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_GetHashCode_mBF51D599F2DB83043FBE5B5752E1022D99763478,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_ToString_m39068F8FE8CFAD97BDCD435E040CE48443753984,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_WriteTo_m0635AC074F790742E1A38696821057A711F7939E,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_CalculateSize_m5B29591B405E0FA8B1CCAFC7BAB902FA95903014,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_MergeFrom_mE0BD7EC9F0A37B6E272C67FD2E101C6220558EEA,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_MergeFrom_m200F2656F617A92118DEB407674BC927701F5108,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto__ctor_mAC8BFF6E6FA844D941E1355423A24E507877FA41,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto__ctor_m94C80BA68091E869E0E6A1FCC0FFB4B8FAC4A182,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_Clone_mDB0E140A150107A8726F88D56BA5851F06CEA326,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_Equals_mD893399B0DA57B1C67BA16A6BB167FCD05C48DAE,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_Equals_m54D439A8F64F33DC8FABEB53E577D69AB6BC2EA8,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_GetHashCode_m4E4721ACE98D97819992E808E478D4AD0F3378A9,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_ToString_m35649D8FCD31D650692CF7DAD631ED3C1F6A4337,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_WriteTo_mE79691FA1A8D48DB51FBF838B170083A2523BD8A,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_CalculateSize_mFDD502D7E89332F35BFFC399203BB170C1086088,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_MergeFrom_m8F556A1EEDB0C9926C9E4978D0559CAE05643411,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_MergeFrom_mCD2A340FEA1FBB33E8479D6B89CDF28DA90D1C09,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData__ctor_mC361BFD104C98A1BF2F749FB90AC38283DE76AE1,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData__ctor_m902C797C1E728C9AE625C0DFD0D1730189889765,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_Clone_m562B222DFADB0B0555BC21EF0B166A05147EEC49,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_Equals_mFA73A43DAD1E51A29955E153313512141E187175,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_Equals_mF2A6D500ABB98F2974D03CEB1979CAD879F4EB8F,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_GetHashCode_mC0AC712395725D5A7EAEEF62B305058752A399DA,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_ToString_mDE283425EF3C6C7ABE95D6011A5D3BF018FC1C9D,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_WriteTo_mC693F9D738B889203423F2967BCE31DEE798F6C9,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_CalculateSize_mB94DEE57B4075C5D0684F156D6ABF9196686DA7A,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_MergeFrom_mA416BF8BC216C5D60CA429773A477AFB54AA6349,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_MergeFrom_m34CDDF4491CFFC0F2CC43095C29ECE17D6AB6C55,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto__ctor_m57E4E42DFD847CBCE7F0B8B826B4E4C0C339BE69,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto__ctor_m2A30ACE5E3BA8EE419B4784E18F5ACA0D09B535C,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_Clone_m450B7FF90B9174693BEAF57DB67B038C849DCF68,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_Equals_m9796A5E4C673D12E74FCFC00A047BB37BB688754,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_Equals_m9675D20C26D2D0A4CBD66F050F0B988E7530908E,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_GetHashCode_mAFBB40119A37E6FF9B161E00BE2E9E57FBB528B2,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_ToString_m910D01F7777A45BCB0C097C7F40FBA01BA5CDE63,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_WriteTo_m9B44941DD2DAA73C098C5294D1EEB8DDF9658FCD,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_CalculateSize_m70118B211EF67BC00021763BE72176ACDB833AA9,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_MergeFrom_m1B01D1B10F8DF9D3528144AD7BEA845512A13957,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_MergeFrom_mED094D8140C4E5DD46B4124AD8303F1A589C2E78,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto__ctor_m3B2F85244B4DC767DC064A7AFD5E17FCC84AC43E,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto__ctor_m72CCC0B4EA5536F9F96FF424064A9F45620A1911,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_Clone_mC007C623525C9B51F183CA097FE84F94E5CCD5DA,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_Equals_m08A6F72007F36E83B07ECB7A95FDD76D10B949EA,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_Equals_m2BFFE86D341B3E5DC11B6210ADB085C44D7D5015,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_GetHashCode_m837986906EA92BADE7FC5FE08E67AC93CC0B87A7,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_ToString_m50208C9F1C120B5766AF7273810CDEF5C4B2B448,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_WriteTo_mB31EBD06BEE994A49AB3B07B61EC34EA34B4E2E3,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_CalculateSize_mD3C6B6BC045913C9B792ADA6F7AC3B4F39FEBE78,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_MergeFrom_m9A020DD15C533D2A898145FCE04F5D1B8B27B543,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_MergeFrom_mCFF956406E20D489C22E1727BF9682B19CAF139F,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto__ctor_m683F130C5852CB05830B81AB39CCA0C6FF0A8DF4,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto__ctor_m3727A1D068F5F624CDF3314E1F4B14F72AA397C9,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_Clone_m04D799EFB5B787368C1E7F53FCFCF954733B668B,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_Equals_m9BF44AFC6EAFE3B169DDFB348DD6083D9568BA98,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_Equals_m914BA4BDFFC6A52E4B0C37854068E26183FB9926,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_GetHashCode_mDC0DBDEB0A13F5DBADF67203B236534D2ECF15E9,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_ToString_m05BF76CE1B8A53051910731B343DF84663971403,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_WriteTo_m8CE1327654E8E7BFA46B299A295D05C49D3D4A67,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_CalculateSize_m9579A1AAF35EFCC12D1A7B420F19CA117BD4FB80,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_MergeFrom_m47D1F2C0DC2BD24471B18F39C6C7312D33DF8DAD,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_MergeFrom_mF089DC94A9FB0AB9BA49D6B6B5D50E0185799520,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto__ctor_mA94457FB3936C72AB9A43DA0859411E32A0D99C6,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto__ctor_mAF913554D5EA638F71C7E2B4FF0DECF375696FBA,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_Clone_mCD58BA19A6A7075233A24BC355354BC4F5E66AA8,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_Equals_mD954104C858274E57EC21B3249C3204773BB9800,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_Equals_m1A49BE49EC9EBE0C55FDF759E8F4356D0D7DBD77,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_GetHashCode_m3F2B47D8B1DD52D281F63DF3183B992888794F5E,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_ToString_mA29B89CC5FF6759951FE46F0B56EC826E560B03B,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_WriteTo_m074EF56A46A75DEC64D2CD7E52C055A4D773814D,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_CalculateSize_m5B56D62B2CD65683998A3142A470C1074EDC461C,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_MergeFrom_mDBBEAC76316DDB715C731E36E9EE5E3340E234FE,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_MergeFrom_mBE0389746E22C3E4E10989D851909B650FED9B4F,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto__ctor_m552A099E20081FA48E583C5379715C060BF951AA,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto__ctor_mC45B7B120E8E0B108E6A40FA0A7A535D375C562B,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_Clone_mA28CF7393597EA8779F0B9D3782A113DF051B0D4,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_Equals_m0E002E15F46269B89D611F435AA1C6BD6CB44861,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_Equals_m7DEA93C5CBC00D1CBD2E6345CC66916E87B86A17,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_GetHashCode_mF3747453353D8746BB3594103B5808E35AB898E3,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_ToString_m50F72994DDA75345D9444381F67AA69E7D3E763F,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_WriteTo_mAAD984F6C7C118177F6588B1F02B2F8D120DD7E5,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_CalculateSize_m9977EA88DA3F9EDE6B4AAA4A3339D6A90AF91AB3,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_MergeFrom_mB1C4E38297CF51C740DB4557809CD6659C5E03DA,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_MergeFrom_m7018E0B61EF92A3D223EED445C95FC43EC6C3872,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto__ctor_mCE34C0822ABC92DDAB72EB25AB114000D33A5E45,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto__ctor_m8C8672752CAF17D32DFD161C68E9E25C28B91405,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_Clone_mC5105F5271B40E7AC41B905A3E7FD440C2ED3D18,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_Equals_mFB913E506159336F45920A180238F2FFB4B23D52,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_Equals_mC03D738AA0B2B3040B279F4CC6CE73544DA3D7D0,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_GetHashCode_mA5B39F94D0C457A55D2F4BBB4193D3114DF9625B,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_ToString_mBA6C6A1C1E6034C5458218F81EF204C6F8AEFC72,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_WriteTo_m36F37BCD69ECBC5A6F33E239E03B3FF0179FE33E,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_CalculateSize_m4E8640B72B0AC05573E60F8C3AF11D2E4401957F,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_MergeFrom_m28355491B18D1344670601B1C60B68FB623FDE7A,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_MergeFrom_m5F3EFF91351B4C6893004D70B36B79F8858178DB,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto__ctor_mDC072D8577206C900EFF8C9533C4D89431A07F1C,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto__ctor_m0EDC85337A3DD8FA01C304B6822A315267005291,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_Clone_m5D983544CC6512263C3AB63F74E75C61DC0FCE2A,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_Equals_m80EADB95FA9EEE21717ABB978B91217C4039833B,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_Equals_m3600B470E537B7E9121E647908C7FB7A8EF3E6E8,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_GetHashCode_mF9F4E27E24137C82CED52B3ED7E6C23250AF7738,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_ToString_mE9F43052E2914036B36E8BABBA4550055284A647,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_WriteTo_m124884B35E8524FB04A11E04E5CF214D06F747EE,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_CalculateSize_m7F69E280F6662B1395ACA4B0FDF1B8FA5B391746,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_MergeFrom_m3E968619DC1203C0AD3571F0C741213B00056732,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_MergeFrom_mDF2F8EF5E4B9FD7331866A47E200F9AA041A8FE9,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto__ctor_mD6804758545863CF8E4DB5EE501B7F3A7AFA85E5,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto__ctor_m2CBA7E17614C4FCC23D329DE91BD6C672471CA1C,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_Clone_mC85511EFF06504FE071ABAA07FD8B2E603CBB186,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_Equals_m3A5AF2E1AEB67B31CB816D7649ECC8FFCF98C684,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_Equals_m18428F9ACDD4E94F1CE07FEDAEB2DC9543ACDD8E,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_GetHashCode_m450C6BDF3F2C68FB8436D2E7BD140C066D286420,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_ToString_m4A829D4BB12357ABD52AEE6E4ACCC9FAABA579C9,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_WriteTo_m4C845FF2BC77764964AE297D703F96B634450C20,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_CalculateSize_mD5654C96128D33A3EBCF9764E932F5D8DDEAF146,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_MergeFrom_mB73D8207733526C9036DF85E97C6A1E90B8225CD,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_MergeFrom_m18F7E90BD4C1D0C66CED0F3F99663CB0BCA7CA54,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760____Parser_PropertyInfo,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760____Descriptor_PropertyInfo,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760____VectorActions_PropertyInfo,
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_CustomAttributesCacheGenerator_AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760____Value_PropertyInfo,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____Parser_PropertyInfo,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____Descriptor_PropertyInfo,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____Reward_PropertyInfo,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____Done_PropertyInfo,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____MaxStepReached_PropertyInfo,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____Id_PropertyInfo,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____ActionMask_PropertyInfo,
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_CustomAttributesCacheGenerator_AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4____Observations_PropertyInfo,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C____Parser_PropertyInfo,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C____Descriptor_PropertyInfo,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C____AgentInfo_PropertyInfo,
	AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C_CustomAttributesCacheGenerator_AgentInfoActionPairProto_t9A7CF009202C07031F3CD7997A64AF0E55C60A4C____ActionInfo_PropertyInfo,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____Parser_PropertyInfo,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____Descriptor_PropertyInfo,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____VectorActionSize_PropertyInfo,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____VectorActionDescriptions_PropertyInfo,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____VectorActionSpaceType_PropertyInfo,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____BrainName_PropertyInfo,
	BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10_CustomAttributesCacheGenerator_BrainParametersProto_tD37E83817B854AABF2DC96E4B8DAACD7587C5D10____IsTraining_PropertyInfo,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5____Parser_PropertyInfo,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5____Descriptor_PropertyInfo,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5_CustomAttributesCacheGenerator_UnityRLCapabilitiesProto_t3F0A132E0AE8CBE966A0033899C35398E465CCA5____BaseRLCapabilities_PropertyInfo,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____Parser_PropertyInfo,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____Descriptor_PropertyInfo,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____Shape_PropertyInfo,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____CompressionType_PropertyInfo,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____CompressedData_PropertyInfo,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____FloatData_PropertyInfo,
	ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640_CustomAttributesCacheGenerator_ObservationProto_t509D22249A7FA2C25D97E9DBA768FDEA06392640____ObservationDataCase_PropertyInfo,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885____Parser_PropertyInfo,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885____Descriptor_PropertyInfo,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_CustomAttributesCacheGenerator_FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885____Data_PropertyInfo,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329____Parser_PropertyInfo,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329____Descriptor_PropertyInfo,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329____RlInput_PropertyInfo,
	UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329_CustomAttributesCacheGenerator_UnityInputProto_t5DD404653E70C5D546485158FB3260139E864329____RlInitializationInput_PropertyInfo,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27____Parser_PropertyInfo,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27____Descriptor_PropertyInfo,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27____RlOutput_PropertyInfo,
	UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27_CustomAttributesCacheGenerator_UnityOutputProto_t71CAE883D47265386351A77BB961F9E0A2428F27____RlInitializationOutput_PropertyInfo,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD____Parser_PropertyInfo,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD____Descriptor_PropertyInfo,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD____Seed_PropertyInfo,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD____CommunicationVersion_PropertyInfo,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD____PackageVersion_PropertyInfo,
	UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD_CustomAttributesCacheGenerator_UnityRLInitializationInputProto_t703E59938E5FCE81870DC129342C341A2E1C12CD____Capabilities_PropertyInfo,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____Parser_PropertyInfo,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____Descriptor_PropertyInfo,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____Name_PropertyInfo,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____CommunicationVersion_PropertyInfo,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____LogPath_PropertyInfo,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____BrainParameters_PropertyInfo,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____PackageVersion_PropertyInfo,
	UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA_CustomAttributesCacheGenerator_UnityRLInitializationOutputProto_t6795F443468AF5EC7E448F03C27BB3F1D109B2DA____Capabilities_PropertyInfo,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851____Parser_PropertyInfo,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851____Descriptor_PropertyInfo,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851____AgentActions_PropertyInfo,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851____Command_PropertyInfo,
	UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_CustomAttributesCacheGenerator_UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851____SideChannel_PropertyInfo,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF____Parser_PropertyInfo,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF____Descriptor_PropertyInfo,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_CustomAttributesCacheGenerator_ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF____Value_PropertyInfo,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C____Parser_PropertyInfo,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C____Descriptor_PropertyInfo,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C____AgentInfos_PropertyInfo,
	UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_CustomAttributesCacheGenerator_UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C____SideChannel_PropertyInfo,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5____Parser_PropertyInfo,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5____Descriptor_PropertyInfo,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5____pbU3AU3AGoogle_Protobuf_IMessage_Descriptor_PropertyInfo,
	ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_CustomAttributesCacheGenerator_ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5____Value_PropertyInfo,
	Unity_MLU2DAgents_CommunicatorObjects_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
