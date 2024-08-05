#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NoiseBasedColorPaletteFlag {
public:
    // prevent constructor by default
    NoiseBasedColorPaletteFlag& operator=(NoiseBasedColorPaletteFlag const&);
    NoiseBasedColorPaletteFlag(NoiseBasedColorPaletteFlag const&);
    NoiseBasedColorPaletteFlag();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NoiseBasedColorPaletteFlag() = default;

    // NOLINTEND
};
