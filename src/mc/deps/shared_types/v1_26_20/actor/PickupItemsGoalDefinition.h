#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ItemDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct PickupItemsGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                 mSpeedModifier;
    ::ll::TypedStorage<1, 1, bool>                                                  mTrackTarget;
    ::ll::TypedStorage<4, 4, int>                                                   mMaxDist;
    ::ll::TypedStorage<4, 4, int>                                                   mSearchHeight;
    ::ll::TypedStorage<4, 4, float>                                                 mGoalRadius;
    ::ll::TypedStorage<1, 1, bool>                                                  mPickupBasedOnChance;
    ::ll::TypedStorage<1, 1, bool>                                                  mCanPickupAnyItem;
    ::ll::TypedStorage<4, 4, int>                                                   mTimeoutAfterBeingAttacked;
    ::ll::TypedStorage<1, 1, bool>                                                  mCanPickupToHandOrEquipment;
    ::ll::TypedStorage<1, 1, bool>                                                  mPickupSameItemsAsInHand;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>    mOnStartEvent;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>    mOnEndEvent;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>> mExcludedItemsList;
    // NOLINTEND

public:
    // prevent constructor by default
    PickupItemsGoalDefinition(PickupItemsGoalDefinition const&);
    PickupItemsGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PickupItemsGoalDefinition(::SharedTypes::v1_26_20::PickupItemsGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_20::PickupItemsGoalDefinition&
    operator=(::SharedTypes::v1_26_20::PickupItemsGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_20::PickupItemsGoalDefinition&
    operator=(::SharedTypes::v1_26_20::PickupItemsGoalDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_20::PickupItemsGoalDefinition const&) const;

    MCAPI ~PickupItemsGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_20::PickupItemsGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
