/**
 * @file  MC/IsShearedDefinition.hpp
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
 * @brief MC structure IsShearedDefinition.
 *
 */
struct IsShearedDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSHEAREDDEFINITION
public:
    struct IsShearedDefinition& operator=(struct IsShearedDefinition const &) = delete;
    IsShearedDefinition(struct IsShearedDefinition const &) = delete;
    IsShearedDefinition() = delete;
#endif

public:
    /**
     * @hash   89831214
     * @symbol ?initialize@IsShearedDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   -1651420548
     * @symbol ?uninitialize@IsShearedDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @hash   -1360486496
     * @symbol ?buildSchema@IsShearedDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsShearedDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsShearedDefinition>> &);

};