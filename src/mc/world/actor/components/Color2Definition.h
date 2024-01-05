#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct Color2Definition {
public:
    // prevent constructor by default
    Color2Definition& operator=(Color2Definition const&);
    Color2Definition(Color2Definition const&);
    Color2Definition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@Color2Definition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UColor2Definition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct Color2Definition>>& root
    );

    // NOLINTEND
};
