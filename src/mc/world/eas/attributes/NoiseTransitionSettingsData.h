#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct NoiseTransitionSettingsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk70c61a;
    ::ll::UntypedStorage<4, 4>  mUnk87d7e7;
    ::ll::UntypedStorage<4, 4>  mUnk2a75d5;
    ::ll::UntypedStorage<8, 32> mUnk93a961;
    ::ll::UntypedStorage<4, 4>  mUnk2fa733;
    ::ll::UntypedStorage<8, 32> mUnkc36c73;
    ::ll::UntypedStorage<4, 8>  mUnkf68d46;
    // NOLINTEND

public:
    // prevent constructor by default
    NoiseTransitionSettingsData& operator=(NoiseTransitionSettingsData const&);
    NoiseTransitionSettingsData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NoiseTransitionSettingsData(::EAS::NoiseTransitionSettingsData const&);

    MCNAPI ::EAS::NoiseTransitionSettingsData& operator=(::EAS::NoiseTransitionSettingsData&&);

    MCNAPI bool operator==(::EAS::NoiseTransitionSettingsData const& other) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EAS::NoiseTransitionSettingsData const&);
    // NOLINTEND
};

} // namespace EAS
