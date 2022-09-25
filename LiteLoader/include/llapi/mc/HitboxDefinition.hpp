/**
 * @file  HitboxDefinition.hpp
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
 * @brief MC class HitboxDefinition.
 *
 */
class HitboxDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HITBOXDEFINITION
public:
    class HitboxDefinition& operator=(class HitboxDefinition const &) = delete;
    HitboxDefinition(class HitboxDefinition const &) = delete;
    HitboxDefinition() = delete;
#endif

public:
    /**
     * @hash   -1317258774
     * @symbol ?addAABB@HitboxDefinition@@QEAAXAEBUHitboxJson@@@Z
     */
    MCAPI void addAABB(struct HitboxJson const &);
    /**
     * @hash   819760059
     * @symbol ?initialize@HitboxDefinition@@QEAAXAEAVEntityContext@@AEAVHitboxComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class HitboxComponent &);
    /**
     * @hash   495279238
     * @symbol ?buildSchema@HitboxDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VHitboxDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HitboxDefinition>> &);

};