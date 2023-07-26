#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Randomize {

public:
    // prevent constructor by default
    Randomize& operator=(Randomize const&) = delete;
    Randomize(Randomize const&)            = delete;
    Randomize()                            = delete;

public:
    /**
     * @symbol ??0Randomize\@\@QEAA\@AEAVRandom\@\@\@Z
     */
    MCAPI Randomize(class Random&); // NOLINT
    /**
     * @symbol ?chance\@Randomize\@\@QEBA_NHH\@Z
     */
    MCAPI bool chance(int, int) const; // NOLINT
    /**
     * @symbol ?chanceAllButOneIn\@Randomize\@\@QEBA_NH\@Z
     */
    MCAPI bool chanceAllButOneIn(int) const; // NOLINT
    /**
     * @symbol ?chanceFloatGreaterThan\@Randomize\@\@QEBA_NM\@Z
     */
    MCAPI bool chanceFloatGreaterThan(float) const; // NOLINT
    /**
     * @symbol ?chanceFloatLessOrEqual\@Randomize\@\@QEBA_NM\@Z
     */
    MCAPI bool chanceFloatLessOrEqual(float) const; // NOLINT
    /**
     * @symbol ?chanceFloatLessThan\@Randomize\@\@QEBA_NM\@Z
     */
    MCAPI bool chanceFloatLessThan(float) const; // NOLINT
    /**
     * @symbol ?chanceOneIn\@Randomize\@\@QEBA_NH\@Z
     */
    MCAPI bool chanceOneIn(int) const; // NOLINT
    /**
     * @symbol ?nextFloat\@Randomize\@\@QEBAMXZ
     */
    MCAPI float nextFloat() const; // NOLINT
    /**
     * @symbol ?nextIntInclusive\@Randomize\@\@QEBAHHH\@Z
     */
    MCAPI int nextIntInclusive(int, int) const; // NOLINT
    /**
     * @symbol ??1Randomize\@\@QEAA\@XZ
     */
    MCAPI ~Randomize(); // NOLINT
    /**
     * @symbol ?ChanceFloatGreaterThan_MinExcessiveImprobability\@Randomize\@\@2MB
     */
    MCAPI static float const ChanceFloatGreaterThan_MinExcessiveImprobability; // NOLINT
};
