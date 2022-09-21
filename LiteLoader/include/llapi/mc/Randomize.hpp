/**
 * @file  MC/Randomize.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Randomize.
 *
 */
class Randomize {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMIZE
public:
    class Randomize& operator=(class Randomize const &) = delete;
    Randomize(class Randomize const &) = delete;
    Randomize() = delete;
#endif

public:
    /**
     * @hash   -693538530
     * @symbol ??0Randomize@@QEAA@AEAVRandom@@@Z
     */
    MCAPI Randomize(class Random &);
    /**
     * @hash   925355238
     * @symbol ?chance@Randomize@@QEBA_NHH@Z
     */
    MCAPI bool chance(int, int) const;
    /**
     * @hash   -1726542563
     * @symbol ?chanceAllButOneIn@Randomize@@QEBA_NH@Z
     */
    MCAPI bool chanceAllButOneIn(int) const;
    /**
     * @hash   1574787193
     * @symbol ?chanceFloatGreaterThan@Randomize@@QEBA_NM@Z
     */
    MCAPI bool chanceFloatGreaterThan(float) const;
    /**
     * @hash   668703545
     * @symbol ?chanceFloatLessOrEqual@Randomize@@QEBA_NM@Z
     */
    MCAPI bool chanceFloatLessOrEqual(float) const;
    /**
     * @hash   -169935301
     * @symbol ?chanceFloatLessThan@Randomize@@QEBA_NM@Z
     */
    MCAPI bool chanceFloatLessThan(float) const;
    /**
     * @hash   -462217363
     * @symbol ?chanceOneIn@Randomize@@QEBA_NH@Z
     */
    MCAPI bool chanceOneIn(int) const;
    /**
     * @hash   -554396776
     * @symbol ?nextFloat@Randomize@@QEBAMXZ
     */
    MCAPI float nextFloat() const;
    /**
     * @hash   -2009924258
     * @symbol ?nextIntInclusive@Randomize@@QEBAHHH@Z
     */
    MCAPI int nextIntInclusive(int, int) const;
    /**
     * @hash   1815455805
     * @symbol ??1Randomize@@QEAA@XZ
     */
    MCAPI ~Randomize();
    /**
     * @hash   -2106118545
     * @symbol ?ChanceFloatGreaterThan_MinExcessiveImprobability@Randomize@@2MB
     */
    MCAPI static float const ChanceFloatGreaterThan_MinExcessiveImprobability;

};