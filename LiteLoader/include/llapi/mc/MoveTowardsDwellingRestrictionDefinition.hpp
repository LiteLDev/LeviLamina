/**
 * @file  MoveTowardsDwellingRestrictionDefinition.hpp
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
 * @brief MC class MoveTowardsDwellingRestrictionDefinition.
 *
 */
class MoveTowardsDwellingRestrictionDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSDWELLINGRESTRICTIONDEFINITION
public:
    class MoveTowardsDwellingRestrictionDefinition& operator=(class MoveTowardsDwellingRestrictionDefinition const &) = delete;
    MoveTowardsDwellingRestrictionDefinition(class MoveTowardsDwellingRestrictionDefinition const &) = delete;
#endif

public:
    /**
     * @hash   524031904
     * @symbol ??0MoveTowardsDwellingRestrictionDefinition@@QEAA@XZ
     */
    MCAPI MoveTowardsDwellingRestrictionDefinition();
    /**
     * @hash   1020164803
     * @symbol ?buildSchema@MoveTowardsDwellingRestrictionDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VMoveTowardsDwellingRestrictionDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MoveTowardsDwellingRestrictionDefinition>> &);

};