#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BurnsInDaylightDefinition {
public:
    // prevent constructor by default
    BurnsInDaylightDefinition& operator=(BurnsInDaylightDefinition const&);
    BurnsInDaylightDefinition(BurnsInDaylightDefinition const&);
    BurnsInDaylightDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BurnsInDaylightDefinition>>& root
    );

    // NOLINTEND
};
