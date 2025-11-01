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

class LootItemFloatPropertyValueCondition : public ::LootItemPropertyValueCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5013f9;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemFloatPropertyValueCondition& operator=(LootItemFloatPropertyValueCondition const&);
    LootItemFloatPropertyValueCondition(LootItemFloatPropertyValueCondition const&);
    LootItemFloatPropertyValueCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::LootItemCondition::ConditionType getConditionType() const /*override*/;

    // vIndex: 3
    virtual bool _hasPropertyValue(::PropertyComponent const& component) const /*override*/;

    // vIndex: 0
    virtual ~LootItemFloatPropertyValueCondition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemCondition> deserialize(::Json::Value const& object);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::LootItemCondition::ConditionType $getConditionType() const;

    MCNAPI bool $_hasPropertyValue(::PropertyComponent const& component) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
