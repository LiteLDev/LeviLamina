#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RenderingRidingOffsetInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RENDERINGRIDINGOFFSETINFO
public:
    RenderingRidingOffsetInfo& operator=(RenderingRidingOffsetInfo const&) = delete;
    RenderingRidingOffsetInfo(RenderingRidingOffsetInfo const&)            = delete;
    RenderingRidingOffsetInfo()                                            = delete;
#endif

public:
    /**
     * @symbol
     * ??0RenderingRidingOffsetInfo\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI RenderingRidingOffsetInfo(std::string const&, std::string const&);
    /**
     * @symbol ??1RenderingRidingOffsetInfo\@\@QEAA\@XZ
     */
    MCAPI ~RenderingRidingOffsetInfo();
};
