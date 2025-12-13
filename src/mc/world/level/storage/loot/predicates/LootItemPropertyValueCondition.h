#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootTableContext;
class PropertyComponent;
class Random;
// clang-format on

class LootItemPropertyValueCondition : public ::LootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnke360f1;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemPropertyValueCondition& operator=(LootItemPropertyValueCondition const&);
    LootItemPropertyValueCondition(LootItemPropertyValueCondition const&);
    LootItemPropertyValueCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool applies(::Random&, ::LootTableContext& context) /*override*/;

    virtual bool _hasPropertyValue(::PropertyComponent const&) const = 0;

    virtual ~LootItemPropertyValueCondition() /*override*/ = default;
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
