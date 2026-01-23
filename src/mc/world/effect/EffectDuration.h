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
    MCAPI_C ::std::optional<int> getValue() const;

    MCAPI_C bool operator<(int rhs) const;

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::EffectDuration const& INFINITE_DURATION();
    // NOLINTEND
};
