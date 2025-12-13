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

class LootItemRandomChanceCondition : public ::LootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb0dd89;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemRandomChanceCondition& operator=(LootItemRandomChanceCondition const&);
    LootItemRandomChanceCondition(LootItemRandomChanceCondition const&);
    LootItemRandomChanceCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool applies(::Random& random, ::LootTableContext&) /*override*/;

    virtual ::LootItemCondition::ConditionType getConditionType() const /*override*/;

    virtual ~LootItemRandomChanceCondition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemCondition> deserialize(::Json::Value const& object);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $applies(::Random& random, ::LootTableContext&);

    MCNAPI ::LootItemCondition::ConditionType $getConditionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
