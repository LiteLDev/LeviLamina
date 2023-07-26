#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClipParameters {

public:
    // prevent constructor by default
    ClipParameters& operator=(ClipParameters const&) = delete;
    ClipParameters(ClipParameters const&)            = delete;
    ClipParameters()                                 = delete;

public:
    /**
     * @symbol
     * ??0ClipParameters\@\@QEAA\@AEBVVec3\@\@0AEBV?$function\@$$A6A_NAEBVBlockSource\@\@AEBVBlock\@\@_N\@Z\@std\@\@\@Z
     */
    MCAPI
    ClipParameters(class Vec3 const&, class Vec3 const&, class std::function<bool(class BlockSource const&, class Block const&, bool)> const&); // NOLINT
    /**
     * @symbol ??0ClipParameters\@\@QEAA\@AEBVVec3\@\@0\@Z
     */
    MCAPI ClipParameters(class Vec3 const&, class Vec3 const&); // NOLINT
    /**
     * @symbol ??1ClipParameters\@\@QEAA\@XZ
     */
    MCAPI ~ClipParameters(); // NOLINT
};
