/**
 * @file  MC/HealableDefinition.hpp
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
 * @brief MC class HealableDefinition.
 *
 */
class HealableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEALABLEDEFINITION
public:
    class HealableDefinition& operator=(class HealableDefinition const &) = delete;
    HealableDefinition(class HealableDefinition const &) = delete;
#endif

public:
    /**
     * @hash   1751757873
     * @symbol ??0HealableDefinition@@QEAA@XZ
     */
    MCAPI HealableDefinition();
    /**
     * @hash   2138309274
     * @symbol ?addFeedItem@HealableDefinition@@QEAAXAEBUFeedItem@@@Z
     */
    MCAPI void addFeedItem(struct FeedItem const &);
    /**
     * @hash   76794094
     * @symbol ?addFeedItemByName@HealableDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void addFeedItemByName(std::string const &);
    /**
     * @hash   975988086
     * @symbol ?buildSchema@HealableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VHealableDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HealableDefinition>> &);

};