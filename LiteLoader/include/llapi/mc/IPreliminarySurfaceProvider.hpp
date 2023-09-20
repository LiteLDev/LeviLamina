/**
 * @file  IPreliminarySurfaceProvider.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IPreliminarySurfaceProvider.
 *
 */
class IPreliminarySurfaceProvider {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IPRELIMINARYSURFACEPROVIDER
public:
    class IPreliminarySurfaceProvider& operator=(class IPreliminarySurfaceProvider const &) = delete;
    IPreliminarySurfaceProvider(class IPreliminarySurfaceProvider const &) = delete;
    IPreliminarySurfaceProvider() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getPreliminarySurfaceLevel\@SurfaceLevelCache\@\@UEBA?AV?$optional\@F\@std\@\@V?$DividedPos2d\@$03\@\@\@Z
     */
    virtual class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IPRELIMINARYSURFACEPROVIDER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IPreliminarySurfaceProvider();
#endif

};
