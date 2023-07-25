#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

struct SoundEventRequest {
public:
    // SoundEventRequest inner types declare
    // clang-format off
    struct PlainData;
    struct SynchronizedPlainData;
    // clang-format on

    // SoundEventRequest inner types define
    struct PlainData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOUNDEVENTREQUEST_PLAINDATA
    public:
        PlainData& operator=(PlainData const&) = delete;
        PlainData(PlainData const&)            = delete;
        PlainData()                            = delete;
#endif

    public:
        /**
         * @symbol ??1PlainData\@SoundEventRequest\@\@QEAA\@XZ
         */
        MCAPI ~PlainData();
    };

    struct SynchronizedPlainData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOUNDEVENTREQUEST_SYNCHRONIZEDPLAINDATA
    public:
        SynchronizedPlainData& operator=(SynchronizedPlainData const&) = delete;
        SynchronizedPlainData(SynchronizedPlainData const&)            = delete;
        SynchronizedPlainData()                                        = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOUNDEVENTREQUEST
public:
    SoundEventRequest& operator=(SoundEventRequest const&) = delete;
    SoundEventRequest(SoundEventRequest const&)            = delete;
    SoundEventRequest()                                    = delete;
#endif

public:
    /**
     * @symbol ??0SoundEventRequest\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI SoundEventRequest(struct SoundEventRequest&&);
    /**
     * @symbol ??1SoundEventRequest\@\@QEAA\@XZ
     */
    MCAPI ~SoundEventRequest();
    /**
     * @symbol
     * ?tryPlaySound\@SoundEventRequest\@\@SA?AV?$optional\@USoundEventRequest\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVSynchedActorData\@\@AEBUActorDefinitionIdentifier\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI static class std::optional<struct SoundEventRequest> tryPlaySound(
        class AutomaticID<class Dimension, int>,
        class SynchedActorData const&,
        struct ActorDefinitionIdentifier const&,
        enum class LevelSoundEvent,
        class Vec3 const&,
        int
    );
};
