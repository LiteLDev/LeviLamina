#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DamageOverTimeDefinition {
public:
    // prevent constructor by default
    DamageOverTimeDefinition& operator=(DamageOverTimeDefinition const&);
    DamageOverTimeDefinition(DamageOverTimeDefinition const&);
    DamageOverTimeDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext&, class DamageOverTimeComponent& component) const;

    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DamageOverTimeDefinition>>& root
    );

    // NOLINTEND
};
