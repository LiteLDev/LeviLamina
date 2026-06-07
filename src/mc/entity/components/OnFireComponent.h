#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
// clang-format on

struct OnFireComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mOnFireTicks;
    ::ll::TypedStorage<1, 1, bool> mIgnitedThisTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::Actor const&, ::CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void convertFromLegacyData(::CompoundTag const& tag, ::CompoundTag& outTag);

    MCAPI static bool needsLegacyConversion(::CompoundTag const& tag);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& LEGACY_FIRE_TAG();

    MCAPI static ::std::string const& ON_FIRE_TAG();
    // NOLINTEND
};
