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

class LootItemIntPropertyValueCondition : public ::LootItemPropertyValueCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdd5ea9;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemIntPropertyValueCondition& operator=(LootItemIntPropertyValueCondition const&);
    LootItemIntPropertyValueCondition(LootItemIntPropertyValueCondition const&);
    LootItemIntPropertyValueCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _hasPropertyValue(::PropertyComponent const& component) const /*override*/;

    virtual ::LootItemCondition::ConditionType getConditionType() const /*override*/;

    virtual ~LootItemIntPropertyValueCondition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemCondition> deserialize(::Json::Value const& object);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_hasPropertyValue(::PropertyComponent const& component) const;

    MCNAPI ::LootItemCondition::ConditionType $getConditionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
