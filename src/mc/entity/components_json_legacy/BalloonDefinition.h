#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BalloonDefinition {
public:
    // prevent constructor by default
    BalloonDefinition& operator=(BalloonDefinition const&);
    BalloonDefinition(BalloonDefinition const&);
    BalloonDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BalloonDefinition>>& root
    );

    // NOLINTEND
};
