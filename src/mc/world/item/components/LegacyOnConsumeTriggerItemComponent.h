#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class HashedString;
class ItemStack;
struct LegacyOnConsumeTriggerItemComponentData;
// clang-format on

class LegacyOnConsumeTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk5b2d1f;
    ::ll::UntypedStorage<8, 264> mUnkf72651;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnConsumeTriggerItemComponent& operator=(LegacyOnConsumeTriggerItemComponent const&);
    LegacyOnConsumeTriggerItemComponent(LegacyOnConsumeTriggerItemComponent const&);
    LegacyOnConsumeTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~LegacyOnConsumeTriggerItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyOnConsumeTriggerItemComponent(::LegacyOnConsumeTriggerItemComponentData&& data);

    MCAPI void _consume(::ItemStack const& item, ::ItemStack& actor, ::Actor&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyOnConsumeTriggerItemComponentData&& data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
