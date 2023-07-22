/**
 * @file  ScopedGameTestTickingArea.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScopedGameTestTickingArea.
 *
 */
class ScopedGameTestTickingArea {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOPEDGAMETESTTICKINGAREA
public:
    class ScopedGameTestTickingArea& operator=(class ScopedGameTestTickingArea const &) = delete;
    ScopedGameTestTickingArea(class ScopedGameTestTickingArea const &) = delete;
    ScopedGameTestTickingArea() = delete;
#endif

public:
    /**
     * @symbol  ??0ScopedGameTestTickingArea\@\@QEAA\@AEAVDimension\@\@AEBVBoundingBox\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ScopedGameTestTickingArea(class Dimension &, class BoundingBox const &, std::string const &);
    /**
     * @symbol  ?areChunksLoaded\@ScopedGameTestTickingArea\@\@QEAA_NXZ
     */
    MCAPI bool areChunksLoaded();
    /**
     * @symbol  ?getTickingArea\@ScopedGameTestTickingArea\@\@QEBA?AV?$shared_ptr\@VITickingArea\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class ITickingArea> getTickingArea() const;
    /**
     * @symbol  ??1ScopedGameTestTickingArea\@\@QEAA\@XZ
     */
    MCAPI ~ScopedGameTestTickingArea();
    /**
     * @symbol  ?TICKING_AREA_PREFIX\@ScopedGameTestTickingArea\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TICKING_AREA_PREFIX;

//private:
    /**
     * @symbol  ?_removeTickingArea\@ScopedGameTestTickingArea\@\@AEAAXXZ
     */
    MCAPI void _removeTickingArea();

private:

};