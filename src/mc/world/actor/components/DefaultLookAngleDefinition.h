#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct DefaultLookAngleDefinition {
public:
    // prevent constructor by default
    DefaultLookAngleDefinition& operator=(DefaultLookAngleDefinition const&);
    DefaultLookAngleDefinition(DefaultLookAngleDefinition const&);
    DefaultLookAngleDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@DefaultLookAngleDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UDefaultLookAngleDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct DefaultLookAngleDefinition>>& root
    );

    // NOLINTEND
};
