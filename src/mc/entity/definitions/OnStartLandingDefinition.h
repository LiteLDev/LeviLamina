#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct OnStartLandingDefinition {
public:
    // prevent constructor by default
    OnStartLandingDefinition& operator=(OnStartLandingDefinition const&);
    OnStartLandingDefinition(OnStartLandingDefinition const&);
    OnStartLandingDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnStartLandingDefinition>>& root
    );

    // NOLINTEND
};
