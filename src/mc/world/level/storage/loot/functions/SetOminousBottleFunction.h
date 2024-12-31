#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class LootTableContext;
class Random;
// clang-format on

class SetOminousBottleFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk4b5715;
    // NOLINTEND

public:
    // prevent constructor by default
    SetOminousBottleFunction& operator=(SetOminousBottleFunction const&);
    SetOminousBottleFunction(SetOminousBottleFunction const&);
    SetOminousBottleFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetOminousBottleFunction() /*override*/ = default;

    // vIndex: 4
    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext&) /*override*/;

    // vIndex: 2
    virtual void apply(::ItemInstance& itemInstance, ::Random& random, ::LootTableContext&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext&);

    MCAPI void $apply(::ItemInstance& itemInstance, ::Random& random, ::LootTableContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
