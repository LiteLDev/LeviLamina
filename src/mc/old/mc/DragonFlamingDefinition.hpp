/**
 * @file  DragonFlamingDefinition.hpp
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
 * @brief MC class DragonFlamingDefinition.
 *
 */
class DragonFlamingDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONFLAMINGDEFINITION
public:
    class DragonFlamingDefinition& operator=(class DragonFlamingDefinition const &) = delete;
    DragonFlamingDefinition(class DragonFlamingDefinition const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DragonFlamingDefinition();
    /**
     * @vftbl  1
     * @symbol  ?validateMobType\@DragonFlamingDefinition\@\@UEBA_NAEAVMob\@\@\@Z
     */
    virtual bool validateMobType(class Mob &) const;
    /**
     * @symbol  ??0DragonFlamingDefinition\@\@QEAA\@XZ
     */
    MCAPI DragonFlamingDefinition();
    /**
     * @symbol  ?initialize\@DragonFlamingDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDragonFlamingGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class DragonFlamingGoal &) const;
    /**
     * @symbol  ?buildSchema\@DragonFlamingDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDragonFlamingDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DragonFlamingDefinition>> &);

};