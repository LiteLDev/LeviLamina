#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/DividedPos2d.h"

class SurfaceLevelCache {

public:
    // prevent constructor by default
    SurfaceLevelCache& operator=(SurfaceLevelCache const&) = delete;
    SurfaceLevelCache(SurfaceLevelCache const&)            = delete;
    SurfaceLevelCache()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getPreliminarySurfaceLevel\@SurfaceLevelCache\@\@UEBA?AV?$optional\@F\@std\@\@V?$DividedPos2d\@$03\@\@\@Z
     */
    virtual std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SURFACELEVELCACHE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SurfaceLevelCache();
#endif
    /**
     * @symbol ??0SurfaceLevelCache\@\@QEAA\@V?$DividedPos2d\@$03\@\@AEBVIPreliminarySurfaceProvider\@\@_K\@Z
     */
    MCAPI SurfaceLevelCache(class DividedPos2d<4>, class IPreliminarySurfaceProvider const&, uint64_t);
    // NOLINTEND
};
