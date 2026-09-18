#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class EnchantmentInstance;
class ItemStackBase;
class LootTableContext;
class Random;
// clang-format on

class EnchantRandomlyFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::EnchantmentInstance>> mEnchantments;
    ::ll::TypedStorage<1, 1, bool>                                  mTreasure;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;

    virtual void applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;

    MCAPI void $applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext&);


    // NOLINTEND
};
