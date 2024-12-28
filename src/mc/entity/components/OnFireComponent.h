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
    ::ll::UntypedStorage<4, 4> mUnk86dc6c;
    ::ll::UntypedStorage<1, 1> mUnkf4f992;
    // NOLINTEND

public:
    // prevent constructor by default
    OnFireComponent& operator=(OnFireComponent const&);
    OnFireComponent(OnFireComponent const&);
    OnFireComponent();

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
