#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SpawnActorDefinition {
public:
    // prevent constructor by default
    SpawnActorDefinition& operator=(SpawnActorDefinition const&);
    SpawnActorDefinition(SpawnActorDefinition const&);
    SpawnActorDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext&, class SpawnActorComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SpawnActorDefinition>>&
            root
    );

    // NOLINTEND
};
