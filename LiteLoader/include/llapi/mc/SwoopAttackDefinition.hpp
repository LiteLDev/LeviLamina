/**
 * @file  MC/SwoopAttackDefinition.hpp
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
 * @brief MC class SwoopAttackDefinition.
 *
 */
class SwoopAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWOOPATTACKDEFINITION
public:
    class SwoopAttackDefinition& operator=(class SwoopAttackDefinition const &) = delete;
    SwoopAttackDefinition(class SwoopAttackDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -1669465565
     * @symbol ??0SwoopAttackDefinition@@QEAA@XZ
     */
    MCAPI SwoopAttackDefinition();
    /**
     * @hash   -1526233611
     * @symbol ?initialize@SwoopAttackDefinition@@QEAAXAEAVEntityContext@@AEAVSwoopAttackGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class SwoopAttackGoal &);
    /**
     * @hash   -1493072561
     * @symbol ?buildSchema@SwoopAttackDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSwoopAttackDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwoopAttackDefinition>> &);

};