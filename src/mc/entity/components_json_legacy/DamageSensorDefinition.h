#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DamageSensorDefinition {
public:
    // prevent constructor by default
    DamageSensorDefinition& operator=(DamageSensorDefinition const&);
    DamageSensorDefinition(DamageSensorDefinition const&);
    DamageSensorDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addDamageSensorTrigger(struct DamageSensorTrigger const& trigger);

    MCAPI void initialize(class EntityContext& entity, class DamageSensorComponent& component) const;

    MCAPI void uninitialize(class EntityContext& entity, class DamageSensorComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DamageSensorDefinition>>&
            root
    );

    // NOLINTEND
};
