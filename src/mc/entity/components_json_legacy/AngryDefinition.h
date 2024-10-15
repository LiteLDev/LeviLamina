#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AngryDefinition {
public:
    // prevent constructor by default
    AngryDefinition& operator=(AngryDefinition const&);
    AngryDefinition(AngryDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI AngryDefinition();

    MCAPI void addBroadcastTargetByName(std::string const& name);

    MCAPI void initialize(class EntityContext& entity, class AngryComponent& component) const;

    MCAPI void uninitialize(class EntityContext& entity, class AngryComponent&) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AngryDefinition>>& root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
