#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootTableContext;
class Random;
// clang-format on

class LootItemRandomChanceWithLootingCondition : public ::LootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk32edd3;
    ::ll::UntypedStorage<4, 4> mUnk392266;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemRandomChanceWithLootingCondition& operator=(LootItemRandomChanceWithLootingCondition const&);
    LootItemRandomChanceWithLootingCondition(LootItemRandomChanceWithLootingCondition const&);
    LootItemRandomChanceWithLootingCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LootItemRandomChanceWithLootingCondition() /*override*/ = default;

    // vIndex: 1
    virtual bool applies(::Random& random, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $applies(::Random& random, ::LootTableContext& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
