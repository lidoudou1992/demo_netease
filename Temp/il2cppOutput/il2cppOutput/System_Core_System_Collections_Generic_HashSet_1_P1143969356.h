﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/PrimeHelper<System.Object>
struct  PrimeHelper_t1143969356  : public Il2CppObject
{
public:

public:
};

struct PrimeHelper_t1143969356_StaticFields
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1/PrimeHelper::primes_table
	Int32U5BU5D_t3230847821* ___primes_table_0;

public:
	inline static int32_t get_offset_of_primes_table_0() { return static_cast<int32_t>(offsetof(PrimeHelper_t1143969356_StaticFields, ___primes_table_0)); }
	inline Int32U5BU5D_t3230847821* get_primes_table_0() const { return ___primes_table_0; }
	inline Int32U5BU5D_t3230847821** get_address_of_primes_table_0() { return &___primes_table_0; }
	inline void set_primes_table_0(Int32U5BU5D_t3230847821* value)
	{
		___primes_table_0 = value;
		Il2CppCodeGenWriteBarrier(&___primes_table_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
