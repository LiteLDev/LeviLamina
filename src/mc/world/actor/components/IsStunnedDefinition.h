#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsStunnedDefinition {
public:
    // prevent constructor by default
    IsStunnedDefinition& operator=(IsStunnedDefinition const&);
    IsStunnedDefinition(IsStunnedDefinition const&);
    IsStunnedDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext& entity) const;

    MCAPI void uninitialize(class EntityContext& entity) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsStunnedDefinition>>&
            root
    );

    // NOLINTEND
};
