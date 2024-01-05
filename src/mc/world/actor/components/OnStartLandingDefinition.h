#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

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
    // symbol:
    // ?buildSchema@OnStartLandingDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UOnStartLandingDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnStartLandingDefinition>>& root
    );

    // NOLINTEND
};
