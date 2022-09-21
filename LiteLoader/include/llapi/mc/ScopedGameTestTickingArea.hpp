/**
 * @file  MC/ScopedGameTestTickingArea.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -574559811
     * @symbol ??0ScopedGameTestTickingArea@@QEAA@AEAVDimension@@AEBVBoundingBox@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI ScopedGameTestTickingArea(class Dimension &, class BoundingBox const &, std::string const &);
    /**
     * @hash   -1037310350
     * @symbol ?areChunksLoaded@ScopedGameTestTickingArea@@QEAA_NXZ
     */
    MCAPI bool areChunksLoaded();
    /**
     * @hash   1471262355
     * @symbol ?getTickingArea@ScopedGameTestTickingArea@@QEBA?AV?$shared_ptr@VITickingArea@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class ITickingArea> getTickingArea() const;
    /**
     * @hash   -71559158
     * @symbol ??1ScopedGameTestTickingArea@@QEAA@XZ
     */
    MCAPI ~ScopedGameTestTickingArea();
    /**
     * @hash   1955407679
     * @symbol ?TICKING_AREA_PREFIX@ScopedGameTestTickingArea@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TICKING_AREA_PREFIX;

//private:
    /**
     * @hash   -170751987
     * @symbol ?_removeTickingArea@ScopedGameTestTickingArea@@AEAAXXZ
     */
    MCAPI void _removeTickingArea();

private:

};