#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MeleeAttackDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DelayedAttackDefinition : public ::MeleeAttackDefinition {
public:
    // prevent constructor by default
    DelayedAttackDefinition& operator=(DelayedAttackDefinition const&);
    DelayedAttackDefinition(DelayedAttackDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DelayedAttackDefinition() = default;

    MCAPI DelayedAttackDefinition();

    MCAPI void initialize(class EntityContext& entity, class DelayedAttackGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DelayedAttackDefinition>>& root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
