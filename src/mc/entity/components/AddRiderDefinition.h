#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AddRiderDefinition {
public:
    // prevent constructor by default
    AddRiderDefinition& operator=(AddRiderDefinition const&);
    AddRiderDefinition(AddRiderDefinition const&);
    AddRiderDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext& entity, class AddRiderComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AddRiderDefinition>>&
            root
    );

    // NOLINTEND
};
