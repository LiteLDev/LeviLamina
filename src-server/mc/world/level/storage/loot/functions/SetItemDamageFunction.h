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

class SetItemDamageFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk16cc45;
    // NOLINTEND

public:
    // prevent constructor by default
    SetItemDamageFunction& operator=(SetItemDamageFunction const&);
    SetItemDamageFunction(SetItemDamageFunction const&);
    SetItemDamageFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetItemDamageFunction() /*override*/ = default;

    // vIndex: 4
    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    // vIndex: 2
    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);

    MCNAPI void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
