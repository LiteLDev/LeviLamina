#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct VariantDefinition {
public:
    // prevent constructor by default
    VariantDefinition& operator=(VariantDefinition const&);
    VariantDefinition(VariantDefinition const&);
    VariantDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@VariantDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UVariantDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct VariantDefinition>>&
            root
    );

    // NOLINTEND
};
