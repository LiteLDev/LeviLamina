#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
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
    ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mDefaultColor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    appendFormattedHovertext(::ItemStackBase const& item, ::Bedrock::Safety::RedactableString& hovertext, bool) const;

    MCNAPI ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const;

    MCNAPI void setColor(::ItemStackBase& instance, ::mce::Color const& color) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
