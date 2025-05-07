#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EffectDuration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::EffectDuration const& INFINITE_DURATION();
    // NOLINTEND
};
