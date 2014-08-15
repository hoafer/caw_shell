// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/AudioRecordInput

#ifndef org_chromium_media_AudioRecordInput_JNI
#define org_chromium_media_AudioRecordInput_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kAudioRecordInputClassPath[] =
    "org/chromium/media/AudioRecordInput";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_AudioRecordInput_clazz = NULL;
}  // namespace

namespace media {

// Step 2: method stubs.
static void CacheDirectBufferAddress(JNIEnv* env, jobject obj,
    jlong nativeAudioRecordInputStream,
    jobject buffer) {
  DCHECK(nativeAudioRecordInputStream) << "CacheDirectBufferAddress";
  AudioRecordInputStream* native =
      reinterpret_cast<AudioRecordInputStream*>(nativeAudioRecordInputStream);
  return native->CacheDirectBufferAddress(env, obj, buffer);
}

static void OnData(JNIEnv* env, jobject obj,
    jlong nativeAudioRecordInputStream,
    jint size,
    jint hardwareDelayBytes) {
  DCHECK(nativeAudioRecordInputStream) << "OnData";
  AudioRecordInputStream* native =
      reinterpret_cast<AudioRecordInputStream*>(nativeAudioRecordInputStream);
  return native->OnData(env, obj, size, hardwareDelayBytes);
}

static base::subtle::AtomicWord g_AudioRecordInput_createAudioRecordInput = 0;
static ScopedJavaLocalRef<jobject>
    Java_AudioRecordInput_createAudioRecordInput(JNIEnv* env, jlong
    nativeAudioRecordInputStream,
    jint sampleRate,
    jint channels,
    jint bitsPerSample,
    jint bytesPerBuffer,
    jboolean usePlatformAEC) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AudioRecordInput_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_AudioRecordInput_clazz,
      "createAudioRecordInput",

"("
"J"
"I"
"I"
"I"
"I"
"Z"
")"
"Lorg/chromium/media/AudioRecordInput;",
      &g_AudioRecordInput_createAudioRecordInput);

  jobject ret =
    env->CallStaticObjectMethod(g_AudioRecordInput_clazz,
      method_id, nativeAudioRecordInputStream, sampleRate, channels,
          bitsPerSample, bytesPerBuffer, usePlatformAEC);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_AudioRecordInput_open = 0;
static jboolean Java_AudioRecordInput_open(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AudioRecordInput_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AudioRecordInput_clazz,
      "open",

"("
")"
"Z",
      &g_AudioRecordInput_open);

  jboolean ret =
    env->CallBooleanMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_AudioRecordInput_start = 0;
static void Java_AudioRecordInput_start(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AudioRecordInput_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AudioRecordInput_clazz,
      "start",

"("
")"
"V",
      &g_AudioRecordInput_start);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AudioRecordInput_stop = 0;
static void Java_AudioRecordInput_stop(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AudioRecordInput_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AudioRecordInput_clazz,
      "stop",

"("
")"
"V",
      &g_AudioRecordInput_stop);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AudioRecordInput_close = 0;
static void Java_AudioRecordInput_close(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AudioRecordInput_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AudioRecordInput_clazz,
      "close",

"("
")"
"V",
      &g_AudioRecordInput_close);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_AudioRecordInput_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kAudioRecordInputClassPath).obj()));
  static const JNINativeMethod kMethodsAudioRecordInput[] = {
    { "nativeCacheDirectBufferAddress",
"("
"J"
"Ljava/nio/ByteBuffer;"
")"
"V", reinterpret_cast<void*>(CacheDirectBufferAddress) },
    { "nativeOnData",
"("
"J"
"I"
"I"
")"
"V", reinterpret_cast<void*>(OnData) },
  };
  const int kMethodsAudioRecordInputSize = arraysize(kMethodsAudioRecordInput);

  if (env->RegisterNatives(g_AudioRecordInput_clazz,
                           kMethodsAudioRecordInput,
                           kMethodsAudioRecordInputSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace media

#endif  // org_chromium_media_AudioRecordInput_JNI