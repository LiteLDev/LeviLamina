/**
 * @file  SlimeKeepOnJumpingDefinition.hpp
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
 * @brief MC class SlimeKeepOnJumpingDefinition.
 *
 */
class SlimeKeepOnJumpingDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEKEEPONJUMPINGDEFINITION
public:
    class SlimeKeepOnJumpingDefinition& operator=(class SlimeKeepOnJumpingDefinition const &) = delete;
    SlimeKeepOnJumpingDefinition(class SlimeKeepOnJumpingDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0SlimeKeepOnJumpingDefinition\@\@QEAA\@XZ
     */
    MCAPI SlimeKeepOnJumpingDefinition();
    /**
     * @symbol  ?initialize\@SlimeKeepOnJumpingDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSlimeKeepOnJumpingGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class SlimeKeepOnJumpingGoal &) const;
    /**
     * @symbol  ?buildSchema\@SlimeKeepOnJumpingDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSlimeKeepOnJumpingDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeKeepOnJumpingDefinition>> &);

};