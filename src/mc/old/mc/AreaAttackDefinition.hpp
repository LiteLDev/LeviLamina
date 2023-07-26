/**
 * @file  AreaAttackDefinition.hpp
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
 * @brief MC class AreaAttackDefinition.
 *
 */
class AreaAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AREAATTACKDEFINITION
public:
    class AreaAttackDefinition& operator=(class AreaAttackDefinition const &) = delete;
    AreaAttackDefinition(class AreaAttackDefinition const &) = delete;
    AreaAttackDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@AreaAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVAreaAttackComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class AreaAttackComponent &) const;
    /**
     * @symbol  ?setDamageCause\@AreaAttackDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setDamageCause(std::string const &);
    /**
     * @symbol  ?buildSchema\@AreaAttackDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VAreaAttackDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AreaAttackDefinition>> &);

};