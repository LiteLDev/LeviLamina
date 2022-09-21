/**
 * @file  MC/CanFlyDefinition.hpp
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
 * @brief MC structure CanFlyDefinition.
 *
 */
struct CanFlyDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANFLYDEFINITION
public:
    struct CanFlyDefinition& operator=(struct CanFlyDefinition const &) = delete;
    CanFlyDefinition(struct CanFlyDefinition const &) = delete;
    CanFlyDefinition() = delete;
#endif

public:
    /**
     * @hash   -1972977332
     * @symbol ?initialize@CanFlyDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   -1072482484
     * @symbol ?uninitialize@CanFlyDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @hash   -112252358
     * @symbol ?buildSchema@CanFlyDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UCanFlyDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct CanFlyDefinition>> &);

};