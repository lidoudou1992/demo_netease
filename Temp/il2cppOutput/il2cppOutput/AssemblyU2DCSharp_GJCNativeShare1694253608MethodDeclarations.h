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

// GJCNativeShare
struct GJCNativeShare_t1694253608;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"

// System.Void GJCNativeShare::.ctor()
extern "C"  void GJCNativeShare__ctor_m4148000627 (GJCNativeShare_t1694253608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare::.cctor()
extern "C"  void GJCNativeShare__cctor_m3551871642 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare::_GJC_NativeShare(System.String,System.String)
extern "C"  void GJCNativeShare__GJC_NativeShare_m1444674659 (Il2CppObject * __this /* static, unused */, String_t* ___text0, String_t* ___encodedMedia1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare::_GJC_OpenAppStore(System.String)
extern "C"  void GJCNativeShare__GJC_OpenAppStore_m2743546025 (Il2CppObject * __this /* static, unused */, String_t* ___appID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GJCNativeShare GJCNativeShare::get_Instance()
extern "C"  GJCNativeShare_t1694253608 * GJCNativeShare_get_Instance_m2894719076 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare::NativeShare(System.String,UnityEngine.Texture2D)
extern "C"  void GJCNativeShare_NativeShare_m4035624863 (GJCNativeShare_t1694253608 * __this, String_t* ___text0, Texture2D_t3884108195 * ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare::OpenAppStore(System.String)
extern "C"  void GJCNativeShare_OpenAppStore_m403803719 (GJCNativeShare_t1694253608 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare::OnNativeShareSuccess(System.String)
extern "C"  void GJCNativeShare_OnNativeShareSuccess_m3021546199 (GJCNativeShare_t1694253608 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare::OnNativeShareCancel(System.String)
extern "C"  void GJCNativeShare_OnNativeShareCancel_m2670359854 (GJCNativeShare_t1694253608 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare::OnOpenAppStoreSuccess(System.String)
extern "C"  void GJCNativeShare_OnOpenAppStoreSuccess_m486788663 (GJCNativeShare_t1694253608 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare::OnOpenAppStoreFinished(System.String)
extern "C"  void GJCNativeShare_OnOpenAppStoreFinished_m1580580630 (GJCNativeShare_t1694253608 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare::OnOpenAppStoreSuccessURL(System.String)
extern "C"  void GJCNativeShare_OnOpenAppStoreSuccessURL_m820656156 (GJCNativeShare_t1694253608 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GJCNativeShare::OnOpenAppStoreFailed(System.String)
extern "C"  void GJCNativeShare_OnOpenAppStoreFailed_m2694175147 (GJCNativeShare_t1694253608 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
