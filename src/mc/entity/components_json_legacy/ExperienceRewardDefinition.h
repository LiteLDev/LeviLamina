#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExperienceRewardDefinition {
public:
    // prevent constructor by default
    ExperienceRewardDefinition& operator=(ExperienceRewardDefinition const&);
    ExperienceRewardDefinition(ExperienceRewardDefinition const&);
    ExperienceRewardDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addBredExpressionNode(class ExpressionNode const& node);

    MCAPI void addDeathExpressionNode(class ExpressionNode const& node);

    MCAPI void initialize(class EntityContext&, class ExperienceRewardComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExperienceRewardDefinition>>& root
    );

    // NOLINTEND
};
