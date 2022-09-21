/**
 * @file  MC/CanPowerJumpDefinition.hpp
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
 * @brief MC structure CanPowerJumpDefinition.
 *
 */
struct CanPowerJumpDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANPOWERJUMPDEFINITION
public:
    struct CanPowerJumpDefinition& operator=(struct CanPowerJumpDefinition const &) = delete;
    CanPowerJumpDefinition(struct CanPowerJumpDefinition const &) = delete;
    CanPowerJumpDefinition() = delete;
#endif

public:
    /**
     * @hash   -1235164612
     * @symbol ?initialize@CanPowerJumpDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   479547772
     * @symbol ?uninitialize@CanPowerJumpDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @hash   -258597318
     * @symbol ?buildSchema@CanPowerJumpDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UCanPowerJumpDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct CanPowerJumpDefinition>> &);

};