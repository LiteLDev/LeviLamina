/**
 * @file  SurfaceLevelCache.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SurfaceLevelCache.
 *
 */
class SurfaceLevelCache {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURFACELEVELCACHE
public:
    class SurfaceLevelCache& operator=(class SurfaceLevelCache const &) = delete;
    SurfaceLevelCache(class SurfaceLevelCache const &) = delete;
    SurfaceLevelCache() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SurfaceLevelCache();
    /**
     * @vftbl  1
     * @symbol  ?getPreliminarySurfaceLevel\@SurfaceLevelCache\@\@UEBA?AV?$optional\@F\@std\@\@V?$DividedPos2d\@$03\@\@\@Z
     */
    virtual class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;
    /**
     * @symbol  ??0SurfaceLevelCache\@\@QEAA\@V?$DividedPos2d\@$03\@\@AEBVIPreliminarySurfaceProvider\@\@_K\@Z
     */
    MCAPI SurfaceLevelCache(class DividedPos2d<4>, class IPreliminarySurfaceProvider const &, unsigned __int64);

};