/**
 * @file  EndPortalShape.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0EndPortalShape\@\@QEAA\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI EndPortalShape(class BlockSource &, class BlockPos);
    /**
     * @symbol  ?getOrigin\@EndPortalShape\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getOrigin() const;
    /**
     * @symbol  ?isValid\@EndPortalShape\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool isValid(class BlockSource &);
    /**
     * @symbol  ??1EndPortalShape\@\@QEAA\@XZ
     */
    MCAPI ~EndPortalShape();

};