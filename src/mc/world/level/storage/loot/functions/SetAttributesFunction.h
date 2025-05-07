#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class AttributeModifier;
class ItemInstance;
class ItemStack;
class LootTableContext;
class Random;
// clang-format on

class SetAttributesFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeModifier>> mModifiers;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetAttributesFunction() /*override*/ = default;

    // vIndex: 4
    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&) /*override*/;

    // vIndex: 2
    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
