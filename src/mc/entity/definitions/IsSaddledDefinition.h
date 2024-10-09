#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsSaddledDefinition {
public:
    // prevent constructor by default
    IsSaddledDefinition& operator=(IsSaddledDefinition const&);
    IsSaddledDefinition(IsSaddledDefinition const&);
    IsSaddledDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext& entity) const;

    MCAPI void uninitialize(class EntityContext& entity) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsSaddledDefinition>>&
            root
    );

    // NOLINTEND
};
