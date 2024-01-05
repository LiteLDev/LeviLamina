#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct OnStartTakeoffDefinition {
public:
    // prevent constructor by default
    OnStartTakeoffDefinition& operator=(OnStartTakeoffDefinition const&);
    OnStartTakeoffDefinition(OnStartTakeoffDefinition const&);
    OnStartTakeoffDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@OnStartTakeoffDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UOnStartTakeoffDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnStartTakeoffDefinition>>& root
    );

    // NOLINTEND
};
