#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct GoAndGiveItemsToNoteblockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                            mRunSpeed;
    ::ll::TypedStorage<4, 4, float>                                                            mReachBlockDistance;
    ::ll::TypedStorage<4, 4, int>                                                              mListenTime;
    ::ll::TypedStorage<4, 4, float>                                                            mThrowForce;
    ::ll::TypedStorage<4, 4, float>                                                            mVerticalThrowMul;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                           mThrowSound;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnItemThrowTriggers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GoAndGiveItemsToNoteblockGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& DEFAULT_LISTEN_TIME();

    MCAPI static float const& DEFAULT_REACH_BLOCK_DISTANCE();

    MCAPI static float const& DEFAULT_RUN_SPEED();

    MCAPI static float const& DEFAULT_THROW_FORCE();

    MCAPI static float const& DEFAULT_VERTICAL_THROW_MUL();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
