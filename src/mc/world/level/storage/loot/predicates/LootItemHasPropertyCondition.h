#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootTableContext;
class Random;
// clang-format on

class LootItemHasPropertyCondition : public ::LootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkf8b73d;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemHasPropertyCondition& operator=(LootItemHasPropertyCondition const&);
    LootItemHasPropertyCondition(LootItemHasPropertyCondition const&);
    LootItemHasPropertyCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool applies(::Random&, ::LootTableContext&) /*override*/;

    virtual ::LootItemCondition::ConditionType getConditionType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
