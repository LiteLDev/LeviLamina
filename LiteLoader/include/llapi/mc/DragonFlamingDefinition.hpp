/**
 * @file  MC/DragonFlamingDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~DragonFlamingDefinition();
    /**
     * @hash   1079941823
     * @vftbl  1
     * @symbol ?validateMobType@DragonFlamingDefinition@@UEAA_NAEAVMob@@@Z
     */
    virtual bool validateMobType(class Mob &);
    /**
     * @hash   336174124
     * @symbol ??0DragonFlamingDefinition@@QEAA@XZ
     */
    MCAPI DragonFlamingDefinition();
    /**
     * @hash   2009969715
     * @symbol ?initialize@DragonFlamingDefinition@@QEAAXAEAVEntityContext@@AEAVDragonFlamingGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class DragonFlamingGoal &);
    /**
     * @hash   1912204861
     * @symbol ?buildSchema@DragonFlamingDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDragonFlamingDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DragonFlamingDefinition>> &);

};