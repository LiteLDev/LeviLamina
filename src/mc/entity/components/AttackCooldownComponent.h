#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AttackCooldownComponent {
public:
    // AttackCooldownComponent inner types declare
    // clang-format off
    class AttackCooldownDefinition;
    // clang-format on

    // AttackCooldownComponent inner types define
    class AttackCooldownDefinition {
    public:
        // prevent constructor by default
        AttackCooldownDefinition& operator=(AttackCooldownDefinition const&);
        AttackCooldownDefinition(AttackCooldownDefinition const&);
        AttackCooldownDefinition();

    public:
        // NOLINTBEGIN
        MCAPI void initialize(class EntityContext& entity, class AttackCooldownComponent& cooldownComponent) const;

        MCAPI static void buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                          class JsonUtil::EmptyClass,
                                          class AttackCooldownComponent::AttackCooldownDefinition>>& root);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    AttackCooldownComponent& operator=(AttackCooldownComponent const&);
    AttackCooldownComponent(AttackCooldownComponent const&);
    AttackCooldownComponent();

public:
    // NOLINTBEGIN
    MCAPI ~AttackCooldownComponent();

    // NOLINTEND
};
