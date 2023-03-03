/**
 * @file  SwimWithEntityDefinition.hpp
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
 * @brief MC class SwimWithEntityDefinition.
 *
 */
class SwimWithEntityDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMWITHENTITYDEFINITION
public:
    class SwimWithEntityDefinition& operator=(class SwimWithEntityDefinition const &) = delete;
    SwimWithEntityDefinition(class SwimWithEntityDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0SwimWithEntityDefinition\@\@QEAA\@XZ
     */
    MCAPI SwimWithEntityDefinition();
    /**
     * @symbol  ?initialize\@SwimWithEntityDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSwimWithEntityGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class SwimWithEntityGoal &) const;
    /**
     * @symbol  ?buildSchema\@SwimWithEntityDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSwimWithEntityDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwimWithEntityDefinition>> &);

};