#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsIgnitedDefinition {
public:
    // prevent constructor by default
    IsIgnitedDefinition& operator=(IsIgnitedDefinition const&);
    IsIgnitedDefinition(IsIgnitedDefinition const&);
    IsIgnitedDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext& entity) const;

    MCAPI void uninitialize(class EntityContext& entity) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsIgnitedDefinition>>&
            root
    );

    // NOLINTEND
};
