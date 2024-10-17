#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class FlockingDefinition {
public:
    // prevent constructor by default
    FlockingDefinition& operator=(FlockingDefinition const&);
    FlockingDefinition(FlockingDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI FlockingDefinition();

    MCAPI void initialize(class EntityContext& entity, class FlockingComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class FlockingDefinition>>&
            root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
