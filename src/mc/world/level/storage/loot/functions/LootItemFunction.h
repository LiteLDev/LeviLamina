#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemFunction {
public:
    // prevent constructor by default
    LootItemFunction& operator=(LootItemFunction const&);
    LootItemFunction(LootItemFunction const&);
    LootItemFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LootItemFunction@@UEAA@XZ
    virtual ~LootItemFunction();

    // vIndex: 1, symbol: ?apply@RandomBlockStateFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&) = 0;

    // vIndex: 2, symbol: ?apply@LootItemFunction@@UEAAHAEAVItemStack@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z
    virtual int apply(class ItemStack&, class Random&, struct Trade const&, class LootTableContext&);

    // vIndex: 3, symbol: ?apply@RandomBlockStateFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&) = 0;

    // vIndex: 4, symbol:
    // ?apply@LootItemFunction@@UEAAHAEAVItemInstance@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z
    virtual int apply(class ItemInstance&, class Random&, struct Trade const&, class LootTableContext&);

    // symbol:
    // ?getConditions@LootItemFunction@@QEBAAEBV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::unique_ptr<class LootItemCondition>> const& getConditions() const;

    // symbol:
    // ?deserialize@LootItemFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@@Z
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mLootingFunctions@LootItemFunction@@0V?$unordered_map@VHashedString@@V?$function@$$A6A?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@AEAVValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@2@@Z@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$function@$$A6A?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@AEAVValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@2@@Z@std@@@std@@@3@@std@@B
    MCAPI static std::unordered_map<
        class HashedString,
        std::function<std::unique_ptr<
            class LootItemFunction>(class Json::Value&, std::vector<std::unique_ptr<class LootItemCondition>>&)>> const
        mLootingFunctions;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mLootingFunctions() { return mLootingFunctions; }

    // NOLINTEND
};
