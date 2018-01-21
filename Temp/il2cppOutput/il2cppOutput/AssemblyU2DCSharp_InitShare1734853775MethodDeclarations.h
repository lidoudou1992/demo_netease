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

// InitShare
struct InitShare_t1734853775;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void InitShare::.ctor()
extern "C"  void InitShare__ctor_m691405244 (InitShare_t1734853775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InitShare::Start()
extern "C"  void InitShare_Start_m3933510332 (InitShare_t1734853775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InitShare::Init()
extern "C"  void InitShare_Init_m112387352 (InitShare_t1734853775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InitShare::OnShareSuccess(System.String)
extern "C"  void InitShare_OnShareSuccess_m3268265911 (InitShare_t1734853775 * __this, String_t* ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InitShare::OnShareCancel(System.String)
extern "C"  void InitShare_OnShareCancel_m2262676558 (InitShare_t1734853775 * __this, String_t* ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InitShare::ShareWithNative()
extern "C"  void InitShare_ShareWithNative_m3591573078 (InitShare_t1734853775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator InitShare::TakeScreenshot()
extern "C"  Il2CppObject * InitShare_TakeScreenshot_m4209063437 (InitShare_t1734853775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
