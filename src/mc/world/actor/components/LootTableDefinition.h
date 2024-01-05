#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct LootTableDefinition {
public:
    // prevent constructor by default
    LootTableDefinition& operator=(LootTableDefinition const&);
    LootTableDefinition(LootTableDefinition const&);
    LootTableDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@LootTableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@ULootTableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct LootTableDefinition>>&
            root
    );

    // NOLINTEND
};
