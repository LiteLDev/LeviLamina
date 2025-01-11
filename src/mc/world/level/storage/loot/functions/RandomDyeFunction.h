#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class ItemStackBase;
class LootTableContext;
class Random;
namespace mce { class Color; }
// clang-format on

class RandomDyeFunction : public ::LootItemFunction {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomDyeFunction() /*override*/ = default;

    // vIndex: 4
    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext&) /*override*/;

    // vIndex: 2
    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _applyBase(::ItemStackBase& item, ::Random& random) const;

    MCAPI ::mce::Color _getRandomArmorColor(::Random& random) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $apply(::ItemStack& item, ::Random& random, ::LootTableContext&);

    MCFOLD void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
