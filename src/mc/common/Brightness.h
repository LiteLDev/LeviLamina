#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Brightness {
public:
    // prevent constructor by default
    Brightness();

public:
    // NOLINTBEGIN
    MCAPI Brightness(struct Brightness const&);

    MCAPI explicit Brightness(uchar const&);

    MCAPI struct Brightness& operator=(struct Brightness&&);

    MCAPI struct Brightness& operator=(struct Brightness const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct Brightness const&);

    MCAPI void* ctor$(uchar const&);

    MCAPI static struct Brightness const& INVALID();

    MCAPI static struct Brightness const& MAX();

    MCAPI static struct Brightness const& MIN();

    // NOLINTEND
};
