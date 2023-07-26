#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemMatchToolCondition {
public:
    // LootItemMatchToolCondition inner types declare
    // clang-format off
    struct EnchantInfo;
    // clang-format on

    // LootItemMatchToolCondition inner types define
    struct EnchantInfo {

    public:
        // prevent constructor by default
        EnchantInfo& operator=(EnchantInfo const&) = delete;
        EnchantInfo(EnchantInfo const&)            = delete;
        EnchantInfo()                              = delete;
    };

public:
    // prevent constructor by default
    LootItemMatchToolCondition& operator=(LootItemMatchToolCondition const&) = delete;
    LootItemMatchToolCondition(LootItemMatchToolCondition const&)            = delete;
    LootItemMatchToolCondition()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemMatchToolCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random&, class LootTableContext&); // NOLINT
    /**
     * @symbol
     * ??0LootItemMatchToolCondition\@\@QEAA\@UIntRange\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@UEnchantInfo\@LootItemMatchToolCondition\@\@V?$allocator\@UEnchantInfo\@LootItemMatchToolCondition\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI
    LootItemMatchToolCondition(struct IntRange, struct IntRange, std::string, std::vector<struct LootItemMatchToolCondition::EnchantInfo> const&); // NOLINT
    /**
     * @symbol
     * ?deserialize\@LootItemMatchToolCondition\@\@SA?AV?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value); // NOLINT
};
