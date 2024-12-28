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
    // vIndex: 0
    virtual ~LootItemKilledByActorCondition() /*override*/;

    // vIndex: 1
    virtual bool applies(::Random& random, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LootItemCondition> deserialize(::Json::Value object);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $applies(::Random& random, ::LootTableContext& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
