#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/item/components/NetworkedItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_50 { struct HoverTextColorItemComponent; }
// clang-format on

class HoverTextColorItemComponent : public ::NetworkedItemComponent<::HoverTextColorItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mHoverTextColor;
    // NOLINTEND

public:
    // prevent constructor by default
    HoverTextColorItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~HoverTextColorItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HoverTextColorItemComponent(::HoverTextColorItemComponent const&);

    MCAPI explicit HoverTextColorItemComponent(::SharedTypes::v1_20_50::HoverTextColorItemComponent component);

    MCAPI ::HoverTextColorItemComponent& operator=(::HoverTextColorItemComponent const&);

    MCAPI ::HoverTextColorItemComponent& operator=(::HoverTextColorItemComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HoverTextColorItemComponent const&);

    MCAPI void* $ctor(::SharedTypes::v1_20_50::HoverTextColorItemComponent component);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
