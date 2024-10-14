#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec4 {
public:
    // prevent constructor by default
    Vec4& operator=(Vec4 const&);
    Vec4(Vec4 const&);
    Vec4();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class Vec4 const& MAX();

    MCAPI static class Vec4 const& MIN();

    MCAPI static class Vec4 const& ONE();

    MCAPI static class Vec4 const& ZERO();

    // NOLINTEND
};
