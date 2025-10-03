#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootTableContext;
class Random;
// clang-format on

class LootItemActorFilterCondition : public ::LootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkeffb87;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemActorFilterCondition& operator=(LootItemActorFilterCondition const&);
    LootItemActorFilterCondition(LootItemActorFilterCondition const&);
    LootItemActorFilterCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool applies(::Random&, ::LootTableContext&) /*override*/;

    // vIndex: 0
    virtual ~LootItemActorFilterCondition() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
