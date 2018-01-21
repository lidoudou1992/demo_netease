#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GJCNativeShare/OnShareSuccess
struct OnShareSuccess_t2384183690;
// GJCNativeShare/OnShareCancel
struct OnShareCancel_t1124720659;
// GJCNativeShare/OnNativeEvent
struct OnNativeEvent_t3263283613;
// GJCNativeShare
struct GJCNativeShare_t1694253608;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GJCNativeShare
struct  GJCNativeShare_t1694253608  : public MonoBehaviour_t667441552
{
public:
	// GJCNativeShare/OnShareSuccess GJCNativeShare::onShareSuccess
	OnShareSuccess_t2384183690 * ___onShareSuccess_2;
	// GJCNativeShare/OnShareCancel GJCNativeShare::onShareCancel
	OnShareCancel_t1124720659 * ___onShareCancel_3;
	// GJCNativeShare/OnNativeEvent GJCNativeShare::onOpenAppStore
	OnNativeEvent_t3263283613 * ___onOpenAppStore_4;

public:
	inline static int32_t get_offset_of_onShareSuccess_2() { return static_cast<int32_t>(offsetof(GJCNativeShare_t1694253608, ___onShareSuccess_2)); }
	inline OnShareSuccess_t2384183690 * get_onShareSuccess_2() const { return ___onShareSuccess_2; }
	inline OnShareSuccess_t2384183690 ** get_address_of_onShareSuccess_2() { return &___onShareSuccess_2; }
	inline void set_onShareSuccess_2(OnShareSuccess_t2384183690 * value)
	{
		___onShareSuccess_2 = value;
		Il2CppCodeGenWriteBarrier(&___onShareSuccess_2, value);
	}

	inline static int32_t get_offset_of_onShareCancel_3() { return static_cast<int32_t>(offsetof(GJCNativeShare_t1694253608, ___onShareCancel_3)); }
	inline OnShareCancel_t1124720659 * get_onShareCancel_3() const { return ___onShareCancel_3; }
	inline OnShareCancel_t1124720659 ** get_address_of_onShareCancel_3() { return &___onShareCancel_3; }
	inline void set_onShareCancel_3(OnShareCancel_t1124720659 * value)
	{
		___onShareCancel_3 = value;
		Il2CppCodeGenWriteBarrier(&___onShareCancel_3, value);
	}

	inline static int32_t get_offset_of_onOpenAppStore_4() { return static_cast<int32_t>(offsetof(GJCNativeShare_t1694253608, ___onOpenAppStore_4)); }
	inline OnNativeEvent_t3263283613 * get_onOpenAppStore_4() const { return ___onOpenAppStore_4; }
	inline OnNativeEvent_t3263283613 ** get_address_of_onOpenAppStore_4() { return &___onOpenAppStore_4; }
	inline void set_onOpenAppStore_4(OnNativeEvent_t3263283613 * value)
	{
		___onOpenAppStore_4 = value;
		Il2CppCodeGenWriteBarrier(&___onOpenAppStore_4, value);
	}
};

struct GJCNativeShare_t1694253608_StaticFields
{
public:
	// GJCNativeShare GJCNativeShare::_instance
	GJCNativeShare_t1694253608 * ____instance_5;

public:
	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(GJCNativeShare_t1694253608_StaticFields, ____instance_5)); }
	inline GJCNativeShare_t1694253608 * get__instance_5() const { return ____instance_5; }
	inline GJCNativeShare_t1694253608 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(GJCNativeShare_t1694253608 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier(&____instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
