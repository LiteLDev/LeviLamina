#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ChargeAttackDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    ChargeAttackDefinition& operator=(ChargeAttackDefinition const&);
    ChargeAttackDefinition(ChargeAttackDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChargeAttackDefinition() = default;

    MCAPI ChargeAttackDefinition();

    MCAPI void initialize(class EntityContext& entity, class ChargeAttackGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ChargeAttackDefinition>>&
            root
    );

    // NOLINTEND
};
