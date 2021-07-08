#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Unity.Barracuda.iOSBLAS::iossgemm(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void iOSBLAS_iossgemm_mEFFCA8ABE3580EB653730A4E6A755531D90AF9FE (void);
// 0x00000002 System.Boolean Unity.Barracuda.iOSBLAS::IsNative()
extern void iOSBLAS_IsNative_m57FE7769A26E94918C40B1940BCDF32A6866B3D4 (void);
// 0x00000003 System.Boolean Unity.Barracuda.iOSBLAS::IsCurrentPlatformSupported()
extern void iOSBLAS_IsCurrentPlatformSupported_mA87A871569EF8F82CF10CB599F595313812FEB84 (void);
// 0x00000004 System.Void Unity.Barracuda.iOSBLAS::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void iOSBLAS_SGEMM_m9DA59FE83347445D2B165F5EA9835A87D84EB7D4 (void);
// 0x00000005 Unity.Jobs.JobHandle Unity.Barracuda.iOSBLAS::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void iOSBLAS_ScheduleSGEMM_m4517DA7A92A85DF050B63EEF027D4C8BED30C2B7 (void);
// 0x00000006 System.Void Unity.Barracuda.iOSBLAS::.ctor()
extern void iOSBLAS__ctor_m1A437D01753D6D188DFAE7BC2D23B154F47B3368 (void);
// 0x00000007 System.Void Unity.Barracuda.iOSBLAS/SGEMMJob::Execute()
extern void SGEMMJob_Execute_m5C3EABF8F7B934CAB71C349C178CF45F8CE4E2A4 (void);
static Il2CppMethodPointer s_methodPointers[7] = 
{
	iOSBLAS_iossgemm_mEFFCA8ABE3580EB653730A4E6A755531D90AF9FE,
	iOSBLAS_IsNative_m57FE7769A26E94918C40B1940BCDF32A6866B3D4,
	iOSBLAS_IsCurrentPlatformSupported_mA87A871569EF8F82CF10CB599F595313812FEB84,
	iOSBLAS_SGEMM_m9DA59FE83347445D2B165F5EA9835A87D84EB7D4,
	iOSBLAS_ScheduleSGEMM_m4517DA7A92A85DF050B63EEF027D4C8BED30C2B7,
	iOSBLAS__ctor_m1A437D01753D6D188DFAE7BC2D23B154F47B3368,
	SGEMMJob_Execute_m5C3EABF8F7B934CAB71C349C178CF45F8CE4E2A4,
};
extern void SGEMMJob_Execute_m5C3EABF8F7B934CAB71C349C178CF45F8CE4E2A4_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[1] = 
{
	{ 0x06000007, SGEMMJob_Execute_m5C3EABF8F7B934CAB71C349C178CF45F8CE4E2A4_AdjustorThunk },
};
static const int32_t s_InvokerIndices[7] = 
{
	3892,
	3766,
	3766,
	17,
	11,
	3809,
	3809,
};
extern const CustomAttributesCacheGenerator g_Unity_Barracuda_iOSBLAS_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Barracuda_iOSBLAS_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Barracuda_iOSBLAS_CodeGenModule = 
{
	"Unity.Barracuda.iOSBLAS.dll",
	7,
	s_methodPointers,
	1,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_Unity_Barracuda_iOSBLAS_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
