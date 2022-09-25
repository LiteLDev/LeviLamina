/**
 * @file  ShooterDefinition.hpp
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
 * @brief MC class ShooterDefinition.
 *
 */
class ShooterDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOOTERDEFINITION
public:
    class ShooterDefinition& operator=(class ShooterDefinition const &) = delete;
    ShooterDefinition(class ShooterDefinition const &) = delete;
#endif

public:
    /**
     * @hash   963687195
     * @symbol ??0ShooterDefinition@@QEAA@XZ
     */
    MCAPI ShooterDefinition();
    /**
     * @hash   -1582424427
     * @symbol ?initialize@ShooterDefinition@@QEBAXAEAVEntityContext@@AEAVShooterComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class ShooterComponent &) const;
    /**
     * @hash   -1545615484
     * @symbol ?setActorDefByName@ShooterDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setActorDefByName(std::string const &);
    /**
     * @hash   442674528
     * @symbol ?buildSchema@ShooterDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VShooterDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ShooterDefinition>> &);

};