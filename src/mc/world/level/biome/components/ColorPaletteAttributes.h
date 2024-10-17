#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ColorPaletteAttributes {
public:
    // prevent constructor by default
    ColorPaletteAttributes& operator=(ColorPaletteAttributes const&);
    ColorPaletteAttributes(ColorPaletteAttributes const&);
    ColorPaletteAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ColorPaletteAttributes() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
