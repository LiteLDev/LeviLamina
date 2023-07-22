/**
 * @file  ClipParameters.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ClipParameters.
 *
 */
struct ClipParameters {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIPPARAMETERS
public:
    struct ClipParameters& operator=(struct ClipParameters const &) = delete;
    ClipParameters(struct ClipParameters const &) = delete;
    ClipParameters() = delete;
#endif

public:
    /**
     * @symbol  ??0ClipParameters\@\@QEAA\@AEBVVec3\@\@0AEBV?$function\@$$A6A_NAEBVBlockSource\@\@AEBVBlock\@\@_N\@Z\@std\@\@\@Z
     */
    MCAPI ClipParameters(class Vec3 const &, class Vec3 const &, class std::function<bool (class BlockSource const &, class Block const &, bool)> const &);
    /**
     * @symbol  ??1ClipParameters\@\@QEAA\@XZ
     */
    MCAPI ~ClipParameters();

};