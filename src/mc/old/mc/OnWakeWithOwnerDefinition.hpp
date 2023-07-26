/**
 * @file  OnWakeWithOwnerDefinition.hpp
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
 * @brief MC structure OnWakeWithOwnerDefinition.
 *
 */
struct OnWakeWithOwnerDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONWAKEWITHOWNERDEFINITION
public:
    struct OnWakeWithOwnerDefinition& operator=(struct OnWakeWithOwnerDefinition const &) = delete;
    OnWakeWithOwnerDefinition(struct OnWakeWithOwnerDefinition const &) = delete;
    OnWakeWithOwnerDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@OnWakeWithOwnerDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UOnWakeWithOwnerDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnWakeWithOwnerDefinition>> &);

};