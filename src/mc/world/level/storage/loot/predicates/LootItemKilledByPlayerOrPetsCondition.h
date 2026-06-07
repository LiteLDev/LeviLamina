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

class LootItemKilledByPlayerOrPetsCondition : public ::LootItemCondition {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool applies(::Random& context, ::LootTableContext&) /*override*/;

    virtual ::LootItemCondition::ConditionType getConditionType() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemCondition> deserialize(::Json::Value const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $applies(::Random& context, ::LootTableContext&);

    MCNAPI ::LootItemCondition::ConditionType $getConditionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
