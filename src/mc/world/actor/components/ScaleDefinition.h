#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct ScaleDefinition {
public:
    // prevent constructor by default
    ScaleDefinition& operator=(ScaleDefinition const&);
    ScaleDefinition(ScaleDefinition const&);
    ScaleDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@ScaleDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UScaleDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ScaleDefinition>>& root
    );

    // NOLINTEND
};
