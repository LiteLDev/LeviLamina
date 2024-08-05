#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BoostableDefinition {
public:
    // prevent constructor by default
    BoostableDefinition& operator=(BoostableDefinition const&);
    BoostableDefinition(BoostableDefinition const&);
    BoostableDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext&, class BoostableComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BoostableDefinition>>&
            root
    );

    // NOLINTEND
};
