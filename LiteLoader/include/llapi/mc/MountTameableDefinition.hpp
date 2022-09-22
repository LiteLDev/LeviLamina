/**
 * @file  MountTameableDefinition.hpp
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
 * @brief MC class MountTameableDefinition.
 *
 */
class MountTameableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOUNTTAMEABLEDEFINITION
public:
    class MountTameableDefinition& operator=(class MountTameableDefinition const &) = delete;
    MountTameableDefinition(class MountTameableDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -2019012809
     * @symbol ??0MountTameableDefinition@@QEAA@XZ
     */
    MCAPI MountTameableDefinition();
    /**
     * @hash   1379594619
     * @symbol ?initialize@MountTameableDefinition@@QEAAXAEAVEntityContext@@AEAVMountTamingComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class MountTamingComponent &);
    /**
     * @hash   -1020687576
     * @symbol ?buildSchema@MountTameableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VMountTameableDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MountTameableDefinition>> &);

};