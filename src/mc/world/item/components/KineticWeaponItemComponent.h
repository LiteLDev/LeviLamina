#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/KineticDamageSettings.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::v1_21_90 { struct KineticWeaponItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class KineticWeaponItemComponent : public ::NetworkedItemComponent<::KineticWeaponItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 84, ::KineticDamageSettings> mSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI KineticWeaponItemComponent();

    MCAPI explicit KineticWeaponItemComponent(::SharedTypes::v1_21_90::KineticWeaponItemComponent const& data);

    MCFOLD ::KineticDamageSettings const& getSettings() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_90::KineticWeaponItemComponent const& data);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
