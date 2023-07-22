/**
 * @file  OnHurtDefinition.hpp
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
 * @brief MC structure OnHurtDefinition.
 *
 */
struct OnHurtDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONHURTDEFINITION
public:
    struct OnHurtDefinition& operator=(struct OnHurtDefinition const &) = delete;
    OnHurtDefinition(struct OnHurtDefinition const &) = delete;
    OnHurtDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@OnHurtDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UOnHurtDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnHurtDefinition>> &);

};