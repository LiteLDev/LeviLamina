/**
 * @file  OnHurtByPlayerDefinition.hpp
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
 * @brief MC structure OnHurtByPlayerDefinition.
 *
 */
struct OnHurtByPlayerDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONHURTBYPLAYERDEFINITION
public:
    struct OnHurtByPlayerDefinition& operator=(struct OnHurtByPlayerDefinition const &) = delete;
    OnHurtByPlayerDefinition(struct OnHurtByPlayerDefinition const &) = delete;
    OnHurtByPlayerDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@OnHurtByPlayerDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UOnHurtByPlayerDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnHurtByPlayerDefinition>> &);

};