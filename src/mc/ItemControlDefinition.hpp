/**
 * @file  ItemControlDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ItemControlDefinition.
 *
 */
struct ItemControlDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMCONTROLDEFINITION
public:
    struct ItemControlDefinition& operator=(struct ItemControlDefinition const &) = delete;
    ItemControlDefinition(struct ItemControlDefinition const &) = delete;
    ItemControlDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?addItemByName\@ItemControlDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addItemByName(std::string const &);
    /**
     * @symbol  ?buildSchema\@ItemControlDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UItemControlDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ItemControlDefinition>> &);

};