#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
// clang-format on

class ActorLimitedLifetimeComponent {
public:
    // prevent constructor by default
    ActorLimitedLifetimeComponent& operator=(ActorLimitedLifetimeComponent const&);
    ActorLimitedLifetimeComponent(ActorLimitedLifetimeComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorLimitedLifetimeComponent();

    MCAPI void addAdditionalSaveData(::Actor const& owner, ::CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void convertFromLegacyData(::CompoundTag const& tag, ::CompoundTag& outTag);

    MCAPI static bool needsLegacyConversion(::CompoundTag const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
