/**
 * @file  DragonStrafePlayerDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"
#include "DragonBaseGoalDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonStrafePlayerDefinition.
 *
 */
class DragonStrafePlayerDefinition : public DragonBaseGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONSTRAFEPLAYERDEFINITION
public:
    class DragonStrafePlayerDefinition& operator=(class DragonStrafePlayerDefinition const &) = delete;
    DragonStrafePlayerDefinition(class DragonStrafePlayerDefinition const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0DragonStrafePlayerDefinition\@\@QEAA\@XZ
     */
    MCAPI DragonStrafePlayerDefinition();
    /**
     * @symbol ?initialize\@DragonStrafePlayerDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDragonStrafePlayerGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class DragonStrafePlayerGoal &) const;
    /**
     * @symbol ?buildSchema\@DragonStrafePlayerDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDragonStrafePlayerDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DragonStrafePlayerDefinition>> &);

};
