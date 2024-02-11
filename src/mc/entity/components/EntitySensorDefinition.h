#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

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
    // symbol: ??0EntitySensorDefinition@@QEAA@XZ
    MCAPI EntitySensorDefinition();

    // symbol: ?initialize@EntitySensorDefinition@@QEBAXAEAVEntityContext@@AEAVEntitySensorComponent@@@Z
    MCAPI void initialize(class EntityContext& entity, class EntitySensorComponent& component) const;

    // symbol:
    // ?buildSchema@EntitySensorDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEntitySensorDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EntitySensorDefinition>>& root);

    // NOLINTEND
};
