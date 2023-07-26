/**
 * @file  ColorDefinition.hpp
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
 * @brief MC structure ColorDefinition.
 *
 */
struct ColorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLORDEFINITION
public:
    struct ColorDefinition& operator=(struct ColorDefinition const &) = delete;
    ColorDefinition(struct ColorDefinition const &) = delete;
    ColorDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?setColorChoice\@ColorDefinition\@\@QEAAXAEBH\@Z
     */
    MCAPI void setColorChoice(int const &);
    /**
     * @symbol  ?buildSchema\@ColorDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UColorDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ColorDefinition>> &);

};