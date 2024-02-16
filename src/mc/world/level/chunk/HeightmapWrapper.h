#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HeightmapWrapper {
public:
    std::vector<short> const* mBuffer;
    short                     mMinY;

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
    MCAPI short getHeightAt(class Pos const& p) const;

    // symbol: ?create@HeightmapWrapper@@SA?AV1@PEBV?$vector@FV?$allocator@F@std@@@std@@F@Z
    MCAPI static class HeightmapWrapper create(std::vector<short> const* buffer, short minY);

    // NOLINTEND
};
