/**
 * @file  SlimeRandomDirectionDefinition.hpp
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
 * @brief MC class SlimeRandomDirectionDefinition.
 *
 */
class SlimeRandomDirectionDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMERANDOMDIRECTIONDEFINITION
public:
    class SlimeRandomDirectionDefinition& operator=(class SlimeRandomDirectionDefinition const &) = delete;
    SlimeRandomDirectionDefinition(class SlimeRandomDirectionDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0SlimeRandomDirectionDefinition\@\@QEAA\@XZ
     */
    MCAPI SlimeRandomDirectionDefinition();
    /**
     * @symbol  ?initialize\@SlimeRandomDirectionDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSlimeRandomDirectionGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class SlimeRandomDirectionGoal &) const;
    /**
     * @symbol  ?buildSchema\@SlimeRandomDirectionDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSlimeRandomDirectionDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeRandomDirectionDefinition>> &);

};