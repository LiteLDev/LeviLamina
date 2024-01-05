#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemMatchToolCondition : public ::LootItemCondition {
public:
    // LootItemMatchToolCondition inner types declare
    // clang-format off
    struct EnchantInfo;
    // clang-format on

    // LootItemMatchToolCondition inner types define
    struct EnchantInfo {
    public:
        // prevent constructor by default
        EnchantInfo& operator=(EnchantInfo const&);
        EnchantInfo(EnchantInfo const&);
        EnchantInfo();
    };

public:
    // prevent constructor by default
    LootItemMatchToolCondition& operator=(LootItemMatchToolCondition const&);
    LootItemMatchToolCondition(LootItemMatchToolCondition const&);
    LootItemMatchToolCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LootItemMatchToolCondition@@UEAA@XZ
    virtual ~LootItemMatchToolCondition() = default;

    // vIndex: 1, symbol: ?applies@LootItemMatchToolCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool applies(class Random& random, class LootTableContext& context);

    // symbol:
    // ??0LootItemMatchToolCondition@@QEAA@UIntRange@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@UEnchantInfo@LootItemMatchToolCondition@@V?$allocator@UEnchantInfo@LootItemMatchToolCondition@@@std@@@3@@Z
    MCAPI LootItemMatchToolCondition(
        struct IntRange                                                    count,
        struct IntRange                                                    durability,
        std::string                                                        itemName,
        std::vector<struct LootItemMatchToolCondition::EnchantInfo> const& enchantments
    );

    // symbol:
    // ?deserialize@LootItemMatchToolCondition@@SA?AV?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@VValue@Json@@@Z
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value object);

    // NOLINTEND
};
