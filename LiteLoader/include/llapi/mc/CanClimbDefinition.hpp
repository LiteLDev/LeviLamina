/**
 * @file  MC/CanClimbDefinition.hpp
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
 * @brief MC structure CanClimbDefinition.
 *
 */
struct CanClimbDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANCLIMBDEFINITION
public:
    struct CanClimbDefinition& operator=(struct CanClimbDefinition const &) = delete;
    CanClimbDefinition(struct CanClimbDefinition const &) = delete;
    CanClimbDefinition() = delete;
#endif

public:
    /**
     * @hash   52181788
     * @symbol ?initialize@CanClimbDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   -2121195812
     * @symbol ?uninitialize@CanClimbDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @hash   -407497542
     * @symbol ?buildSchema@CanClimbDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UCanClimbDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct CanClimbDefinition>> &);

};