#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
struct MobDescriptor;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AvoidMobTypeDefinition : public ::BaseGoalDefinition {
public:
    // AvoidMobTypeDefinition inner types define
    using self = ::AvoidMobTypeDefinition;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                            mIgnoreVisibility;
    ::ll::TypedStorage<4, 4, int>                             mAvoidTargetPositionDistanceXZ;
    ::ll::TypedStorage<4, 4, int>                             mAvoidTargetPositionDistanceY;
    ::ll::TypedStorage<4, 4, float>                           mMaximumDistance;
    ::ll::TypedStorage<4, 4, float>                           mMaximumFlee;
    ::ll::TypedStorage<4, 4, float>                           mProbabilityPerStrength;
    ::ll::TypedStorage<4, 4, float>                           mRiverSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                           mSprintDistance;
    ::ll::TypedStorage<4, 4, float>                           mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                           mWalkSpeedModifier;
    ::ll::TypedStorage<1, 1, bool>                            mRemoveTarget;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>      mOnEscapeTrigger;
    ::ll::TypedStorage<8, 32, ::std::string>                  mSoundEvent;
    ::ll::TypedStorage<4, 8, ::FloatRange>                    mSoundIntervalRange;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>> mAvoidMobs;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AvoidMobTypeDefinition() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                   name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AvoidMobTypeDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
