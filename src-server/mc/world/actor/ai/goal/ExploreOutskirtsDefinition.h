#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExploreOutskirtsDefinition : public ::BaseGoalDefinition {
public:
    // ExploreOutskirtsDefinition inner types define
    using self = ::ExploreOutskirtsDefinition;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>     mNextXZDistance;
    ::ll::TypedStorage<4, 4, int>     mNextYDistance;
    ::ll::TypedStorage<4, 4, float>   mMinimumWaitTimeSeconds;
    ::ll::TypedStorage<4, 4, float>   mMaximumWaitTimeSeconds;
    ::ll::TypedStorage<4, 4, float>   mMaximumTravelTimeSeconds;
    ::ll::TypedStorage<4, 4, float>   mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>   mExploreDistance;
    ::ll::TypedStorage<4, 4, float>   mMinimumPerimeter;
    ::ll::TypedStorage<4, 4, float>   mMinimumDistanceFromTarget;
    ::ll::TypedStorage<4, 4, float>   mWaitTimerRatio;
    ::ll::TypedStorage<4, 12, ::Vec3> mDistanceFromBoundary;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExploreOutskirtsDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                       name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ExploreOutskirtsDefinition>>& root
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
