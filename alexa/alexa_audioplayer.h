/*******************************************************************************
	Copyright Ringsd. 2017.
	All Rights Reserved.
	
	File: alexa_audioplayer.h

	Description:

	TIME LIST:
	CREATE By Ringsd   2017/01/14 10:02:05

*******************************************************************************/

#ifndef _alexa_audioplayer_h_
#define _alexa_audioplayer_h_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct alexa_audioplayer alexa_audioplayer;

cJSON* audioplayer_playback_state(struct alexa_service* as);

#ifdef __cplusplus
}
#endif

#endif

/*******************************************************************************
	END OF FILE
*******************************************************************************/
