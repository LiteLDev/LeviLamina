#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
class SemVersion;
namespace SharedTypes::v1_20_50 { struct InteractButtonItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class InteractButtonItemComponent : public ::ItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           mRequiresInteract;
    ::ll::TypedStorage<8, 32, ::std::string> mInteractText;
    // NOLINTEND

public:
    // prevent constructor by default
    InteractButtonItemComponent(InteractButtonItemComponent const&);
    InteractButtonItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual bool isNetworkComponent() const /*override*/;

    // vIndex: 4
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;

    // vIndex: 5
    virtual bool initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;

    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~InteractButtonItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InteractButtonItemComponent(::SharedTypes::v1_20_50::InteractButtonItemComponent component);

    MCNAPI ::InteractButtonItemComponent& operator=(::InteractButtonItemComponent&&);

    MCNAPI ::InteractButtonItemComponent& operator=(::InteractButtonItemComponent const&);
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
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::InteractButtonItemComponent component);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isNetworkComponent() const;

    MCNAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCNAPI bool $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);

    MCNAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
