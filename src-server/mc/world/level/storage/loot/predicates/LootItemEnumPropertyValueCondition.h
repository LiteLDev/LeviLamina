#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"
#include "mc/world/level/storage/loot/predicates/LootItemPropertyValueCondition.h"

// auto generated forward declare list
// clang-format off
class HashedString;
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
    // vIndex: 2
    virtual ::LootItemCondition::ConditionType getConditionType() const /*override*/;

    // vIndex: 3
    virtual bool _hasPropertyValue(::PropertyComponent const& component) const /*override*/;

    // vIndex: 0
    virtual ~LootItemEnumPropertyValueCondition() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LootItemEnumPropertyValueCondition(::HashedString propertyName, ::HashedString value);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemCondition> deserialize(::Json::Value const& object);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HashedString propertyName, ::HashedString value);
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
