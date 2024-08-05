#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ChargeHeldItemDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    ChargeHeldItemDefinition& operator=(ChargeHeldItemDefinition const&);
    ChargeHeldItemDefinition(ChargeHeldItemDefinition const&);
    ChargeHeldItemDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChargeHeldItemDefinition() = default;

    MCAPI void initialize(class EntityContext& entity, class ChargeHeldItemGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ChargeHeldItemDefinition>>& root
    );

    // NOLINTEND
};
