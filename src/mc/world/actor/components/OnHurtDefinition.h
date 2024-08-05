#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct OnHurtDefinition {
public:
    // prevent constructor by default
    OnHurtDefinition& operator=(OnHurtDefinition const&);
    OnHurtDefinition(OnHurtDefinition const&);
    OnHurtDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnHurtDefinition>>& root
    );

    // NOLINTEND
};
