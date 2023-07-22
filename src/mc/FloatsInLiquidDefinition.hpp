/**
 * @file  FloatsInLiquidDefinition.hpp
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
 * @brief MC structure FloatsInLiquidDefinition.
 *
 */
struct FloatsInLiquidDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOATSINLIQUIDDEFINITION
public:
    struct FloatsInLiquidDefinition& operator=(struct FloatsInLiquidDefinition const &) = delete;
    FloatsInLiquidDefinition(struct FloatsInLiquidDefinition const &) = delete;
    FloatsInLiquidDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@FloatsInLiquidDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UFloatsInLiquidDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct FloatsInLiquidDefinition>> &);

};