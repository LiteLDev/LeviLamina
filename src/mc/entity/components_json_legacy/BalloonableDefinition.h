#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BalloonableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                      mSoftDistance;
    ::ll::TypedStorage<4, 4, float>                      mMaxDistance;
    ::ll::TypedStorage<4, 4, float>                      mInvMass;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnBalloon;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnUnballoon;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BalloonableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BalloonableDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
