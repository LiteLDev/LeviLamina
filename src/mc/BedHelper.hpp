/**
 * @file  BedHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BedHelper.
 *
 */
class BedHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDHELPER
public:
    class BedHelper& operator=(class BedHelper const &) = delete;
    BedHelper(class BedHelper const &) = delete;
    BedHelper() = delete;
#endif

public:
    /**
     * @symbol  ??0BedHelper\@\@QEAA\@HHHHMMMMMM\@Z
     */
    MCAPI BedHelper(int, int, int, int, float, float, float, float, float, float);
    /**
     * @symbol  ??0BedHelper\@\@QEAA\@HHHHMMMM\@Z
     */
    MCAPI BedHelper(int, int, int, int, float, float, float, float);
    /**
     * @symbol  ?getBedRotation\@BedHelper\@\@QEBAMH\@Z
     */
    MCAPI float getBedRotation(int) const;
    /**
     * @symbol  ?setBedPositionOffsets\@BedHelper\@\@QEAAXHAEAM0AEAVVec3\@\@\@Z
     */
    MCAPI void setBedPositionOffsets(int, float &, float &, class Vec3 &);

};