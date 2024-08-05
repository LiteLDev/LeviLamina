#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InsomniaDefinition {
public:
    // prevent constructor by default
    InsomniaDefinition& operator=(InsomniaDefinition const&);
    InsomniaDefinition(InsomniaDefinition const&);
    InsomniaDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext& entity, class InsomniaComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InsomniaDefinition>>&
            root
    );

    // NOLINTEND
};
