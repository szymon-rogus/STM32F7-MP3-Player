#ifndef player_h
#define player_h

typedef enum { PLAYING, PAUSED, STOPPED } PlayerState;

void InitAudio(void);

PlayerState GetPlayerState(void);

void Play(const char *name);

void ContinuePlaying(void);

void Pause(void);

void Resume(void);

void Stop(void);

void Reset(void);

#endif