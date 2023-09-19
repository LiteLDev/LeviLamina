#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HeightmapWrapper {
public:
    // prevent constructor by default
    HeightmapWrapper& operator=(HeightmapWrapper const&);
    HeightmapWrapper(HeightmapWrapper const&);
    HeightmapWrapper();

public:
    // NOLINTBEGIN
    // symbol: ?empty@HeightmapWrapper@@QEBA_NXZ
    MCAPI bool empty() const;

    // symbol: ?getHeightAt@HeightmapWrapper@@QEBAFAEBVPos@@@Z
    MCAPI short getHeightAt(class Pos const&) const;

    // NOLINTEND
};
