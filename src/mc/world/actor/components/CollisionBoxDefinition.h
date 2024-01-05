#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CollisionBoxDefinition {
public:
    // prevent constructor by default
    CollisionBoxDefinition& operator=(CollisionBoxDefinition const&);
    CollisionBoxDefinition(CollisionBoxDefinition const&);
    CollisionBoxDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@CollisionBoxDefinition@@QEBAXAEAVEntityContext@@AEAVCollisionBoxComponent@@@Z
    MCAPI void initialize(class EntityContext&, class CollisionBoxComponent& component) const;

    // symbol: ?setHeight@CollisionBoxDefinition@@QEAAXAEBM@Z
    MCAPI void setHeight(float const& height);

    // symbol: ?setWidth@CollisionBoxDefinition@@QEAAXAEBM@Z
    MCAPI void setWidth(float const& width);

    // symbol:
    // ?buildSchema@CollisionBoxDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VCollisionBoxDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class CollisionBoxDefinition>>&
            root
    );

    // NOLINTEND
};
