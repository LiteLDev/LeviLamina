#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootTableContext;
class Random;
// clang-format on

class LootItemKilledByActorCondition : public ::LootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnk16f3ab;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemKilledByActorCondition& operator=(LootItemKilledByActorCondition const&);
    LootItemKilledByActorCondition(LootItemKilledByActorCondition const&);
    LootItemKilledByActorCondition();

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
