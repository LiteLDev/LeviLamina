/**
 * @file  CombatRegenerationDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CombatRegenerationDefinition.
 *
 */
class CombatRegenerationDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMBATREGENERATIONDEFINITION
public:
    class CombatRegenerationDefinition& operator=(class CombatRegenerationDefinition const &) = delete;
    CombatRegenerationDefinition(class CombatRegenerationDefinition const &) = delete;
    CombatRegenerationDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@CombatRegenerationDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VCombatRegenerationDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class CombatRegenerationDefinition>> &);

};