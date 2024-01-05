#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct OnIgniteDefinition {
public:
    // prevent constructor by default
    OnIgniteDefinition& operator=(OnIgniteDefinition const&);
    OnIgniteDefinition(OnIgniteDefinition const&);
    OnIgniteDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@OnIgniteDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UOnIgniteDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnIgniteDefinition>>&
            root
    );

    // NOLINTEND
};
