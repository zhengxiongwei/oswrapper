/*
 * Copyright 2010 NCHOVY
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_araqne_winapi_EventLogReader */

#ifndef _Included_org_araqne_winapi_EventLogReader
#define _Included_org_araqne_winapi_EventLogReader
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_araqne_winapi_EventLogReader
 * Method:    readAllEventLogs
 * Signature: (Ljava/lang/String;I)Ljava/util/ArrayList;
 */
JNIEXPORT jobject JNICALL Java_org_araqne_winapi_EventLogReader_readAllEventLogs
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     org_araqne_winapi_EventLogReader_EventLogIterator
 * Method:    readEventLog
 * Signature: (Ljava/lang/String;I)Lorg/araqne/winapi/EventLog;
 */
JNIEXPORT jobject JNICALL Java_org_araqne_winapi_EventLogReader_readEventLog
  (JNIEnv *, jobject, jstring, jint);

jobject getEventLogObject(JNIEnv *, LPTSTR, PEVENTLOGRECORD);
LPTSTR getEventType(WORD);
LPTSTR getMessageString(LPTSTR, LPTSTR, LPTSTR, DWORD, WORD, LPTSTR);
LPTSTR getResource(LPTSTR, LPTSTR, LPTSTR);

#ifdef __cplusplus
}
#endif
#endif
