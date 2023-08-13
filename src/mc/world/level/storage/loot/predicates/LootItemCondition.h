#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemCondition {

public:
    // prevent constructor by default
    LootItemCondition& operator=(LootItemCondition const&) = delete;
    LootItemCondition(LootItemCondition const&)            = delete;
    LootItemCondition()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemKilledByPlayerCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random&, class LootTableContext&) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTITEMCONDITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LootItemCondition();
#endif
    /**
     * @symbol
     * ?deserialize\@LootItemCondition\@\@SA?AV?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);
    // NOLINTEND
};
