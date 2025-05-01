#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace SharedTypes::v1_20_50 { struct HoverTextColorItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class HoverTextColorItemComponent : public ::NetworkedItemComponent<::HoverTextColorItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mHoverTextColor;
    // NOLINTEND

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
    MCNAPI HoverTextColorItemComponent(::HoverTextColorItemComponent const&);

    MCNAPI explicit HoverTextColorItemComponent(::SharedTypes::v1_20_50::HoverTextColorItemComponent component);

    MCNAPI ::HoverTextColorItemComponent& operator=(::HoverTextColorItemComponent const&);

    MCNAPI ::HoverTextColorItemComponent& operator=(::HoverTextColorItemComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HoverTextColorItemComponent const&);

    MCNAPI void* $ctor(::SharedTypes::v1_20_50::HoverTextColorItemComponent component);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
