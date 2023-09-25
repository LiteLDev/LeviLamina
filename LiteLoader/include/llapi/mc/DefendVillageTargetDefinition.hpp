/**
 * @file  DefendVillageTargetDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"
#include "TargetGoalDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DefendVillageTargetDefinition.
 *
 */
class DefendVillageTargetDefinition : public TargetGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFENDVILLAGETARGETDEFINITION
public:
    class DefendVillageTargetDefinition& operator=(class DefendVillageTargetDefinition const &) = delete;
    DefendVillageTargetDefinition(class DefendVillageTargetDefinition const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0DefendVillageTargetDefinition\@\@QEAA\@XZ
     */
    MCAPI DefendVillageTargetDefinition();
    /**
     * @symbol ?initialize\@DefendVillageTargetDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDefendVillageTargetGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class DefendVillageTargetGoal &) const;
    /**
     * @symbol ?buildSchema\@DefendVillageTargetDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefendVillageTargetDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DefendVillageTargetDefinition>> &);

};
