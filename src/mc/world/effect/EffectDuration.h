#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EffectDuration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    EffectDuration& operator=(EffectDuration const&);
    EffectDuration(EffectDuration const&);
    EffectDuration();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<int> getValue() const;

    MCAPI int getValueForSerialization() const;

    MCAPI bool isInfinite() const;

    MCAPI bool operator!=(int rhs) const;

    MCAPI ::EffectDuration operator*(float rhs) const;

    MCAPI ::EffectDuration operator+(::EffectDuration const& rhs) const;

    MCAPI ::EffectDuration& operator+=(::EffectDuration const& rhs);

    MCAPI ::EffectDuration operator/(float rhs) const;

    MCAPI bool operator<(int rhs) const;

    MCAPI bool operator<=(int rhs) const;

    MCAPI bool operator<=(::EffectDuration const& rhs) const;

    MCAPI bool operator>(int rhs) const;

    MCAPI void scaleAndRoundUp(float multiplier);

    MCAPI bool tickDown();

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::EffectDuration const& INFINITE_DURATION();
    // NOLINTEND
};
