#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct FlyingSpeedDefinition {
public:
    // prevent constructor by default
    FlyingSpeedDefinition& operator=(FlyingSpeedDefinition const&);
    FlyingSpeedDefinition(FlyingSpeedDefinition const&);
    FlyingSpeedDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@FlyingSpeedDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UFlyingSpeedDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct FlyingSpeedDefinition>>&
            root
    );

    // NOLINTEND
};
