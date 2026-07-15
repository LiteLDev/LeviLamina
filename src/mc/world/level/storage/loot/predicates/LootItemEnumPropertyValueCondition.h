#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"
#include "mc/world/level/storage/loot/predicates/LootItemPropertyValueCondition.h"

// auto generated forward declare list
// clang-format off
class LootItemCondition;
class PropertyComponent;
namespace Json { class Value; }
// clang-format on

class LootItemEnumPropertyValueCondition : public ::LootItemPropertyValueCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkbafe36;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemEnumPropertyValueCondition& operator=(LootItemEnumPropertyValueCondition const&);
    LootItemEnumPropertyValueCondition(LootItemEnumPropertyValueCondition const&);
    LootItemEnumPropertyValueCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootItemCondition::ConditionType getConditionType() const /*override*/;

    virtual bool _hasPropertyValue(::PropertyComponent const&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemCondition> deserialize(::Json::Value const& object);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
