#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct DyeableDefinition {
public:
    // prevent constructor by default
    DyeableDefinition& operator=(DyeableDefinition const&);
    DyeableDefinition(DyeableDefinition const&);
    DyeableDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct DyeableDefinition>>&
            root
    );

    // NOLINTEND
};
