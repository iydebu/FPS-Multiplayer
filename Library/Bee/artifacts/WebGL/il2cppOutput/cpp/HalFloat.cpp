#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1A4C6A71B52C5F8A505FDAA619DD5E70398C39E5 
{
};

// emotitron.Compression.HalfUtilities
struct HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// emotitron.Compression.HalfUtilities/FloatToUint
struct FloatToUint_t2AB69DB024389C98549812DEB915536BC18F2AC9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 emotitron.Compression.HalfUtilities/FloatToUint::uintValue
			uint32_t ___uintValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uintValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single emotitron.Compression.HalfUtilities/FloatToUint::floatValue
			float ___floatValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_1_forAlignmentOnly;
		};
	};
};

// <Module>

// <Module>

// emotitron.Compression.HalfUtilities
struct HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields
{
	// System.UInt32[] emotitron.Compression.HalfUtilities::HalfToFloatMantissaTable
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___HalfToFloatMantissaTable_0;
	// System.UInt32[] emotitron.Compression.HalfUtilities::HalfToFloatExponentTable
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___HalfToFloatExponentTable_1;
	// System.UInt32[] emotitron.Compression.HalfUtilities::HalfToFloatOffsetTable
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___HalfToFloatOffsetTable_2;
	// System.UInt16[] emotitron.Compression.HalfUtilities::FloatToHalfBaseTable
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___FloatToHalfBaseTable_3;
	// System.Byte[] emotitron.Compression.HalfUtilities::FloatToHalfShiftTable
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FloatToHalfShiftTable_4;
};

// emotitron.Compression.HalfUtilities

// System.Byte

// System.Byte

// System.Int32

// System.Int32

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// emotitron.Compression.HalfUtilities/FloatToUint

// emotitron.Compression.HalfUtilities/FloatToUint
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



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
// System.Void emotitron.Compression.HalfUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HalfUtilities__cctor_m6E91011ACAD15B699727CA3BEFE849D38CD3E9AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatMantissaTable_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatMantissaTable_0), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatExponentTable_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatExponentTable_1), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatOffsetTable_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatOffsetTable_2), (void*)L_2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfBaseTable_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfBaseTable_3), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfShiftTable_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfShiftTable_4), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatMantissaTable_0;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		V_0 = 1;
		goto IL_008d;
	}

IL_0051:
	{
		int32_t L_6 = V_0;
		V_1 = ((int32_t)(L_6<<((int32_t)13)));
		V_2 = 0;
		goto IL_0066;
	}

IL_005a:
	{
		uint32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)8388608)));
		uint32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8<<1));
	}

IL_0066:
	{
		uint32_t L_9 = V_1;
		if (!((int32_t)((int32_t)L_9&((int32_t)8388608))))
		{
			goto IL_005a;
		}
	}
	{
		uint32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10&((int32_t)-8388609)));
		uint32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, ((int32_t)947912704)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatMantissaTable_0;
		int32_t L_13 = V_0;
		uint32_t L_14 = V_1;
		uint32_t L_15 = V_2;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)((int32_t)L_14|(int32_t)L_15)));
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_008d:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)1024))))
		{
			goto IL_0051;
		}
	}
	{
		V_0 = ((int32_t)1024);
		goto IL_00b8;
	}

IL_009d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatMantissaTable_0;
		int32_t L_19 = V_0;
		int32_t L_20 = V_0;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)939524096), ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)1024)))<<((int32_t)13))))));
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00b8:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)2048))))
		{
			goto IL_009d;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatExponentTable_1;
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		V_0 = 1;
		goto IL_00f6;
	}

IL_00cc:
	{
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)31))))
		{
			goto IL_00de;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatExponentTable_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_0;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (uint32_t)((int32_t)(L_27<<((int32_t)23))));
		goto IL_00f2;
	}

IL_00de:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatExponentTable_1;
		int32_t L_29 = V_0;
		int32_t L_30 = V_0;
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)-2147483648LL), ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)32)))<<((int32_t)23))))));
	}

