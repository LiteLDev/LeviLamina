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
    MCAPI bool empty() const;

    MCAPI short getHeightAt(class Pos const& p) const;

    MCAPI static class HeightmapWrapper create(std::vector<short> const* buffer, short minY);

    // NOLINTEND
};
