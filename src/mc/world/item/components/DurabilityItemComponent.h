#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/IntRange.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
struct IntRange;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DurabilityItemComponent : public ::NetworkedItemComponent<::DurabilityItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                     mMaxDamage;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange> mDamageChance;
    // NOLINTEND

public:
    // prevent constructor by default
    DurabilityItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DurabilityItemComponent(int maxDamage);

    MCAPI ::IntRange getDamageChanceRange() const;

    MCFOLD int getMaxDamage() const;

    MCFOLD void setMaxDamage(int maxDamage);
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
    MCAPI void* $ctor(int maxDamage);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
