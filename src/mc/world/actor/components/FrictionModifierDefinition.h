#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct FrictionModifierDefinition {
public:
    // prevent constructor by default
    FrictionModifierDefinition& operator=(FrictionModifierDefinition const&);
    FrictionModifierDefinition(FrictionModifierDefinition const&);
    FrictionModifierDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@FrictionModifierDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UFrictionModifierDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct FrictionModifierDefinition>>& root
    );

    // NOLINTEND
};
