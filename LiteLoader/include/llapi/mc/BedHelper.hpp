/**
 * @file  BedHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -2074919661
     * @symbol ??0BedHelper@@QEAA@HHHHMMMMMM@Z
     */
    MCAPI BedHelper(int, int, int, int, float, float, float, float, float, float);
    /**
     * @hash   405033267
     * @symbol ??0BedHelper@@QEAA@HHHHMMMM@Z
     */
    MCAPI BedHelper(int, int, int, int, float, float, float, float);
    /**
     * @hash   1573376259
     * @symbol ?getBedRotation@BedHelper@@QEBAMH@Z
     */
    MCAPI float getBedRotation(int) const;
    /**
     * @hash   964713467
     * @symbol ?setBedPositionOffsets@BedHelper@@QEAAXHAEAM0AEAVVec3@@@Z
     */
    MCAPI void setBedPositionOffsets(int, float &, float &, class Vec3 &);

};