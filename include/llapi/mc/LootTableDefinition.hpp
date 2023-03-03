/**
 * @file  LootTableDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure LootTableDefinition.
 *
 */
struct LootTableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTTABLEDEFINITION
public:
    struct LootTableDefinition& operator=(struct LootTableDefinition const &) = delete;
    LootTableDefinition(struct LootTableDefinition const &) = delete;
    LootTableDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@LootTableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@ULootTableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct LootTableDefinition>> &);

};