#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"
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
    public:
        // prevent constructor by default
        PlainData& operator=(PlainData const&);
        PlainData(PlainData const&);
        PlainData();

    public:
        // NOLINTBEGIN
        // symbol: ??1PlainData@SoundEventRequest@@QEAA@XZ
        MCAPI ~PlainData();

        // NOLINTEND
    };

    struct SynchronizedPlainData {
    public:
        // prevent constructor by default
        SynchronizedPlainData& operator=(SynchronizedPlainData const&);
        SynchronizedPlainData(SynchronizedPlainData const&);
        SynchronizedPlainData();
    };

public:
    // prevent constructor by default
    SoundEventRequest& operator=(SoundEventRequest const&);
    SoundEventRequest(SoundEventRequest const&);
    SoundEventRequest();

public:
    // NOLINTBEGIN
    // symbol: ??0SoundEventRequest@@QEAA@$$QEAU0@@Z
    MCAPI SoundEventRequest(struct SoundEventRequest&&);

    // symbol: ??1SoundEventRequest@@QEAA@XZ
    MCAPI ~SoundEventRequest();

    // symbol:
    // ?tryPlaySound@SoundEventRequest@@SA?AV?$optional@USoundEventRequest@@@std@@V?$AutomaticID@VDimension@@H@@AEBUActorDataFlagComponent@@AEBUActorDefinitionIdentifier@@W4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@H@Z
    MCAPI static std::optional<struct SoundEventRequest> tryPlaySound(
        DimensionType                           dimension,
        struct ActorDataFlagComponent const&    actorData,
        struct ActorDefinitionIdentifier const& id,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data
    );

    // NOLINTEND
};
