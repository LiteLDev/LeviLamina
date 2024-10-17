#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScreenChangedEventing {
public:
    // prevent constructor by default
    IScreenChangedEventing& operator=(IScreenChangedEventing const&);
    IScreenChangedEventing(IScreenChangedEventing const&);
    IScreenChangedEventing();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScreenChangedEventing();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
