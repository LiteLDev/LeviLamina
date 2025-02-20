#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::v1_20_50 { struct HoverTextColorItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class HoverTextColorItemComponent : public ::NetworkedItemComponent<::HoverTextColorItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk43ec06;
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
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HoverTextColorItemComponent const&);

    MCAPI void* $ctor(::SharedTypes::v1_20_50::HoverTextColorItemComponent component);
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
