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
    MCNAPI void addAdditionalSaveData(::Actor const&, ::CompoundTag& tag) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void convertFromLegacyData(::CompoundTag const& tag, ::CompoundTag& outTag);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& LEGACY_FIRE_TAG();

    MCNAPI static ::std::string const& ON_FIRE_TAG();
    // NOLINTEND
};
