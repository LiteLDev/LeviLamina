#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct LootTableDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTTABLEDEFINITION
public:
    LootTableDefinition& operator=(LootTableDefinition const&) = delete;
    LootTableDefinition(LootTableDefinition const&)            = delete;
    LootTableDefinition()                                      = delete;
#endif

public:
    /**
     * @symbol
     * ?buildSchema\@LootTableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@ULootTableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct LootTableDefinition>>&);
};
