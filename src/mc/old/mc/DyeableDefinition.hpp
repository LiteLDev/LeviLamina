/**
 * @file  DyeableDefinition.hpp
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
 * @brief MC structure DyeableDefinition.
 *
 */
struct DyeableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYEABLEDEFINITION
public:
    struct DyeableDefinition& operator=(struct DyeableDefinition const &) = delete;
    DyeableDefinition(struct DyeableDefinition const &) = delete;
    DyeableDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@DyeableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UDyeableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct DyeableDefinition>> &);

};