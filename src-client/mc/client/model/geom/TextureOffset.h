#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TextureOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureOffset() = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
