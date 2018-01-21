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

// GJCNativeShare/OnShareSuccess
struct OnShareSuccess_t2384183690;
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

// System.Void GJCNativeShare/OnShareSuccess::.ctor(System.Object,System.IntPtr)
extern "C"  void OnShareSuccess__ctor_m3617080417 (OnShareSuccess_t2384183690 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare/OnShareSuccess::Invoke(System.String)
extern "C"  void OnShareSuccess_Invoke_m4182017767 (OnShareSuccess_t2384183690 * __this, String_t* ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GJCNativeShare/OnShareSuccess::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnShareSuccess_BeginInvoke_m1732833780 (OnShareSuccess_t2384183690 * __this, String_t* ___platform0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare/OnShareSuccess::EndInvoke(System.IAsyncResult)
extern "C"  void OnShareSuccess_EndInvoke_m112660209 (OnShareSuccess_t2384183690 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
