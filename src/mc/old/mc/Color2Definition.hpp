/**
 * @file  Color2Definition.hpp
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
 * @brief MC structure Color2Definition.
 *
 */
struct Color2Definition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLOR2DEFINITION
public:
    struct Color2Definition& operator=(struct Color2Definition const &) = delete;
    Color2Definition(struct Color2Definition const &) = delete;
    Color2Definition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@Color2Definition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UColor2Definition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct Color2Definition>> &);

};