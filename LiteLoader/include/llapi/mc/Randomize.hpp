/**
 * @file  Randomize.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1274858962
     * @symbol  ??0Randomize\@\@QEAA\@AEAVRandom\@\@\@Z
     */
    MCAPI Randomize(class Random &);
    /**
     * @hash   344050182
     * @symbol  ?chance\@Randomize\@\@QEBA_NHH\@Z
     */
    MCAPI bool chance(int, int) const;
    /**
     * @hash   1987119677
     * @symbol  ?chanceAllButOneIn\@Randomize\@\@QEBA_NH\@Z
     */
    MCAPI bool chanceAllButOneIn(int) const;
    /**
     * @hash   993482137
     * @symbol  ?chanceFloatGreaterThan\@Randomize\@\@QEBA_NM\@Z
     */
    MCAPI bool chanceFloatGreaterThan(float) const;
    /**
     * @hash   87398489
     * @symbol  ?chanceFloatLessOrEqual\@Randomize\@\@QEBA_NM\@Z
     */
    MCAPI bool chanceFloatLessOrEqual(float) const;
    /**
     * @hash   -751240357
     * @symbol  ?chanceFloatLessThan\@Randomize\@\@QEBA_NM\@Z
     */
    MCAPI bool chanceFloatLessThan(float) const;
    /**
     * @hash   -1043522419
     * @symbol  ?chanceOneIn\@Randomize\@\@QEBA_NH\@Z
     */
    MCAPI bool chanceOneIn(int) const;
    /**
     * @hash   -1135701832
     * @symbol  ?nextFloat\@Randomize\@\@QEBAMXZ
     */
    MCAPI float nextFloat() const;
    /**
     * @hash   1703753358
     * @symbol  ?nextIntInclusive\@Randomize\@\@QEBAHHH\@Z
     */
    MCAPI int nextIntInclusive(int, int) const;
    /**
     * @hash   1606326829
     * @symbol  ??1Randomize\@\@QEAA\@XZ
     */
    MCAPI ~Randomize();
    /**
     * @hash   -997893345
     * @symbol  ?ChanceFloatGreaterThan_MinExcessiveImprobability\@Randomize\@\@2MB
     */
    MCAPI static float const ChanceFloatGreaterThan_MinExcessiveImprobability;

};