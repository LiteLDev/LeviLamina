#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ControlCollectionFlag : ushort {
    // bitfield representation
    AlwaysBindControls           = 1 << 0,
    InputControls                = 1 << 1,
    TextEditBoxControls          = 1 << 2,
    AnimationControls            = 1 << 3,
    FactoryControls              = 1 << 4,
    ScrollViewControls           = 1 << 5,
    RenderableControls           = 1 << 6,
    FlyingItemRendererControls   = 1 << 7,
    AlwaysListeningInputControls = 1 << 8,
    FocusCollection              = 1 << 9,
    SliderControls               = 1 << 10,
    CustomRendererControls       = 1 << 11,
    CustomFrameUpdateControls    = 1 << 12,
};
