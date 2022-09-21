/**
 * @file  MC/GiveableDefinition.hpp
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
 * @brief MC class GiveableDefinition.
 *
 */
class GiveableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GIVEABLEDEFINITION
public:
    class GiveableDefinition& operator=(class GiveableDefinition const &) = delete;
    GiveableDefinition(class GiveableDefinition const &) = delete;
    GiveableDefinition() = delete;
#endif

public:
    /**
     * @hash   -1762267496
     * @symbol ?addGiveableTrigger@GiveableDefinition@@QEAAXAEBUGiveableTrigger@@@Z
     */
    MCAPI void addGiveableTrigger(struct GiveableTrigger const &);
    /**
     * @hash   2089573377
     * @symbol ?initialize@GiveableDefinition@@QEAAXAEAVEntityContext@@AEAVGiveableComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class GiveableComponent &);
    /**
     * @hash   1901684454
     * @symbol ?buildSchema@GiveableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VGiveableDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GiveableDefinition>> &);

};