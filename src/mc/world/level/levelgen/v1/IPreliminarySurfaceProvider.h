#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPreliminarySurfaceProvider {

public:
    // prevent constructor by default
    IPreliminarySurfaceProvider& operator=(IPreliminarySurfaceProvider const&) = delete;
    IPreliminarySurfaceProvider(IPreliminarySurfaceProvider const&)            = delete;
    IPreliminarySurfaceProvider()                                              = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IPRELIMINARYSURFACEPROVIDER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IPreliminarySurfaceProvider();
#endif
    // NOLINTEND
};
