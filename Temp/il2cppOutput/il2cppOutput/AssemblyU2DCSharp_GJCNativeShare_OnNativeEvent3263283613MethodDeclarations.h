#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GJCNativeShare/OnNativeEvent
struct OnNativeEvent_t3263283613;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GJCNativeShare/OnNativeEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnNativeEvent__ctor_m1397262276 (OnNativeEvent_t3263283613 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare/OnNativeEvent::Invoke(System.String)
extern "C"  void OnNativeEvent_Invoke_m3080421028 (OnNativeEvent_t3263283613 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GJCNativeShare/OnNativeEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnNativeEvent_BeginInvoke_m3263194409 (OnNativeEvent_t3263283613 * __this, String_t* ___msg0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare/OnNativeEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnNativeEvent_EndInvoke_m1065253844 (OnNativeEvent_t3263283613 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
