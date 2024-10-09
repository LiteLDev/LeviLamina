#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

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
    MCAPI void addDamageCondition(struct DamageCondition const& damageCondition);

    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HurtOnConditionDefinition>>& root
    );

    // NOLINTEND
};
