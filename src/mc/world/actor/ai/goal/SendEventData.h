#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
struct SendEventStage;
// clang-format on

struct SendEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                  minActivationRange;
    ::ll::TypedStorage<4, 4, float>                                  maxActivationRange;
    ::ll::TypedStorage<4, 4, int>                                    cooldownTime;
    ::ll::TypedStorage<4, 4, int>                                    castDuration;
    ::ll::TypedStorage<4, 4, float>                                  weight;
    ::ll::TypedStorage<1, 1, bool>                                   doCastingAnimation;
    ::ll::TypedStorage<1, 1, bool>                                   lookAtTarget;
    ::ll::TypedStorage<4, 4, int>                                    particleColor;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                    targetFilter;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> startSound;
    ::ll::TypedStorage<8, 24, ::std::vector<::SendEventStage>>       stages;
    // NOLINTEND

public:
    // prevent constructor by default
    SendEventData(SendEventData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SendEventData& operator=(::SendEventData const&);

    MCAPI ~SendEventData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
