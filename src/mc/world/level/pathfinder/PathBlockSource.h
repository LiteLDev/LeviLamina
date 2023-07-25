#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PathBlockSource {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PATHBLOCKSOURCE
public:
    PathBlockSource& operator=(PathBlockSource const&) = delete;
    PathBlockSource(PathBlockSource const&)            = delete;
    PathBlockSource()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isInWater\@PathBlockSource\@\@UEBA_NXZ
     */
    virtual bool isInWater() const;
    /**
     * @vftbl 2
     * @symbol ?isInLava\@PathBlockSource\@\@UEBA_NXZ
     */
    virtual bool isInLava() const;
    /**
     * @vftbl 3
     * @symbol ?isWaterBlock\@PathBlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool isWaterBlock(class BlockPos const&) const;
    /**
     * @vftbl 4
     * @symbol ?isLavaBlock\@PathBlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool isLavaBlock(class BlockPos const&) const;
    /**
     * @vftbl 5
     * @symbol ?isSolidBlock\@PathBlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool isSolidBlock(class BlockPos const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PATHBLOCKSOURCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PathBlockSource();
#endif
};
