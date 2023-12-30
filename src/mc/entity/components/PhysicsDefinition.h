#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class PhysicsDefinition {
public:
    // prevent constructor by default
    PhysicsDefinition& operator=(PhysicsDefinition const&);
    PhysicsDefinition(PhysicsDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PhysicsDefinition@@QEAA@XZ
    MCAPI PhysicsDefinition();

    // symbol: ?initialize@PhysicsDefinition@@QEBAXAEAVEntityContext@@AEAVPhysicsComponent@@@Z
    MCAPI void initialize(class EntityContext& entity, class PhysicsComponent& component) const;

    // symbol:
    // ?buildSchema@PhysicsDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VPhysicsDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PhysicsDefinition>>& root
    );

    // NOLINTEND
};