IL_00f2:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00f6:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)63))))
		{
			goto IL_00cc;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatExponentTable_1;
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)31)), (uint32_t)((int32_t)1199570944));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatExponentTable_1;
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)32)), (uint32_t)((int32_t)-2147483648LL));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatExponentTable_1;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)63)), (uint32_t)((int32_t)-947912704));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatOffsetTable_2;
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		V_0 = 1;
		goto IL_013e;
	}

IL_012e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatOffsetTable_2;
		int32_t L_38 = V_0;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (uint32_t)((int32_t)1024));
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_013e:
	{
		int32_t L_40 = V_0;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)64))))
		{
			goto IL_012e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatOffsetTable_2;
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)32)), (uint32_t)0);
		V_0 = 0;
		goto IL_02cb;
	}

IL_0153:
	{
		int32_t L_42 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_42, ((int32_t)127)));
		int32_t L_43 = V_3;
		if ((((int32_t)L_43) >= ((int32_t)((int32_t)-24))))
		{
			goto IL_0198;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_44 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfBaseTable_3;
		int32_t L_45 = V_0;
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_45|0))), (uint16_t)0);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_46 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfBaseTable_3;
		int32_t L_47 = V_0;
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_47|((int32_t)256)))), (uint16_t)((int32_t)32768));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfShiftTable_4;
		int32_t L_49 = V_0;
		(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_49|0))), (uint8_t)((int32_t)24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfShiftTable_4;
		int32_t L_51 = V_0;
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_51|((int32_t)256)))), (uint8_t)((int32_t)24));
		goto IL_02c7;
	}

IL_0198:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)((int32_t)-14))))
		{
			goto IL_01fc;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_53 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfBaseTable_3;
		int32_t L_54 = V_0;
		int32_t L_55 = V_3;
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_54|0))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)1024)>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((-L_55)), ((int32_t)14)))&((int32_t)31)))))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_56 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfBaseTable_3;
		int32_t L_57 = V_0;
		int32_t L_58 = V_3;
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_57|((int32_t)256)))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)(((int32_t)1024)>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((-L_58)), ((int32_t)14)))&((int32_t)31)))))|((int32_t)32768)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfShiftTable_4;
		int32_t L_60 = V_0;
		int32_t L_61 = V_3;
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_60|0))), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(((-L_61)), 1))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfShiftTable_4;
		int32_t L_63 = V_0;
		int32_t L_64 = V_3;
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_63|((int32_t)256)))), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(((-L_64)), 1))));
		goto IL_02c7;
	}

IL_01fc:
	{
		int32_t L_65 = V_3;
		if ((((int32_t)L_65) > ((int32_t)((int32_t)15))))
		{
			goto IL_0249;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_66 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfBaseTable_3;
		int32_t L_67 = V_0;
		int32_t L_68 = V_3;
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_67|0))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)il2cpp_codegen_add(L_68, ((int32_t)15)))<<((int32_t)10)))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_69 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfBaseTable_3;
		int32_t L_70 = V_0;
		int32_t L_71 = V_3;
		(L_69)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_70|((int32_t)256)))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(L_71, ((int32_t)15)))<<((int32_t)10)))|((int32_t)32768)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfShiftTable_4;
		int32_t L_73 = V_0;
		(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_73|0))), (uint8_t)((int32_t)13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfShiftTable_4;
		int32_t L_75 = V_0;
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_75|((int32_t)256)))), (uint8_t)((int32_t)13));
		goto IL_02c7;
	}

IL_0249:
	{
		int32_t L_76 = V_3;
		if ((((int32_t)L_76) >= ((int32_t)((int32_t)128))))
		{
			goto IL_028d;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_77 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfBaseTable_3;
		int32_t L_78 = V_0;
		(L_77)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_78|0))), (uint16_t)((int32_t)31744));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_79 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfBaseTable_3;
		int32_t L_80 = V_0;
		(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_80|((int32_t)256)))), (uint16_t)((int32_t)64512));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfShiftTable_4;
		int32_t L_82 = V_0;
		(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82|0))), (uint8_t)((int32_t)24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfShiftTable_4;
		int32_t L_84 = V_0;
		(L_83)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_84|((int32_t)256)))), (uint8_t)((int32_t)24));
		goto IL_02c7;
	}

