/**
 * @file  LootItemRandomDifficultyChanceCondition.hpp
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
 * @brief MC class LootItemRandomDifficultyChanceCondition.
 *
 */
class LootItemRandomDifficultyChanceCondition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMRANDOMDIFFICULTYCHANCECONDITION
public:
    class LootItemRandomDifficultyChanceCondition& operator=(class LootItemRandomDifficultyChanceCondition const &) = delete;
    LootItemRandomDifficultyChanceCondition(class LootItemRandomDifficultyChanceCondition const &) = delete;
    LootItemRandomDifficultyChanceCondition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LootItemRandomDifficultyChanceCondition();
    /**
     * @vftbl  1
     * @symbol  ?applies\@LootItemRandomDifficultyChanceCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random &, class LootTableContext &);
    /**
     * @symbol  ?deserialize\@LootItemRandomDifficultyChanceCondition\@\@SA?AV?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

};