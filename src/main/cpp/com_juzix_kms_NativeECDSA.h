/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_juzix_kms_NativeECDSA */

#ifndef _Included_com_juzix_kms_NativeECDSA
#define _Included_com_juzix_kms_NativeECDSA
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_juzix_kms_NativeECDSA
 * Method:    ECDSA_DiCo_Sign_Part1_SetR
 * Signature: ([B[B)Lcom/juzix/kms/NativeECDSA/ReturnSetR;
 */
JNIEXPORT jobject JNICALL Java_com_juzix_kms_NativeECDSA_ECDSA_1DiCo_1Sign_1Part1_1SetR
  (JNIEnv *, jclass, jbyteArray, jbyteArray);

/*
 * Class:     com_juzix_kms_NativeECDSA
 * Method:    ECDSA_DiCo_Sign_Part1_GetR
 * Signature: ([B[B[B[B)Lcom/juzix/kms/NativeECDSA/ReturnGetR;
 */
JNIEXPORT jobject JNICALL Java_com_juzix_kms_NativeECDSA_ECDSA_1DiCo_1Sign_1Part1_1GetR
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_juzix_kms_NativeECDSA
 * Method:    ECDSA_DiCo_Sign_Part2_Send
 * Signature: ([B[B[B[B[B[B[B)Lcom/juzix/kms/NativeECDSA/ReturnSend;
 */
JNIEXPORT jobject JNICALL Java_com_juzix_kms_NativeECDSA_ECDSA_1DiCo_1Sign_1Part2_1Send
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_juzix_kms_NativeECDSA
 * Method:    ECDSA_DiCo_Sign_Part2_Mult
 * Signature: ([B[B[B[B[B[B[B[B)Lcom/juzix/kms/NativeECDSA/ReturnMult;
 */
JNIEXPORT jobject JNICALL Java_com_juzix_kms_NativeECDSA_ECDSA_1DiCo_1Sign_1Part2_1Mult
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_juzix_kms_NativeECDSA
 * Method:    ECDSA_DiCo_Sign_Part2_Recv
 * Signature: ([B[B[B)Lcom/juzix/kms/NativeECDSA/ReturnRecv;
 */
JNIEXPORT jobject JNICALL Java_com_juzix_kms_NativeECDSA_ECDSA_1DiCo_1Sign_1Part2_1Recv
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_juzix_kms_NativeECDSA
 * Method:    ECDSA_DiCo_Sign_Part2_GetS
 * Signature: ([B[B[B[B)Lcom/juzix/kms/NativeECDSA/ReturnGetS;
 */
JNIEXPORT jobject JNICALL Java_com_juzix_kms_NativeECDSA_ECDSA_1DiCo_1Sign_1Part2_1GetS
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_juzix_kms_NativeECDSA
 * Method:    ECDSA_DiCo_Verify
 * Signature: ([B[B[B)Lcom/juzix/kms/NativeECDSA/ReturnVerify;
 */
JNIEXPORT jobject JNICALL Java_com_juzix_kms_NativeECDSA_ECDSA_1DiCo_1Verify
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
