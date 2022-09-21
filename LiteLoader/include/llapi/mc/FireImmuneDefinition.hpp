/**
 * @file  MC/FireImmuneDefinition.hpp
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
 * @brief MC structure FireImmuneDefinition.
 *
 */
struct FireImmuneDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREIMMUNEDEFINITION
public:
    struct FireImmuneDefinition& operator=(struct FireImmuneDefinition const &) = delete;
    FireImmuneDefinition(struct FireImmuneDefinition const &) = delete;
    FireImmuneDefinition() = delete;
#endif

public:
    /**
     * @hash   -344663700
     * @symbol ?initialize@FireImmuneDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   -1571964180
     * @symbol ?uninitialize@FireImmuneDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @hash   1691854650
     * @symbol ?buildSchema@FireImmuneDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UFireImmuneDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct FireImmuneDefinition>> &);

};