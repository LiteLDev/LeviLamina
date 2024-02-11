#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class EnchantBookForTradingFunction : public ::LootItemFunction {
public:
    // EnchantBookForTradingFunction inner types declare
    // clang-format off
    struct EnchantmentOption;
    // clang-format on

    // EnchantBookForTradingFunction inner types define
    struct EnchantmentOption {
    public:
        // prevent constructor by default
        EnchantmentOption& operator=(EnchantmentOption const&);
        EnchantmentOption(EnchantmentOption const&);
        EnchantmentOption();

    public:
        // NOLINTBEGIN
        // symbol: ??1EnchantmentOption@EnchantBookForTradingFunction@@QEAA@XZ
        MCAPI ~EnchantmentOption();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    EnchantBookForTradingFunction& operator=(EnchantBookForTradingFunction const&);
    EnchantBookForTradingFunction(EnchantBookForTradingFunction const&);
    EnchantBookForTradingFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EnchantBookForTradingFunction@@UEAA@XZ
    virtual ~EnchantBookForTradingFunction() = default;

    // vIndex: 1, symbol: ?apply@EnchantBookForTradingFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 2, symbol:
    // ?apply@EnchantBookForTradingFunction@@UEAAHAEAVItemStack@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z
    virtual int
    apply(class ItemStack& item, class Random& random, struct Trade const& trade, class LootTableContext& context);

    // vIndex: 3, symbol:
    // ?apply@EnchantBookForTradingFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // vIndex: 4, symbol:
    // ?apply@EnchantBookForTradingFunction@@UEAAHAEAVItemInstance@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z
    virtual int
    apply(class ItemInstance& item, class Random& random, struct Trade const& trade, class LootTableContext& context);

    // symbol:
    // ?deserialize@EnchantBookForTradingFunction@@SA?AV?$unique_ptr@VEnchantBookForTradingFunction@@U?$default_delete@VEnchantBookForTradingFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
    MCAPI static std::unique_ptr<class EnchantBookForTradingFunction>
    deserialize(class Json::Value object, std::vector<std::unique_ptr<class LootItemCondition>>& predicates);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getRandomEnchantInstance@EnchantBookForTradingFunction@@AEBA?AVEnchantmentInstance@@AEAVRandom@@@Z
    MCAPI class EnchantmentInstance _getRandomEnchantInstance(class Random& random) const;

    // symbol:
    // ?_trySelectEnchantmentFromOptions@EnchantBookForTradingFunction@@AEBA?AV?$optional@VEnchantmentInstance@@@std@@AEAVRandom@@@Z
    MCAPI std::optional<class EnchantmentInstance> _trySelectEnchantmentFromOptions(class Random&) const;

    // symbol:
    // ?_parseEnchantmentOption@EnchantBookForTradingFunction@@CA?AV?$optional@UEnchantmentOption@EnchantBookForTradingFunction@@@std@@AEBVValue@Json@@@Z
    MCAPI static std::optional<struct EnchantBookForTradingFunction::EnchantmentOption>
    _parseEnchantmentOption(class Json::Value const&);

    // NOLINTEND
};
