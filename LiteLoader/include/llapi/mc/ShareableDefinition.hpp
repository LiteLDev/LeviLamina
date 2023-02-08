/**
 * @file  ShareableDefinition.hpp
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
 * @brief MC class ShareableDefinition.
 *
 */
class ShareableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREABLEDEFINITION
public:
    class ShareableDefinition& operator=(class ShareableDefinition const &) = delete;
    ShareableDefinition(class ShareableDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -1940187096
     * @symbol  ??0ShareableDefinition\@\@QEAA\@XZ
     */
    MCAPI ShareableDefinition();
    /**
     * @hash   -2065892366
     * @symbol  ?addShareable\@ShareableDefinition\@\@QEAAXAEBUShareable\@\@\@Z
     */
    MCAPI void addShareable(struct Shareable const &);
    /**
     * @hash   -170526886
     * @symbol  ?addShareableByName\@ShareableDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addShareableByName(std::string const &);
    /**
     * @hash   1625026922
     * @symbol  ?buildSchema\@ShareableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VShareableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ShareableDefinition>> &);

};