#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/DividedPos2d.h"

class IPreliminarySurfaceProvider {

public:
    // prevent constructor by default
    IPreliminarySurfaceProvider& operator=(IPreliminarySurfaceProvider const&) = delete;
    IPreliminarySurfaceProvider(IPreliminarySurfaceProvider const&)            = delete;
    IPreliminarySurfaceProvider()                                              = delete;

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
    virtual std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IPRELIMINARYSURFACEPROVIDER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IPreliminarySurfaceProvider();
#endif
    // NOLINTEND
};
