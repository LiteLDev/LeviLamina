/**
 * @file  SwimIdleDefinition.hpp
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
 * @brief MC class SwimIdleDefinition.
 *
 */
class SwimIdleDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMIDLEDEFINITION
public:
    class SwimIdleDefinition& operator=(class SwimIdleDefinition const &) = delete;
    SwimIdleDefinition(class SwimIdleDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0SwimIdleDefinition\@\@QEAA\@XZ
     */
    MCAPI SwimIdleDefinition();
    /**
     * @symbol  ?initialize\@SwimIdleDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSwimIdleGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class SwimIdleGoal &) const;
    /**
     * @symbol  ?buildSchema\@SwimIdleDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSwimIdleDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwimIdleDefinition>> &);

};