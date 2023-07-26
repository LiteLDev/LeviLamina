/**
 * @file  ChargeHeldItemDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChargeHeldItemDefinition.
 *
 */
class ChargeHeldItemDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHARGEHELDITEMDEFINITION
public:
    class ChargeHeldItemDefinition& operator=(class ChargeHeldItemDefinition const &) = delete;
    ChargeHeldItemDefinition(class ChargeHeldItemDefinition const &) = delete;
    ChargeHeldItemDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@ChargeHeldItemDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVChargeHeldItemGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class ChargeHeldItemGoal &) const;
    /**
     * @symbol  ?buildSchema\@ChargeHeldItemDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VChargeHeldItemDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ChargeHeldItemDefinition>> &);

};