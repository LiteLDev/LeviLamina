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
    virtual ~RandomDyeFunction() /*override*/ = default;

    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext&) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext&) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _applyBase(::ItemStackBase& item, ::Random& random) const;

    MCAPI ::mce::Color _getRandomArmorColor(::Random& random) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $apply(::ItemStack& item, ::Random& random, ::LootTableContext&);

    MCFOLD void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext&);

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
