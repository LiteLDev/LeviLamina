#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EndPortalShape {

public:
    // prevent constructor by default
    EndPortalShape& operator=(EndPortalShape const&) = delete;
    EndPortalShape(EndPortalShape const&)            = delete;
    EndPortalShape()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0EndPortalShape\@\@QEAA\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI EndPortalShape(class BlockSource&, class BlockPos);
    /**
     * @symbol ?isValid\@EndPortalShape\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool isValid(class BlockSource&);
    /**
     * @symbol ??1EndPortalShape\@\@QEAA\@XZ
     */
    MCAPI ~EndPortalShape();
    // NOLINTEND
};
