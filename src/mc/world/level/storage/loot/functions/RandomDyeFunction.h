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
    // vIndex: 0
    virtual ~RandomDyeFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext&);

    // vIndex: 3
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _applyBase(class ItemStackBase& item, class Random& random) const;

    MCAPI class mce::Color _getRandomArmorColor(class Random& random) const;

    MCAPI class mce::Color _getRandomDyeColor(class Random& random) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void apply$(class ItemStack& item, class Random& random, class LootTableContext&);

    MCAPI void apply$(class ItemInstance& item, class Random& random, class LootTableContext&);

    // NOLINTEND
};
