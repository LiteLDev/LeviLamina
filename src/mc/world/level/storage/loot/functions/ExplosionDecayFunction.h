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

class ExplosionDecayFunction : public ::LootItemFunction {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;

    virtual void applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual void apply26U6(::ItemStackBase& item, ::Random& random, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::LootItemFunction::FunctionType $getFunctionType() const;

    MCNAPI void $applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext& context);

    MCNAPI void $apply26U6(::ItemStackBase& item, ::Random& random, ::LootTableContext& context);


    // NOLINTEND
};
