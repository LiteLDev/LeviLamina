#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Diagnostics {

struct MinimapWorstSample {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk73aa80;
    ::ll::UntypedStorage<8, 8> mUnk147ed4;
    ::ll::UntypedStorage<8, 8> mUnk8b851a;
    ::ll::UntypedStorage<8, 8> mUnkb9b090;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapWorstSample& operator=(MinimapWorstSample const&);
    MinimapWorstSample(MinimapWorstSample const&);
    MinimapWorstSample();
};

} // namespace Editor::Diagnostics
