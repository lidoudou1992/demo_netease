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

// GJCNativeShare/OnShareCancel
struct OnShareCancel_t1124720659;
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

// System.Void GJCNativeShare/OnShareCancel::.ctor(System.Object,System.IntPtr)
extern "C"  void OnShareCancel__ctor_m3925156666 (OnShareCancel_t1124720659 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare/OnShareCancel::Invoke(System.String)
extern "C"  void OnShareCancel_Invoke_m1971944302 (OnShareCancel_t1124720659 * __this, String_t* ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GJCNativeShare/OnShareCancel::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnShareCancel_BeginInvoke_m4028911603 (OnShareCancel_t1124720659 * __this, String_t* ___platform0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare/OnShareCancel::EndInvoke(System.IAsyncResult)
extern "C"  void OnShareCancel_EndInvoke_m3917431370 (OnShareCancel_t1124720659 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
