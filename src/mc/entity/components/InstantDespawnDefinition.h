#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InstantDespawnDefinition {
public:
    // prevent constructor by default
    InstantDespawnDefinition& operator=(InstantDespawnDefinition const&);
    InstantDespawnDefinition(InstantDespawnDefinition const&);
    InstantDespawnDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@InstantDespawnDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VInstantDespawnDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InstantDespawnDefinition>>& root
    );

    // NOLINTEND
};
