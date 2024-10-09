#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MountTameableDefinition {
public:
    // prevent constructor by default
    MountTameableDefinition& operator=(MountTameableDefinition const&);
    MountTameableDefinition(MountTameableDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI MountTameableDefinition();

    MCAPI void initialize(class EntityContext& entity, class MountTamingComponent& component) const;

    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MountTameableDefinition>>& root);

    // NOLINTEND
};
