#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScopedGameTestTickingArea {

public:
    // prevent constructor by default
    ScopedGameTestTickingArea& operator=(ScopedGameTestTickingArea const&) = delete;
    ScopedGameTestTickingArea(ScopedGameTestTickingArea const&)            = delete;
    ScopedGameTestTickingArea()                                            = delete;

public:
    /**
     * @symbol
     * ??0ScopedGameTestTickingArea\@\@QEAA\@AEAVDimension\@\@AEBVBoundingBox\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ScopedGameTestTickingArea(class Dimension&, class BoundingBox const&, std::string const&); // NOLINT
    /**
     * @symbol ?areChunksLoaded\@ScopedGameTestTickingArea\@\@QEAA_NXZ
     */
    MCAPI bool areChunksLoaded(); // NOLINT
    /**
     * @symbol ?getTickingArea\@ScopedGameTestTickingArea\@\@QEBA?AV?$shared_ptr\@VITickingArea\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class ITickingArea> getTickingArea() const; // NOLINT
    /**
     * @symbol ??1ScopedGameTestTickingArea\@\@QEAA\@XZ
     */
    MCAPI ~ScopedGameTestTickingArea(); // NOLINT
    /**
     * @symbol
     * ?TICKING_AREA_PREFIX\@ScopedGameTestTickingArea\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TICKING_AREA_PREFIX; // NOLINT

    // private:
    /**
     * @symbol ?_removeTickingArea\@ScopedGameTestTickingArea\@\@AEAAXXZ
     */
    MCAPI void _removeTickingArea(); // NOLINT

private:
};
