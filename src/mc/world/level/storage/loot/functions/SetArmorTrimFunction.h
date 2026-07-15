#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class LootTableContext;
class Random;
// clang-format on

class SetArmorTrimFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mMaterial;
    ::ll::TypedStorage<8, 48, ::HashedString> mPattern;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetArmorTrimFunction() /*override*/ = default;

    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&) /*override*/;

    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
