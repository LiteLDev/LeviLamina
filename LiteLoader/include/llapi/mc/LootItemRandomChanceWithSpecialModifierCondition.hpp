/**
 * @file  LootItemRandomChanceWithSpecialModifierCondition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemRandomChanceWithSpecialModifierCondition.
 *
 */
class LootItemRandomChanceWithSpecialModifierCondition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMRANDOMCHANCEWITHSPECIALMODIFIERCONDITION
public:
    class LootItemRandomChanceWithSpecialModifierCondition& operator=(class LootItemRandomChanceWithSpecialModifierCondition const &) = delete;
    LootItemRandomChanceWithSpecialModifierCondition(class LootItemRandomChanceWithSpecialModifierCondition const &) = delete;
    LootItemRandomChanceWithSpecialModifierCondition() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemRandomChanceWithSpecialModifierCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random &, class LootTableContext &);

};
