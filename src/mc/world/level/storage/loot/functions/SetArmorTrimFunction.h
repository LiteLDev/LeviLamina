#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class ItemStackBase;
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
    virtual ~SetArmorTrimFunction() /*override*/;

    virtual void apply(::ItemStack& item, ::Random&, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random&, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _apply(::ItemStackBase& item, ::LootTableContext const& context) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $apply(::ItemStack& item, ::Random&, ::LootTableContext& context);

    MCAPI void $apply(::ItemInstance& item, ::Random&, ::LootTableContext& context);

    MCAPI ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND
};
