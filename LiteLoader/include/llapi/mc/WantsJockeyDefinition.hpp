/**
 * @file  WantsJockeyDefinition.hpp
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
 * @brief MC structure WantsJockeyDefinition.
 *
 */
struct WantsJockeyDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WANTSJOCKEYDEFINITION
public:
    struct WantsJockeyDefinition& operator=(struct WantsJockeyDefinition const &) = delete;
    WantsJockeyDefinition(struct WantsJockeyDefinition const &) = delete;
    WantsJockeyDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@WantsJockeyDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UWantsJockeyDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct WantsJockeyDefinition>> &);

};