IL_028d:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_85 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfBaseTable_3;
		int32_t L_86 = V_0;
		(L_85)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_86|0))), (uint16_t)((int32_t)31744));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_87 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfBaseTable_3;
		int32_t L_88 = V_0;
		(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_88|((int32_t)256)))), (uint16_t)((int32_t)64512));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfShiftTable_4;
		int32_t L_90 = V_0;
		(L_89)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_90|0))), (uint8_t)((int32_t)13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfShiftTable_4;
		int32_t L_92 = V_0;
		(L_91)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_92|((int32_t)256)))), (uint8_t)((int32_t)13));
	}

IL_02c7:
	{
		int32_t L_93 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_93, 1));
	}

IL_02cb:
	{
		int32_t L_94 = V_0;
		if ((((int32_t)L_94) < ((int32_t)((int32_t)256))))
		{
			goto IL_0153;
		}
	}
	{
		return;
	}
}
// System.Single emotitron.Compression.HalfUtilities::Unpack(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HalfUtilities_Unpack_m789DAB8DED7666392CBA438C04CF52B02EC70FBA (uint16_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FloatToUint_t2AB69DB024389C98549812DEB915536BC18F2AC9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FloatToUint_t2AB69DB024389C98549812DEB915536BC18F2AC9));
		il2cpp_codegen_runtime_class_init_inline(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatMantissaTable_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatOffsetTable_2;
		uint16_t L_2 = ___0_value;
		int32_t L_3 = ((int32_t)((int32_t)L_2>>((int32_t)10)));
		uint32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		uint16_t L_5 = ___0_value;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, ((int32_t)((int32_t)L_5&((int32_t)1023)))));
		uint32_t L_7 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___HalfToFloatExponentTable_1;
		uint16_t L_9 = ___0_value;
		int32_t L_10 = ((int32_t)((int32_t)L_9>>((int32_t)10)));
		uint32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(&V_0)->___uintValue_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_11));
		FloatToUint_t2AB69DB024389C98549812DEB915536BC18F2AC9 L_12 = V_0;
		float L_13 = L_12.___floatValue_1;
		return L_13;
	}
}
// System.UInt16 emotitron.Compression.HalfUtilities::Pack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HalfUtilities_Pack_mF67E6386DEB92AC2B4D2759E596D9B39293BDED3 (float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FloatToUint_t2AB69DB024389C98549812DEB915536BC18F2AC9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FloatToUint_t2AB69DB024389C98549812DEB915536BC18F2AC9));
		float L_0 = ___0_value;
		(&V_0)->___floatValue_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfBaseTable_3;
		FloatToUint_t2AB69DB024389C98549812DEB915536BC18F2AC9 L_2 = V_0;
		uint32_t L_3 = L_2.___uintValue_0;
		int32_t L_4 = ((int32_t)(((int32_t)((uint32_t)L_3>>((int32_t)23)))&((int32_t)511)));
		uint16_t L_5 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		FloatToUint_t2AB69DB024389C98549812DEB915536BC18F2AC9 L_6 = V_0;
		uint32_t L_7 = L_6.___uintValue_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_StaticFields*)il2cpp_codegen_static_fields_for(HalfUtilities_t76C82AC7019D5C6AE0F3428C8215C410B042D916_il2cpp_TypeInfo_var))->___FloatToHalfShiftTable_4;
		FloatToUint_t2AB69DB024389C98549812DEB915536BC18F2AC9 L_9 = V_0;
		uint32_t L_10 = L_9.___uintValue_0;
		int32_t L_11 = ((int32_t)(((int32_t)((uint32_t)L_10>>((int32_t)23)))&((int32_t)511)));
		uint8_t L_12 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		return (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, ((int32_t)((uint32_t)((int32_t)((int32_t)L_7&((int32_t)8388607)))>>((int32_t)((int32_t)L_12&((int32_t)31))))))));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
