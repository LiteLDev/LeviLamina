#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootItemDamagedByActorCondition : public ::LootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnk97eae5;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemDamagedByActorCondition& operator=(LootItemDamagedByActorCondition const&);
    LootItemDamagedByActorCondition(LootItemDamagedByActorCondition const&);
    LootItemDamagedByActorCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool applies(::Random&, ::LootTableContext& context) /*override*/;

    // vIndex: 0
    virtual ~LootItemDamagedByActorCondition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemCondition> deserialize(::Json::Value const& object);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $applies(::Random&, ::LootTableContext& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
