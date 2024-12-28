#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
struct LegacyEventItemComponentData;
// clang-format on

class LegacyEventItemComponent : public ::ItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk72f467;
    ::ll::UntypedStorage<8, 64> mUnkfdd33d;
    ::ll::UntypedStorage<8, 8>  mUnk98ee52;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyEventItemComponent& operator=(LegacyEventItemComponent const&);
    LegacyEventItemComponent(LegacyEventItemComponent const&);
    LegacyEventItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~LegacyEventItemComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyEventItemComponent(::LegacyEventItemComponentData&& componentData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyEventItemComponentData&& componentData);
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
