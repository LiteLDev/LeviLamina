#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
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
    // prevent constructor by default
    HoverTextColorItemComponent& operator=(HoverTextColorItemComponent const&);
    HoverTextColorItemComponent(HoverTextColorItemComponent const&);
    HoverTextColorItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;

    virtual ~HoverTextColorItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HoverTextColorItemComponent(::SharedTypes::v1_20_50::HoverTextColorItemComponent component);

    MCAPI ::HoverTextColorItemComponent& operator=(::HoverTextColorItemComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_50::HoverTextColorItemComponent component);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent(::ComponentItem& owner);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
