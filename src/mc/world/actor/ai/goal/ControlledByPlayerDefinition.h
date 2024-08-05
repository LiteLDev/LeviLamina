#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ControlledByPlayerDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    ControlledByPlayerDefinition& operator=(ControlledByPlayerDefinition const&);
    ControlledByPlayerDefinition(ControlledByPlayerDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ControlledByPlayerDefinition() = default;

    MCAPI ControlledByPlayerDefinition();

    MCAPI void initialize(class EntityContext& entity, class ControlledByPlayerGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ControlledByPlayerDefinition>>& root
    );

    // NOLINTEND
};
