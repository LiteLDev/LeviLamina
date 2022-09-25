/**
 * @file  IsShakingDefinition.hpp
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
 * @brief MC structure IsShakingDefinition.
 *
 */
struct IsShakingDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSHAKINGDEFINITION
public:
    struct IsShakingDefinition& operator=(struct IsShakingDefinition const &) = delete;
    IsShakingDefinition(struct IsShakingDefinition const &) = delete;
    IsShakingDefinition() = delete;
#endif

public:
    /**
     * @hash   481480606
     * @symbol ?initialize@IsShakingDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   -1259771156
     * @symbol ?uninitialize@IsShakingDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @hash   1464823238
     * @symbol ?buildSchema@IsShakingDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsShakingDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsShakingDefinition>> &);

};