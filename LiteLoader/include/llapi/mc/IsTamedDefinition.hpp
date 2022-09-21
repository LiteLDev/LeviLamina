/**
 * @file  MC/IsTamedDefinition.hpp
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
 * @brief MC structure IsTamedDefinition.
 *
 */
struct IsTamedDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISTAMEDDEFINITION
public:
    struct IsTamedDefinition& operator=(struct IsTamedDefinition const &) = delete;
    IsTamedDefinition(struct IsTamedDefinition const &) = delete;
    IsTamedDefinition() = delete;
#endif

public:
    /**
     * @hash   -132479714
     * @symbol ?initialize@IsTamedDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   -1072966100
     * @symbol ?uninitialize@IsTamedDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @hash   1367982014
     * @symbol ?buildSchema@IsTamedDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsTamedDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsTamedDefinition>> &);

};