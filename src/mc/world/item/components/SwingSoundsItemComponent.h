#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::v1_21_90 { struct SwingSoundsItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SwingSoundsItemComponent : public ::NetworkedItemComponent<::SwingSoundsItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>> mAttackMissSound;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>> mAttackHitSound;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>> mAttackCriticalHitSound;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SwingSoundsItemComponent();

    MCAPI explicit SwingSoundsItemComponent(::SharedTypes::v1_21_90::SwingSoundsItemComponent const& data);

    MCFOLD ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> getAttackCriticalHitSound() const;

    MCFOLD ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> getAttackHitSound() const;

    MCFOLD ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> getAttackMissSound() const;
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
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_90::SwingSoundsItemComponent const& data);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
