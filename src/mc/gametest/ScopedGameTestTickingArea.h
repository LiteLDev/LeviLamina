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
    // symbol:
    // ??0ScopedGameTestTickingArea@@QEAA@AEAVDimension@@AEBVBoundingBox@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ScopedGameTestTickingArea(
        class Dimension&         dimension,
        class BoundingBox const& bounds,
        std::string const&       structureName
    );

    // symbol: ?areChunksLoaded@ScopedGameTestTickingArea@@QEAA_NXZ
    MCAPI bool areChunksLoaded();

    // symbol: ?getTickingArea@ScopedGameTestTickingArea@@QEBA?AV?$shared_ptr@VITickingArea@@@std@@XZ
    MCAPI std::shared_ptr<class ITickingArea> getTickingArea() const;

    // symbol: ??1ScopedGameTestTickingArea@@QEAA@XZ
    MCAPI ~ScopedGameTestTickingArea();

    // symbol:
    // ?TICKING_AREA_PREFIX@ScopedGameTestTickingArea@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TICKING_AREA_PREFIX;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_removeTickingArea@ScopedGameTestTickingArea@@AEAAXXZ
    MCAPI void _removeTickingArea();

    // NOLINTEND
};
