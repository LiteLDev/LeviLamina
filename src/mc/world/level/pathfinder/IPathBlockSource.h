#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPathBlockSource {

public:
    // prevent constructor by default
    IPathBlockSource& operator=(IPathBlockSource const&) = delete;
    IPathBlockSource(IPathBlockSource const&)            = delete;
    IPathBlockSource()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isInWater\@PathBlockSource\@\@UEBA_NXZ
     */
    virtual bool isInWater() const = 0;
    /**
     * @vftbl 2
     * @symbol ?isInLava\@PathBlockSource\@\@UEBA_NXZ
     */
    virtual bool isInLava() const = 0;
    /**
     * @vftbl 3
     * @symbol ?isWaterBlock\@PathBlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool isWaterBlock(class BlockPos const&) const = 0;
    /**
     * @vftbl 4
     * @symbol ?isLavaBlock\@PathBlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool isLavaBlock(class BlockPos const&) const = 0;
    /**
     * @vftbl 5
     * @symbol ?isSolidBlock\@PathBlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool isSolidBlock(class BlockPos const&) const = 0;
    // NOLINTEND
};
