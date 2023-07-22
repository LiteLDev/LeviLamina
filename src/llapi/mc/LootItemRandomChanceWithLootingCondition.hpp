/**
 * @file  LootItemRandomChanceWithLootingCondition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemRandomChanceWithLootingCondition.
 *
 */
class LootItemRandomChanceWithLootingCondition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMRANDOMCHANCEWITHLOOTINGCONDITION
public:
    class LootItemRandomChanceWithLootingCondition& operator=(class LootItemRandomChanceWithLootingCondition const &) = delete;
    LootItemRandomChanceWithLootingCondition(class LootItemRandomChanceWithLootingCondition const &) = delete;
    LootItemRandomChanceWithLootingCondition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LootItemRandomChanceWithLootingCondition();
    /**
     * @vftbl  1
     * @symbol  ?applies\@LootItemRandomChanceWithLootingCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random &, class LootTableContext &);
    /**
     * @symbol  ?deserialize\@LootItemRandomChanceWithLootingCondition\@\@SA?AV?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

};