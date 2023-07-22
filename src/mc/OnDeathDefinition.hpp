/**
 * @file  OnDeathDefinition.hpp
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
 * @brief MC structure OnDeathDefinition.
 *
 */
struct OnDeathDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONDEATHDEFINITION
public:
    struct OnDeathDefinition& operator=(struct OnDeathDefinition const &) = delete;
    OnDeathDefinition(struct OnDeathDefinition const &) = delete;
    OnDeathDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@OnDeathDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UOnDeathDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnDeathDefinition>> &);

};