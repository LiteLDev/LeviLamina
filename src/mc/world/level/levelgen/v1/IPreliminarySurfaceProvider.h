#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPreliminarySurfaceProvider {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IPRELIMINARYSURFACEPROVIDER
public:
    IPreliminarySurfaceProvider& operator=(IPreliminarySurfaceProvider const&) = delete;
    IPreliminarySurfaceProvider(IPreliminarySurfaceProvider const&)            = delete;
    IPreliminarySurfaceProvider()                                              = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IPRELIMINARYSURFACEPROVIDER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IPreliminarySurfaceProvider();
#endif
};
