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
// clang-format on

class RandomDyeFunction : public ::LootItemFunction {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomDyeFunction() /*override*/;

    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext&) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext&) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _applyBase(::ItemStackBase& item, ::Random& random) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext&);

    MCAPI void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext&);

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND
};
