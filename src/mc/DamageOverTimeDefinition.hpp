/**
 * @file  DamageOverTimeDefinition.hpp
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
 * @brief MC class DamageOverTimeDefinition.
 *
 */
class DamageOverTimeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGEOVERTIMEDEFINITION
public:
    class DamageOverTimeDefinition& operator=(class DamageOverTimeDefinition const &) = delete;
    DamageOverTimeDefinition(class DamageOverTimeDefinition const &) = delete;
    DamageOverTimeDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@DamageOverTimeDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDamageOverTimeComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class DamageOverTimeComponent &) const;
    /**
     * @symbol  ?buildSchema\@DamageOverTimeDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDamageOverTimeDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DamageOverTimeDefinition>> &);

};