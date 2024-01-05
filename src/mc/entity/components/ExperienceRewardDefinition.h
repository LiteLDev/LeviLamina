#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

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
    // symbol: ?addBredExpressionNode@ExperienceRewardDefinition@@QEAAXAEBVExpressionNode@@@Z
    MCAPI void addBredExpressionNode(class ExpressionNode const& node);

    // symbol: ?addDeathExpressionNode@ExperienceRewardDefinition@@QEAAXAEBVExpressionNode@@@Z
    MCAPI void addDeathExpressionNode(class ExpressionNode const& node);

    // symbol: ?initialize@ExperienceRewardDefinition@@QEBAXAEAVEntityContext@@AEAVExperienceRewardComponent@@@Z
    MCAPI void initialize(class EntityContext&, class ExperienceRewardComponent& component) const;

    // symbol:
    // ?buildSchema@ExperienceRewardDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VExperienceRewardDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExperienceRewardDefinition>>& root
    );

    // NOLINTEND
};
