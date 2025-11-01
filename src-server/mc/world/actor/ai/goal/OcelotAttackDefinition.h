#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class OcelotAttackDefinition : public ::BaseGoalDefinition {
public:
    // OcelotAttackDefinition inner types define
    using self = ::OcelotAttackDefinition;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mCooldownTime;
    ::ll::TypedStorage<4, 4, float> mMaxRotationX;
    ::ll::TypedStorage<4, 4, float> mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float> mMaxDistance;
    ::ll::TypedStorage<4, 4, float> mMaxSneakRange;
    ::ll::TypedStorage<4, 4, float> mMaxSprintRange;
    ::ll::TypedStorage<4, 4, float> mReachMultiplier;
    ::ll::TypedStorage<4, 4, float> mSneakSpeedModifier;
    ::ll::TypedStorage<4, 4, float> mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, float> mWalkSpeedModifier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OcelotAttackDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(::std::string const& name, ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::OcelotAttackDefinition>>& root);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
