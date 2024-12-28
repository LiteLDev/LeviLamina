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

class SetAttributesFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk49ad9e;
    // NOLINTEND

public:
    // prevent constructor by default
    SetAttributesFunction& operator=(SetAttributesFunction const&);
    SetAttributesFunction(SetAttributesFunction const&);
    SetAttributesFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetAttributesFunction() /*override*/;

    // vIndex: 4
    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&) /*override*/;

    // vIndex: 2
    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $apply(::ItemStack&, ::Random&, ::LootTableContext&);

    MCAPI void $apply(::ItemInstance&, ::Random&, ::LootTableContext&);
    // NOLINTEND
};
