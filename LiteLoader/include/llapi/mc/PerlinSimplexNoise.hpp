/**
 * @file  PerlinSimplexNoise.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PerlinSimplexNoise.
 *
 */
class PerlinSimplexNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERLINSIMPLEXNOISE
public:
    class PerlinSimplexNoise& operator=(class PerlinSimplexNoise const &) = delete;
    PerlinSimplexNoise() = delete;
#endif

public:
    /**
     * @hash   -889101550
     * @symbol  ??0PerlinSimplexNoise\@\@QEAA\@IH\@Z
     */
    MCAPI PerlinSimplexNoise(unsigned int, int);
    /**
     * @hash   900091465
     * @symbol  ??0PerlinSimplexNoise\@\@QEAA\@AEAVIRandom\@\@H_N\@Z
     */
    MCAPI PerlinSimplexNoise(class IRandom &, int, bool);
    /**
     * @hash   -1938601583
     * @symbol  ??0PerlinSimplexNoise\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PerlinSimplexNoise(class PerlinSimplexNoise const &);
    /**
     * @hash   -711268854
     * @symbol  ?getRegion\@PerlinSimplexNoise\@\@QEBAPEAMPEAMAEBVVec2\@\@HH1MM\@Z
     */
    MCAPI float * getRegion(float *, class Vec2 const &, int, int, class Vec2 const &, float, float) const;
    /**
     * @hash   1076499783
     * @symbol  ?getValue\@PerlinSimplexNoise\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float getValue(class Vec3 const &) const;
    /**
     * @hash   1326568942
     * @symbol  ?getValue\@PerlinSimplexNoise\@\@QEBAMMM\@Z
     */
    MCAPI float getValue(float, float) const;
    /**
     * @hash   1097638265
     * @symbol  ?getValueNormalized\@PerlinSimplexNoise\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float getValueNormalized(class Vec3 const &) const;
    /**
     * @hash   701399598
     * @symbol  ?getValueNormalized\@PerlinSimplexNoise\@\@QEBAMMM\@Z
     */
    MCAPI float getValueNormalized(float, float) const;
    /**
     * @hash   2022509170
     * @symbol  ??1PerlinSimplexNoise\@\@QEAA\@XZ
     */
    MCAPI ~PerlinSimplexNoise();

//private:
    /**
     * @hash   933761431
     * @symbol  ?_init\@PerlinSimplexNoise\@\@AEAAXAEAVIRandom\@\@_N\@Z
     */
    MCAPI void _init(class IRandom &, bool);

private:

};