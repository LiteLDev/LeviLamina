#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RailActivatorDefinition {
public:
    // prevent constructor by default
    RailActivatorDefinition& operator=(RailActivatorDefinition const&);
    RailActivatorDefinition(RailActivatorDefinition const&);
    RailActivatorDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RailActivatorDefinition>>& root);

    // NOLINTEND
};
