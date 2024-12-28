#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

class LegacyOnUseTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnke3ca41;
    ::ll::UntypedStorage<8, 264> mUnk5dba27;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnUseTriggerItemComponent& operator=(LegacyOnUseTriggerItemComponent const&);
    LegacyOnUseTriggerItemComponent(LegacyOnUseTriggerItemComponent const&);
    LegacyOnUseTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~LegacyOnUseTriggerItemComponent() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
