#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct ColorDefinition {
public:
    // prevent constructor by default
    ColorDefinition& operator=(ColorDefinition const&);
    ColorDefinition(ColorDefinition const&);
    ColorDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?setColorChoice@ColorDefinition@@QEAAXAEBH@Z
    MCAPI void setColorChoice(int const& colorChoice);

    // symbol:
    // ?buildSchema@ColorDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UColorDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ColorDefinition>>& root
    );

    // NOLINTEND
};
