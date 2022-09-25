/**
 * @file  StompAttackDefinition.hpp
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
 * @brief MC class StompAttackDefinition.
 *
 */
class StompAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOMPATTACKDEFINITION
public:
    class StompAttackDefinition& operator=(class StompAttackDefinition const &) = delete;
    StompAttackDefinition(class StompAttackDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -1798962776
     * @symbol ??0StompAttackDefinition@@QEAA@XZ
     */
    MCAPI StompAttackDefinition();
    /**
     * @hash   1070635195
     * @symbol ?initialize@StompAttackDefinition@@QEAAXAEAVEntityContext@@AEAVStompAttackGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class StompAttackGoal &);
    /**
     * @hash   -379397035
     * @symbol ?buildSchema@StompAttackDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VStompAttackDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class StompAttackDefinition>> &);

};