/**
 * @file  LootItemKilledByPlayerCondition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemKilledByPlayerCondition.
 *
 */
class LootItemKilledByPlayerCondition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMKILLEDBYPLAYERCONDITION
public:
    class LootItemKilledByPlayerCondition& operator=(class LootItemKilledByPlayerCondition const &) = delete;
    LootItemKilledByPlayerCondition(class LootItemKilledByPlayerCondition const &) = delete;
    LootItemKilledByPlayerCondition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LootItemKilledByPlayerCondition();
    /**
     * @hash   -418560940
     * @vftbl  1
     * @symbol ?applies@LootItemKilledByPlayerCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z
     */
    virtual bool applies(class Random &, class LootTableContext &);
    /**
     * @hash   1805810595
     * @symbol ?deserialize@LootItemKilledByPlayerCondition@@SA?AV?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@VValue@Json@@@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

};