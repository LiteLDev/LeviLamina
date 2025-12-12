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

class ExplosionDecayFunction : public ::LootItemFunction {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExplosionDecayFunction() /*override*/ = default;

    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);

    MCNAPI void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);

    MCNAPI ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
