#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EatBlockDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    EatBlockDefinition& operator=(EatBlockDefinition const&);
    EatBlockDefinition(EatBlockDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EatBlockDefinition() = default;

    MCAPI EatBlockDefinition();

    MCAPI void addSuccessChanceExpressionNode(class ExpressionNode const& node);

    MCAPI void initialize(class EntityContext& entity, class EatBlockGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EatBlockDefinition>>&
            root
    );

    // NOLINTEND
};
