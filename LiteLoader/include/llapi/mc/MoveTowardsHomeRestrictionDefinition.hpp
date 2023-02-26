/**
 * @file  MoveTowardsHomeRestrictionDefinition.hpp
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
 * @brief MC class MoveTowardsHomeRestrictionDefinition.
 *
 */
class MoveTowardsHomeRestrictionDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSHOMERESTRICTIONDEFINITION
public:
    class MoveTowardsHomeRestrictionDefinition& operator=(class MoveTowardsHomeRestrictionDefinition const &) = delete;
    MoveTowardsHomeRestrictionDefinition(class MoveTowardsHomeRestrictionDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0MoveTowardsHomeRestrictionDefinition\@\@QEAA\@XZ
     */
    MCAPI MoveTowardsHomeRestrictionDefinition();
    /**
     * @symbol  ?buildSchema\@MoveTowardsHomeRestrictionDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VMoveTowardsHomeRestrictionDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MoveTowardsHomeRestrictionDefinition>> &);

};