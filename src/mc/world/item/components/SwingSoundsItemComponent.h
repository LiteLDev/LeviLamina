#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/sound/SoundEventIdentifier.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace SharedTypes::Beta { struct SwingSoundsItemComponent; }
namespace SharedTypes::v1_21_90 { struct SwingSoundsItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SwingSoundsItemComponent : public ::NetworkedItemComponent<::SwingSoundsItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::std::optional<::SoundEventIdentifier>> mAttackMissSound;
    ::ll::TypedStorage<8, 48, ::std::optional<::SoundEventIdentifier>> mAttackHitSound;
    ::ll::TypedStorage<8, 48, ::std::optional<::SoundEventIdentifier>> mAttackCriticalHitSound;
    // NOLINTEND

public:
    // prevent constructor by default
    SwingSoundsItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SwingSoundsItemComponent(::SharedTypes::Beta::SwingSoundsItemComponent const& data);

    MCAPI explicit SwingSoundsItemComponent(::SharedTypes::v1_21_90::SwingSoundsItemComponent const& data);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Beta::SwingSoundsItemComponent const& data);

    MCAPI void* $ctor(::SharedTypes::v1_21_90::SwingSoundsItemComponent const& data);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
