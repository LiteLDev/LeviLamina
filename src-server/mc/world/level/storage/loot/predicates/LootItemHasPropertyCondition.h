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
    // vIndex: 1
    virtual bool applies(::Random&, ::LootTableContext& context) /*override*/;

    // vIndex: 2
    virtual ::LootItemCondition::ConditionType getConditionType() const /*override*/;

    // vIndex: 0
    virtual ~LootItemHasPropertyCondition() /*override*/ = default;
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

    MCNAPI ::LootItemCondition::ConditionType $getConditionType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
