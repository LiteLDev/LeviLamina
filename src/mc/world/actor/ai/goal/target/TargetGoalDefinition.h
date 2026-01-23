#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
struct MobDescriptor;
// clang-format on

class TargetGoalDefinition : public ::BaseGoalDefinition {
public:
    // TargetGoalDefinition inner types define
    using TargetTypes = ::std::vector<::MobDescriptor>;

    using self = ::TargetGoalDefinition;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                            mAttackOwner;
    ::ll::TypedStorage<1, 1, bool>                            mMustReach;
    ::ll::TypedStorage<1, 1, bool>                            mMustSee;
    ::ll::TypedStorage<4, 4, float>                           mDefaultFollowDistance;
    ::ll::TypedStorage<4, 4, float>                           mForgetTargetTime;
    ::ll::TypedStorage<4, 4, float>                           mPersistTargetTime;
    ::ll::TypedStorage<4, 4, float>                           mTargetAcquisitionProbability;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>> mTargetTypes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TargetGoalDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
