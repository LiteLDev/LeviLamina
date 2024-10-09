#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct WantsJockeyDefinition {
public:
    // prevent constructor by default
    WantsJockeyDefinition& operator=(WantsJockeyDefinition const&);
    WantsJockeyDefinition(WantsJockeyDefinition const&);
    WantsJockeyDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct WantsJockeyDefinition>>&
            root
    );

    // NOLINTEND
};
