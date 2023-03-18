/**
 * @file  SoundEventRequest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct SoundEventRequest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOUNDEVENTREQUEST
public:
    struct SoundEventRequest& operator=(struct SoundEventRequest const &) = delete;
    SoundEventRequest(struct SoundEventRequest const &) = delete;
    SoundEventRequest() = delete;
#endif

public:
    /**
     * @symbol ??0SoundEventRequest\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI SoundEventRequest(struct SoundEventRequest &&);
    /**
     * @symbol ??1SoundEventRequest\@\@QEAA\@XZ
     */
    MCAPI ~SoundEventRequest();
    /**
     * @symbol ?tryPlaySound\@SoundEventRequest\@\@SA?AV?$optional\@USoundEventRequest\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVSynchedActorData\@\@AEBUActorDefinitionIdentifier\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI static class std::optional<struct SoundEventRequest> tryPlaySound(class AutomaticID<class Dimension, int>, class SynchedActorData const &, struct ActorDefinitionIdentifier const &, enum class LevelSoundEvent, class Vec3 const &, int);

};