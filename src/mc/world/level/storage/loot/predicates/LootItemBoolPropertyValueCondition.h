#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemPropertyValueCondition.h"

// auto generated forward declare list
// clang-format off
class LootItemCondition;
class PropertyComponent;
namespace Json { class Value; }
// clang-format on

class LootItemBoolPropertyValueCondition : public ::LootItemPropertyValueCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkd2b680;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemBoolPropertyValueCondition& operator=(LootItemBoolPropertyValueCondition const&);
    LootItemBoolPropertyValueCondition(LootItemBoolPropertyValueCondition const&);
    LootItemBoolPropertyValueCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool _hasPropertyValue(::PropertyComponent const& component) const /*override*/;

    // vIndex: 0
    virtual ~LootItemBoolPropertyValueCondition() /*override*/ = default;
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
