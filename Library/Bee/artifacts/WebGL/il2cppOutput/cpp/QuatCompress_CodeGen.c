#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void emotitron.Compression.QuatCompress::.cctor()
extern void QuatCompress__cctor_m18FFBBB8A865D5197B7E517EB1638A76874A3527 (void);
// 0x00000002 System.UInt64 emotitron.Compression.QuatCompress::Compress(UnityEngine.Quaternion,emotitron.Compression.QuatCompress/Cache)
extern void QuatCompress_Compress_m605267D00988488DDD444D702A3622B97A7E4827 (void);
// 0x00000003 UnityEngine.Quaternion emotitron.Compression.QuatCompress::Decompress(System.UInt64,emotitron.Compression.QuatCompress/Cache)
extern void QuatCompress_Decompress_m8CBFC38023A7B138BE2D0A387709D7C5CE468BA8 (void);
// 0x00000004 emotitron.Compression.QuatCompress/Cache emotitron.Compression.QuatCompress::DivideBitsAmongChannels(System.Int32)
extern void QuatCompress_DivideBitsAmongChannels_mC371082F27D456C67536070FA629D0B46F85EA5D (void);
// 0x00000005 System.Void emotitron.Compression.QuatCompress/Cache::.ctor(System.Int32,System.Int32,System.Int32)
extern void Cache__ctor_mFAD502CE8BEFCD5C9184F30F0B1BE8DEA6C0A3D8 (void);
static Il2CppMethodPointer s_methodPointers[5] = 
{
	QuatCompress__cctor_m18FFBBB8A865D5197B7E517EB1638A76874A3527,
	QuatCompress_Compress_m605267D00988488DDD444D702A3622B97A7E4827,
	QuatCompress_Decompress_m8CBFC38023A7B138BE2D0A387709D7C5CE468BA8,
	QuatCompress_DivideBitsAmongChannels_mC371082F27D456C67536070FA629D0B46F85EA5D,
	Cache__ctor_mFAD502CE8BEFCD5C9184F30F0B1BE8DEA6C0A3D8,
};
extern void Cache__ctor_mFAD502CE8BEFCD5C9184F30F0B1BE8DEA6C0A3D8_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[1] = 
{
	{ 0x06000005, Cache__ctor_mFAD502CE8BEFCD5C9184F30F0B1BE8DEA6C0A3D8_AdjustorThunk },
};
static const int32_t s_InvokerIndices[5] = 
{
	7065,
	6373,
	6301,
	6948,
	1226,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_QuatCompress_CodeGenModule;
const Il2CppCodeGenModule g_QuatCompress_CodeGenModule = 
{
	"QuatCompress.dll",
	5,
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
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
