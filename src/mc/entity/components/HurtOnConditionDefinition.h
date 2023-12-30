#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HurtOnConditionDefinition {
public:
    // prevent constructor by default
    HurtOnConditionDefinition& operator=(HurtOnConditionDefinition const&);
    HurtOnConditionDefinition(HurtOnConditionDefinition const&);
    HurtOnConditionDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?addDamageCondition@HurtOnConditionDefinition@@QEAAXAEBUDamageCondition@@@Z
    MCAPI void addDamageCondition(struct DamageCondition const& damageCondition);

    // symbol:
    // ?buildSchema@HurtOnConditionDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VHurtOnConditionDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HurtOnConditionDefinition>>& root
    );

    // NOLINTEND
};
