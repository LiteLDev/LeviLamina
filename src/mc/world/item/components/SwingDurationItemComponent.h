#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::v1_21_90 { struct SwingDurationItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SwingDurationItemComponent : public ::NetworkedItemComponent<::SwingDurationItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mValueInSeconds;
    // NOLINTEND

public:
    // prevent constructor by default
    SwingDurationItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SwingDurationItemComponent(::SharedTypes::v1_21_90::SwingDurationItemComponent component);

    MCAPI uint getValueInTicks() const;
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
    MCAPI void* $ctor(::SharedTypes::v1_21_90::SwingDurationItemComponent component);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
