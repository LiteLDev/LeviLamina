/**
 * @file  FrictionModifierDefinition.hpp
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
 * @brief MC structure FrictionModifierDefinition.
 *
 */
struct FrictionModifierDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FRICTIONMODIFIERDEFINITION
public:
    struct FrictionModifierDefinition& operator=(struct FrictionModifierDefinition const &) = delete;
    FrictionModifierDefinition(struct FrictionModifierDefinition const &) = delete;
    FrictionModifierDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@FrictionModifierDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UFrictionModifierDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct FrictionModifierDefinition>> &);

};