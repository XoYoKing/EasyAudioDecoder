/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_easydarwin_audio_AudioCodec */

#ifndef _Included_org_easydarwin_audio_AudioCodec
#define _Included_org_easydarwin_audio_AudioCodec
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_easydarwin_audio_AudioCodec
 * Method:    create
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_org_easydarwin_audio_AudioCodec_create
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     org_easydarwin_audio_AudioCodec
 * Method:    decode
 * Signature: (I[BII[B[I)I
 */
JNIEXPORT jint JNICALL Java_org_easydarwin_audio_AudioCodec_decode
  (JNIEnv *, jclass, jint, jbyteArray, jint, jint, jbyteArray, jintArray);

/*
 * Class:     org_easydarwin_audio_AudioCodec
 * Method:    close
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_easydarwin_audio_AudioCodec_close
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif