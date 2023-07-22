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
     * @symbol  ??0PerlinSimplexNoise\@\@QEAA\@IH\@Z
     */
    MCAPI PerlinSimplexNoise(unsigned int, int);
    /**
     * @symbol  ??0PerlinSimplexNoise\@\@QEAA\@AEAVIRandom\@\@H_N\@Z
     */
    MCAPI PerlinSimplexNoise(class IRandom &, int, bool);
    /**
     * @symbol  ??0PerlinSimplexNoise\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PerlinSimplexNoise(class PerlinSimplexNoise const &);
    /**
     * @symbol  ?getRegion\@PerlinSimplexNoise\@\@QEBAPEAMPEAMAEBVVec2\@\@HH1MM\@Z
     */
    MCAPI float * getRegion(float *, class Vec2 const &, int, int, class Vec2 const &, float, float) const;
    /**
     * @symbol  ?getValue\@PerlinSimplexNoise\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float getValue(class Vec3 const &) const;
    /**
     * @symbol  ?getValue\@PerlinSimplexNoise\@\@QEBAMMM\@Z
     */
    MCAPI float getValue(float, float) const;
    /**
     * @symbol  ?getValueNormalized\@PerlinSimplexNoise\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float getValueNormalized(class Vec3 const &) const;
    /**
     * @symbol  ?getValueNormalized\@PerlinSimplexNoise\@\@QEBAMMM\@Z
     */
    MCAPI float getValueNormalized(float, float) const;
    /**
     * @symbol  ??1PerlinSimplexNoise\@\@QEAA\@XZ
     */
    MCAPI ~PerlinSimplexNoise();

//private:
    /**
     * @symbol  ?_init\@PerlinSimplexNoise\@\@AEAAXAEAVIRandom\@\@_N\@Z
     */
    MCAPI void _init(class IRandom &, bool);

private:

};