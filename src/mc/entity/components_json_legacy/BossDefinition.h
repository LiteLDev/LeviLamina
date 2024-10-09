#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BossDefinition {
public:
    // prevent constructor by default
    BossDefinition& operator=(BossDefinition const&);
    BossDefinition(BossDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI BossDefinition();

    MCAPI void initialize(class EntityContext& entity, class BossComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BossDefinition>>& root
    );

    // NOLINTEND
};
