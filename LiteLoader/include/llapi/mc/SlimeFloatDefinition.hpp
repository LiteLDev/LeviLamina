/**
 * @file  SlimeFloatDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"
#include "BaseGoalDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SlimeFloatDefinition.
 *
 */
class SlimeFloatDefinition : public BaseGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEFLOATDEFINITION
public:
    class SlimeFloatDefinition& operator=(class SlimeFloatDefinition const &) = delete;
    SlimeFloatDefinition(class SlimeFloatDefinition const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0SlimeFloatDefinition\@\@QEAA\@XZ
     */
    MCAPI SlimeFloatDefinition();
    /**
     * @symbol ?initialize\@SlimeFloatDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSlimeFloatGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class SlimeFloatGoal &) const;
    /**
     * @symbol ?buildSchema\@SlimeFloatDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSlimeFloatDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeFloatDefinition>> &);

};
