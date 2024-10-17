#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScopedGameTestTickingArea {
public:
    // prevent constructor by default
    ScopedGameTestTickingArea& operator=(ScopedGameTestTickingArea const&);
    ScopedGameTestTickingArea(ScopedGameTestTickingArea const&);
    ScopedGameTestTickingArea();

public:
    // NOLINTBEGIN
    MCAPI ScopedGameTestTickingArea(
        class Dimension&         dimension,
        class BoundingBox const& bounds,
        std::string const&       structureName
    );

    MCAPI bool areChunksLoaded();

    MCAPI std::shared_ptr<class ITickingArea> getTickingArea() const;

    MCAPI ~ScopedGameTestTickingArea();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _removeTickingArea();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Dimension& dimension, class BoundingBox const& bounds, std::string const& structureName);

    MCAPI void dtor$();

    MCAPI static std::string const& TICKING_AREA_PREFIX();

    // NOLINTEND
};
