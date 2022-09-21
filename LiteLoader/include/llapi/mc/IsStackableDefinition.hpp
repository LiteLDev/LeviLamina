/**
 * @file  MC/IsStackableDefinition.hpp
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
 * @brief MC structure IsStackableDefinition.
 *
 */
struct IsStackableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSTACKABLEDEFINITION
public:
    struct IsStackableDefinition& operator=(struct IsStackableDefinition const &) = delete;
    IsStackableDefinition(struct IsStackableDefinition const &) = delete;
    IsStackableDefinition() = delete;
#endif

public:
    /**
     * @hash   -888716066
     * @symbol ?initialize@IsStackableDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   928619116
     * @symbol ?uninitialize@IsStackableDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @hash   700074852
     * @symbol ?buildSchema@IsStackableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsStackableDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsStackableDefinition>> &);

};