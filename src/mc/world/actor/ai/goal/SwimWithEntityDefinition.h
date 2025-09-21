#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
struct MobDescriptor;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SwimWithEntityDefinition : public ::BaseGoalDefinition {
public:
    // SwimWithEntityDefinition inner types define
    using self = ::SwimWithEntityDefinition;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                           mSuccessRate;
    ::ll::TypedStorage<4, 4, float>                           mChanceToStop;
    ::ll::TypedStorage<4, 4, float>                           mIntervalRefreshTime;
    ::ll::TypedStorage<4, 4, float>                           mCatchUpThreshold;
    ::ll::TypedStorage<4, 4, float>                           mMatchDirectionThreshold;
    ::ll::TypedStorage<4, 4, float>                           mCatchUpMultiplier;
    ::ll::TypedStorage<4, 4, float>                           mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                           mSearchRange;
    ::ll::TypedStorage<4, 4, float>                           mStopDistance;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>> mTargetTypes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwimWithEntityDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                     name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SwimWithEntityDefinition>>& root
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
