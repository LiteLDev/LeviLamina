#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct MoveInputComponent;
struct PlayerInputRequestComponent;
// clang-format on

namespace SneakTriggerSystem {

struct DetermineStatusArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MoveInputComponent const&>                    mMoveInput;
    ::ll::TypedStorage<8, 8, ::PlayerInputRequestComponent const&>           mInputRequest;
    ::ll::TypedStorage<8, 8, ::ActorDataFlagComponent const&>                mActorData;
    ::ll::TypedStorage<1, 1, bool const>                                     mIsCrawlingEnabled;
    ::ll::TypedStorage<4, 4, ::GameType>                                     mDefaultGameType;
    ::ll::TypedStorage<1, 1, bool>                                           mWasInWater;
    ::ll::TypedStorage<1, 1, bool>                                           mIsRiding;
    ::ll::TypedStorage<8, 8, ::optional_ref<::ActorGameTypeComponent const>> mActorGameType;
    // NOLINTEND

public:
    // prevent constructor by default
    DetermineStatusArgs& operator=(DetermineStatusArgs const&);
    DetermineStatusArgs(DetermineStatusArgs const&);
    DetermineStatusArgs();
};

} // namespace SneakTriggerSystem
