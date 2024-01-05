#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct OnDeathDefinition {
public:
    // prevent constructor by default
    OnDeathDefinition& operator=(OnDeathDefinition const&);
    OnDeathDefinition(OnDeathDefinition const&);
    OnDeathDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@OnDeathDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UOnDeathDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnDeathDefinition>>&
            root
    );

    // NOLINTEND
};
