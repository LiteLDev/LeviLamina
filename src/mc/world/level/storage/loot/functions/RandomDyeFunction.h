#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class RandomDyeFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    RandomDyeFunction& operator=(RandomDyeFunction const&);
    RandomDyeFunction(RandomDyeFunction const&);
    RandomDyeFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RandomDyeFunction@@UEAA@XZ
    virtual ~RandomDyeFunction() = default;

    // vIndex: 1, symbol: ?apply@RandomDyeFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3, symbol: ?apply@RandomDyeFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_applyBase@RandomDyeFunction@@AEBAXAEAVItemStackBase@@AEAVRandom@@@Z
    MCAPI void _applyBase(class ItemStackBase& item, class Random& random) const;

    // symbol: ?_getRandomArmorColor@RandomDyeFunction@@AEBA?AVColor@mce@@AEAVRandom@@@Z
    MCAPI class mce::Color _getRandomArmorColor(class Random& random) const;

    // symbol: ?_getRandomDyeColor@RandomDyeFunction@@AEBA?AVColor@mce@@AEAVRandom@@@Z
    MCAPI class mce::Color _getRandomDyeColor(class Random& random) const;

    // NOLINTEND
};
