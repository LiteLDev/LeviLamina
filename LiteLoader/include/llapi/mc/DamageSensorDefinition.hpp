/**
 * @file  DamageSensorDefinition.hpp
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
 * @brief MC class DamageSensorDefinition.
 *
 */
class DamageSensorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGESENSORDEFINITION
public:
    class DamageSensorDefinition& operator=(class DamageSensorDefinition const &) = delete;
    DamageSensorDefinition(class DamageSensorDefinition const &) = delete;
    DamageSensorDefinition() = delete;
#endif

public:
    /**
     * @hash   -219209996
     * @symbol  ?addDamageSensorTrigger\@DamageSensorDefinition\@\@QEAAXAEBUDamageSensorTrigger\@\@\@Z
     */
    MCAPI void addDamageSensorTrigger(struct DamageSensorTrigger const &);
    /**
     * @hash   -1448841573
     * @symbol  ?initialize\@DamageSensorDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDamageSensorComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class DamageSensorComponent &) const;
    /**
     * @hash   -896664229
     * @symbol  ?uninitialize\@DamageSensorDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDamageSensorComponent\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext &, class DamageSensorComponent &) const;
    /**
     * @hash   1420933190
     * @symbol  ?buildSchema\@DamageSensorDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDamageSensorDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DamageSensorDefinition>> &);

};