#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EntitySensorDefinition {
public:
    // prevent constructor by default
    EntitySensorDefinition& operator=(EntitySensorDefinition const&);
    EntitySensorDefinition(EntitySensorDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI EntitySensorDefinition();

    MCAPI void initialize(class EntityContext& entity, class EntitySensorComponent& component) const;

    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EntitySensorDefinition>>& root);

    // NOLINTEND
};
