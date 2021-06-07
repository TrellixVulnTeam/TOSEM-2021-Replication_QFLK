// Copyright 2017 The Ray Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_ray_runtime_object_NativeObjectStore */

#ifndef _Included_io_ray_runtime_object_NativeObjectStore
#define _Included_io_ray_runtime_object_NativeObjectStore
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_ray_runtime_object_NativeObjectStore
 * Method:    nativePut
 * Signature: (Lio/ray/runtime/object/NativeRayObject;)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_io_ray_runtime_object_NativeObjectStore_nativePut__Lio_ray_runtime_object_NativeRayObject_2(
    JNIEnv *, jclass, jobject);

/*
 * Class:     io_ray_runtime_object_NativeObjectStore
 * Method:    nativePut
 * Signature: ([BLio/ray/runtime/object/NativeRayObject;)V
 */
JNIEXPORT void JNICALL
Java_io_ray_runtime_object_NativeObjectStore_nativePut___3BLio_ray_runtime_object_NativeRayObject_2(
    JNIEnv *, jclass, jbyteArray, jobject);

/*
 * Class:     io_ray_runtime_object_NativeObjectStore
 * Method:    nativeGet
 * Signature: (Ljava/util/List;J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_io_ray_runtime_object_NativeObjectStore_nativeGet(JNIEnv *,
                                                                                 jclass,
                                                                                 jobject,
                                                                                 jlong);

/*
 * Class:     io_ray_runtime_object_NativeObjectStore
 * Method:    nativeWait
 * Signature: (Ljava/util/List;IJ)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_io_ray_runtime_object_NativeObjectStore_nativeWait(
    JNIEnv *, jclass, jobject, jint, jlong);

/*
 * Class:     io_ray_runtime_object_NativeObjectStore
 * Method:    nativeDelete
 * Signature: (Ljava/util/List;ZZ)V
 */
JNIEXPORT void JNICALL Java_io_ray_runtime_object_NativeObjectStore_nativeDelete(
    JNIEnv *, jclass, jobject, jboolean, jboolean);

/*
 * Class:     io_ray_runtime_object_NativeObjectStore
 * Method:    nativeAddLocalReference
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL
Java_io_ray_runtime_object_NativeObjectStore_nativeAddLocalReference(JNIEnv *, jclass,
                                                                     jbyteArray,
                                                                     jbyteArray);

/*
 * Class:     io_ray_runtime_object_NativeObjectStore
 * Method:    nativeRemoveLocalReference
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL
Java_io_ray_runtime_object_NativeObjectStore_nativeRemoveLocalReference(JNIEnv *, jclass,
                                                                        jbyteArray,
                                                                        jbyteArray);

/*
 * Class:     io_ray_runtime_object_NativeObjectStore
 * Method:    nativeGetAllReferenceCounts
 * Signature: ()Ljava/util/Map;
 */
JNIEXPORT jobject JNICALL
Java_io_ray_runtime_object_NativeObjectStore_nativeGetAllReferenceCounts(JNIEnv *,
                                                                         jclass);

/*
 * Class:     io_ray_runtime_object_NativeObjectStore
 * Method:    nativeGetOwnerAddress
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_io_ray_runtime_object_NativeObjectStore_nativeGetOwnerAddress(JNIEnv *, jclass,
                                                                   jbyteArray);

/*
 * Class:     io_ray_runtime_object_NativeObjectStore
 * Method:    nativePromoteAndGetOwnershipInfo
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_io_ray_runtime_object_NativeObjectStore_nativePromoteAndGetOwnershipInfo(JNIEnv *,
                                                                              jclass,
                                                                              jbyteArray);

/*
 * Class:     io_ray_runtime_object_NativeObjectStore
 * Method:    nativeRegisterOwnershipInfoAndResolveFuture
 * Signature: ([B[B[B)V
 */
JNIEXPORT void JNICALL
Java_io_ray_runtime_object_NativeObjectStore_nativeRegisterOwnershipInfoAndResolveFuture(
    JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif