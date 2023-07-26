/**
 * @file  LootItemRandomChanceCondition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemRandomChanceCondition.
 *
 */
class LootItemRandomChanceCondition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMRANDOMCHANCECONDITION
public:
    class LootItemRandomChanceCondition& operator=(class LootItemRandomChanceCondition const &) = delete;
    LootItemRandomChanceCondition(class LootItemRandomChanceCondition const &) = delete;
    LootItemRandomChanceCondition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LootItemRandomChanceCondition();
    /**
     * @vftbl  1
     * @symbol  ?applies\@LootItemRandomChanceCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random &, class LootTableContext &);
    /**
     * @symbol  ?deserialize\@LootItemRandomChanceCondition\@\@SA?AV?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

};