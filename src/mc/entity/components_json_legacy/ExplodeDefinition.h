#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExplodeDefinition {
public:
    // prevent constructor by default
    ExplodeDefinition& operator=(ExplodeDefinition const&);
    ExplodeDefinition(ExplodeDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI ExplodeDefinition();

    MCAPI void initialize(class EntityContext& entity, class ExplodeComponent& component) const;

    MCAPI void uninitialize(class EntityContext& entity) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExplodeDefinition>>& root
    );

    // NOLINTEND
};
