#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/RandomValueBounds.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class LootTableContext;
class Random;
struct Trade;
// clang-format on

class EnchantWithLevelsFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::RandomValueBounds> mLevels;
    ::ll::TypedStorage<1, 1, bool>                mTreasure;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantWithLevelsFunction() /*override*/ = default;

    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&) /*override*/;

    virtual int
    apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&) /*override*/;

    virtual int
    apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
