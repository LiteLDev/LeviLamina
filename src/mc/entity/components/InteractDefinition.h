#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InteractDefinition {
public:
    // prevent constructor by default
    InteractDefinition& operator=(InteractDefinition const&);
    InteractDefinition(InteractDefinition const&);
    InteractDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addInteraction(class Interaction const& interaction);

    MCAPI void initialize(class EntityContext& entity, class InteractComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InteractDefinition>>&
            root
    );

    // NOLINTEND
};
