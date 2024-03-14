#ifndef __LWS_GLUE_H__
#define __LWS_GLUE_H__

#include "mod_audio_fork_twilio.h"


int parse_ws_uri(switch_channel_t *channel, const char* szServerUri, char* host, char *path, unsigned int* pPort, int* pSslFlags);

switch_status_t fork_init();
switch_status_t fork_cleanup();
switch_status_t fork_session_init(switch_core_session_t *session, responseHandler_t responseHandler,
		uint32_t samples_per_second, char *host, unsigned int port, char* path, int sampling, int sslFlags, int channels, 
    char *account_sid, char *call_sid, const char *bugname, char* metadata, void **ppUserData);
switch_status_t fork_session_cleanup(switch_core_session_t *session, const char *bugname, char* text, int channelIsClosing);
switch_status_t fork_session_pauseresume(switch_core_session_t *session, const char *bugname, int pause);
switch_status_t fork_session_graceful_shutdown(switch_core_session_t *session, const char *bugname);
switch_status_t fork_session_dtmf_text(switch_core_session_t *session, const char *bugname, const char* text);
switch_bool_t fork_frame(switch_core_session_t *session, switch_media_bug_t *bug);
switch_status_t fork_service_threads();
switch_status_t fork_session_connect(void **ppUserData);



#endif
