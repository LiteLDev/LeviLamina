/**
 * @file  ScaleDefinition.hpp
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
 * @brief MC structure ScaleDefinition.
 *
 */
struct ScaleDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCALEDEFINITION
public:
    struct ScaleDefinition& operator=(struct ScaleDefinition const &) = delete;
    ScaleDefinition(struct ScaleDefinition const &) = delete;
    ScaleDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@ScaleDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UScaleDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ScaleDefinition>> &);

};