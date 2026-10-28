#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Item;
class ItemStackBase;
class LootTableContext;
class Random;
// clang-format on

class SetDataFromColorIndexFunction : public ::LootItemFunction {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;

    virtual void applyPreVersion(::ItemStackBase& item, ::Random&, ::LootTableContext& context) /*override*/;

    virtual void apply26U6(::ItemStackBase& item, ::Random& random, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _applyImpl(
        ::Item const*&       inOutItemDef,
        ::Actor const*       thisEntity,
        ::std::string const& originalItemName,
        int&                 outResultAux
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;

    MCAPI void $applyPreVersion(::ItemStackBase& item, ::Random&, ::LootTableContext& context);

    MCAPI void $apply26U6(::ItemStackBase& item, ::Random& random, ::LootTableContext& context);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
