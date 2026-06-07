#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct AttackCooldownComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AttackCooldownDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnAttackCooldownComplete;
    ::ll::TypedStorage<4, 8, ::FloatRange>               mCooldownTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::AttackCooldownComponent& cooldownComponent) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AttackCooldownDefinition>>& root
    );
    // NOLINTEND
};
