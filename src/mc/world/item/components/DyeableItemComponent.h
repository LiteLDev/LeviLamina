#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
class ItemDescriptor;
class ItemStackBase;
class SemVersion;
namespace Bedrock::Safety { class RedactableString; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class DyeableItemComponent : public ::NetworkedItemComponent<::DyeableItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkc4fc5f;
    // NOLINTEND

public:
    // prevent constructor by default
    DyeableItemComponent& operator=(DyeableItemComponent const&);
    DyeableItemComponent(DyeableItemComponent const&);
    DyeableItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DyeableItemComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DyeableItemComponent(::mce::Color const& color);

    MCAPI void
    appendFormattedHovertext(::ItemStackBase const& item, ::Bedrock::Safety::RedactableString& hovertext, bool) const;

    MCAPI void clearColor(::ItemStackBase& instance) const;

    MCAPI ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const;

    MCAPI ::mce::Color const& getDefaultColor() const;

    MCAPI bool hasCustomColor(::ItemStackBase const& instance) const;

    MCAPI void setColor(::ItemStackBase& instance, ::mce::Color const& color) const;
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
    MCAPI void* $ctor(::mce::Color const& color);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
