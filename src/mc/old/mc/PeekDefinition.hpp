/**
 * @file  PeekDefinition.hpp
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
 * @brief MC class PeekDefinition.
 *
 */
class PeekDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PEEKDEFINITION
public:
    class PeekDefinition& operator=(class PeekDefinition const &) = delete;
    PeekDefinition(class PeekDefinition const &) = delete;
    PeekDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@PeekDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VPeekDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PeekDefinition>> &);

};