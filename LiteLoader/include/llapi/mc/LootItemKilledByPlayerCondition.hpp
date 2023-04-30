/**
 * @file  LootItemKilledByPlayerCondition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemKilledByPlayerCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random &, class LootTableContext &);

};
