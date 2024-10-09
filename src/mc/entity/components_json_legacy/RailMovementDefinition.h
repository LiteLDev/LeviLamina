#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RailMovementDefinition {
public:
    // prevent constructor by default
    RailMovementDefinition& operator=(RailMovementDefinition const&);
    RailMovementDefinition(RailMovementDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI RailMovementDefinition();

    MCAPI void initialize(class EntityContext&, class RailMovementComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RailMovementDefinition>>&
            root
    );

    // NOLINTEND
};
