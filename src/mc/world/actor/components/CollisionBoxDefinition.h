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
    MCAPI void initialize(class EntityContext&, class CollisionBoxComponent& component) const;

    MCAPI void setHeight(float const& height);

    MCAPI void setWidth(float const& width);

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class CollisionBoxDefinition>>&
            root
    );

    // NOLINTEND
};
