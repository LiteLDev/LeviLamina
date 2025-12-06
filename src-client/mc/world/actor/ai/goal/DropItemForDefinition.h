#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
struct MobDescriptor;
namespace JsonUtil { struct EmptyClass; }
// clang-format on

class DropItemForDefinition : public ::BaseGoalDefinition {
public:
    // DropItemForDefinition inner types define
    using self = ::DropItemForDefinition;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                           mSecondsBeforePickup;
    ::ll::TypedStorage<4, 4, float>                           mTotalCooldownSeconds;
    ::ll::TypedStorage<4, 4, float>                           mDropItemChance;
    ::ll::TypedStorage<4, 4, float>                           mOfferingDistance;
    ::ll::TypedStorage<4, 4, float>                           mMinimumTeleportDistance;
    ::ll::TypedStorage<4, 4, float>                           mLookAtTargetMaxHeadHeight;
    ::ll::TypedStorage<8, 32, ::std::string>                  mLootTable;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>      mOnDropAttempt;
    ::ll::TypedStorage<4, 8, ::FloatRange>                    mTimeOfDayRange;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mTargetRange;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mTeleportDistanceFromTarget;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>> mTargetFilter;
    ::ll::TypedStorage<4, 4, int>                             mSearchCount;
    ::ll::TypedStorage<4, 4, int>                             mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                             mSearchRange;
    ::ll::TypedStorage<4, 4, float>                           mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                           mSpeedModifier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DropItemForDefinition() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                  name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DropItemForDefinition>>& root
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
