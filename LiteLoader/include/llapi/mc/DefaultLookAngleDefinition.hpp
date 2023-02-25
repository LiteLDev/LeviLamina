/**
 * @file  DefaultLookAngleDefinition.hpp
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
 * @brief MC structure DefaultLookAngleDefinition.
 *
 */
struct DefaultLookAngleDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFAULTLOOKANGLEDEFINITION
public:
    struct DefaultLookAngleDefinition& operator=(struct DefaultLookAngleDefinition const &) = delete;
    DefaultLookAngleDefinition(struct DefaultLookAngleDefinition const &) = delete;
    DefaultLookAngleDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@DefaultLookAngleDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UDefaultLookAngleDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct DefaultLookAngleDefinition>> &);

};