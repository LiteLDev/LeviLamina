#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class ExpFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc79bb8;
    ::ll::UntypedStorage<4, 4> mUnkef476f;
    ::ll::UntypedStorage<4, 4> mUnk4df981;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpFilter& operator=(ExpFilter const&);
    ExpFilter(ExpFilter const&);
    ExpFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float Apply(float exp, float sample);

    MCNAPI void Reset(float alpha);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& kValueUndefined();
    // NOLINTEND
};

} // namespace rtc
