/**
 * @file  FlyingSpeedDefinition.hpp
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
 * @brief MC structure FlyingSpeedDefinition.
 *
 */
struct FlyingSpeedDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYINGSPEEDDEFINITION
public:
    struct FlyingSpeedDefinition& operator=(struct FlyingSpeedDefinition const &) = delete;
    FlyingSpeedDefinition(struct FlyingSpeedDefinition const &) = delete;
    FlyingSpeedDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@FlyingSpeedDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UFlyingSpeedDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct FlyingSpeedDefinition>> &);

};