#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::v1_20_50 { struct FuelItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class FuelItemComponent : public ::NetworkedItemComponent<::FuelItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mFuelDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    FuelItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FuelItemComponent(::SharedTypes::v1_20_50::FuelItemComponent component);

    MCFOLD void setFuelDuration(float fuelDuration);
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
    MCAPI void* $ctor(::SharedTypes::v1_20_50::FuelItemComponent component);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
