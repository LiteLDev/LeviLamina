#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Item;
class ItemInstance;
class ItemStack;
class LootTableContext;
class Random;
// clang-format on

class SetDataFromColorIndexFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SetDataFromColorIndexFunction& operator=(SetDataFromColorIndexFunction const&);
    SetDataFromColorIndexFunction(SetDataFromColorIndexFunction const&);
    SetDataFromColorIndexFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetDataFromColorIndexFunction() /*override*/;

    // vIndex: 4
    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    // vIndex: 2
    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _applyImpl(
        ::Item const*&       inOutItemDef,
        ::Actor const*       thisEntity,
        ::std::string const& originalItemName,
        int&                 outResultAux
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);

    MCAPI void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
