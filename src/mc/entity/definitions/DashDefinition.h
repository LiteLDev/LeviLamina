#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DashDefinition {
public:
    // prevent constructor by default
    DashDefinition& operator=(DashDefinition const&);
    DashDefinition(DashDefinition const&);
    DashDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext& entity, class DashComponent& component) const;

    MCAPI void uninitialize(class EntityContext& entity, class DashComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DashDefinition>>& root
    );

    // NOLINTEND
};
