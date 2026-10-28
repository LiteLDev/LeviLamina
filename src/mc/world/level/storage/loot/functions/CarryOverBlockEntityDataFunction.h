#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class LootTableContext;
class Random;
// clang-format on

class CarryOverBlockEntityDataFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mDynamicProperties;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;

    virtual void applyPreVersion(::ItemStackBase& item, ::Random&, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;

    MCAPI void $applyPreVersion(::ItemStackBase& item, ::Random&, ::LootTableContext& context);


    // NOLINTEND
};
