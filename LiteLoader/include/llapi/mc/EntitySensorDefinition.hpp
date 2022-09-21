/**
 * @file  MC/EntitySensorDefinition.hpp
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
 * @brief MC class EntitySensorDefinition.
 *
 */
class EntitySensorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSENSORDEFINITION
public:
    class EntitySensorDefinition& operator=(class EntitySensorDefinition const &) = delete;
    EntitySensorDefinition(class EntitySensorDefinition const &) = delete;
#endif

public:
    /**
     * @hash   667107804
     * @symbol ??0EntitySensorDefinition@@QEAA@XZ
     */
    MCAPI EntitySensorDefinition();
    /**
     * @hash   -948141099
     * @symbol ?initialize@EntitySensorDefinition@@QEAAXAEAVEntityContext@@AEAVEntitySensorComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class EntitySensorComponent &);
    /**
     * @hash   -31747690
     * @symbol ?buildSchema@EntitySensorDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VEntitySensorDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EntitySensorDefinition>> &);

};