#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct HopperDefinition {
public:
    // prevent constructor by default
    HopperDefinition& operator=(HopperDefinition const&);
    HopperDefinition(HopperDefinition const&);
    HopperDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct HopperDefinition>>& root
    );

    // NOLINTEND
};
