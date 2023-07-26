/**
 * @file  OcelotAttackDefinition.hpp
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
 * @brief MC class OcelotAttackDefinition.
 *
 */
class OcelotAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCELOTATTACKDEFINITION
public:
    class OcelotAttackDefinition& operator=(class OcelotAttackDefinition const &) = delete;
    OcelotAttackDefinition(class OcelotAttackDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0OcelotAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI OcelotAttackDefinition();
    /**
     * @symbol  ?initialize\@OcelotAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVOcelotAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class OcelotAttackGoal &) const;
    /**
     * @symbol  ?buildSchema\@OcelotAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VOcelotAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class OcelotAttackDefinition>> &);

};