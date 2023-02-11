/**
 * @file  EndPortalShape.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EndPortalShape.
 *
 */
class EndPortalShape {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDPORTALSHAPE
public:
    class EndPortalShape& operator=(class EndPortalShape const &) = delete;
    EndPortalShape(class EndPortalShape const &) = delete;
    EndPortalShape() = delete;
#endif

public:
    /**
     * @hash   -634048408
     * @symbol  ??0EndPortalShape\@\@QEAA\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI EndPortalShape(class BlockSource &, class BlockPos);
    /**
     * @hash   712864272
     * @symbol  ?getOrigin\@EndPortalShape\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getOrigin() const;
    /**
     * @hash   -422952263
     * @symbol  ?isValid\@EndPortalShape\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool isValid(class BlockSource &);
    /**
     * @hash   -1036916524
     * @symbol  ??1EndPortalShape\@\@QEAA\@XZ
     */
    MCAPI ~EndPortalShape();

};