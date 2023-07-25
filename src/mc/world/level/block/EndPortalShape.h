#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EndPortalShape {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDPORTALSHAPE
public:
    EndPortalShape& operator=(EndPortalShape const&) = delete;
    EndPortalShape(EndPortalShape const&)            = delete;
    EndPortalShape()                                 = delete;
#endif

public:
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
};
