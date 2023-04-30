/**
 * @file  LootItemRandomDifficultyChanceCondition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemRandomDifficultyChanceCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random &, class LootTableContext &);

};
