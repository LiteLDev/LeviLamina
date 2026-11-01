#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10 {

struct RandomSearchAndDigGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                  mSpeedMod;
    ::ll::TypedStorage<4, 4, float>                                                  mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                                                  mDigSpawnItemPosOffset;
    ::ll::TypedStorage<4, 4, float>                                                  mDigSpawnItemAfterSeconds;
    ::ll::TypedStorage<4, 4, float>                                                  mTargetDigPositionOffset;
    ::ll::TypedStorage<4, 4, int>                                                    mFindWantedPosRetries;
    ::ll::TypedStorage<4, 4, int>                                                    mSearchRangeXZ;
    ::ll::TypedStorage<4, 4, int>                                                    mSearchRangeY;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                              mDiggingDurationRange;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                              mCooldownRangeSeconds;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>     mOnSearchingStartEvent;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>     mOnFailDuringSearchingEvent;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>     mOnDiggingStartEvent;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>     mOnItemFoundEvent;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>     mOnFailDuringDiggingEvent;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>     mOnSuccessEvent;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mTargetBlocks;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mItemTable;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RandomSearchAndDigGoalDefinition();

    MCNAPI RandomSearchAndDigGoalDefinition(::SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition&&);

    MCNAPI RandomSearchAndDigGoalDefinition(::SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition const&);

    MCNAPI ::SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition&
    operator=(::SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition&&);

    MCNAPI ::SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition&
    operator=(::SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition const&);

    MCNAPI bool operator==(::SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition const&) const;

    MCNAPI ~RandomSearchAndDigGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition&&);

    MCNAPI void* $ctor(::SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
