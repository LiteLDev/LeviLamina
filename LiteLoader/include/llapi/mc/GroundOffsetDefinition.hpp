/**
 * @file  GroundOffsetDefinition.hpp
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
 * @brief MC structure GroundOffsetDefinition.
 *
 */
struct GroundOffsetDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUNDOFFSETDEFINITION
public:
    struct GroundOffsetDefinition& operator=(struct GroundOffsetDefinition const &) = delete;
    GroundOffsetDefinition(struct GroundOffsetDefinition const &) = delete;
    GroundOffsetDefinition() = delete;
#endif

public:
    /**
     * @hash   1658018012
     * @symbol ?initialize@GroundOffsetDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   1295906746
     * @symbol ?buildSchema@GroundOffsetDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UGroundOffsetDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct GroundOffsetDefinition>> &);

};