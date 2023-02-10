/**
 * @file  Cavifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Cavifier.
 *
 */
class Cavifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAVIFIER
public:
    class Cavifier& operator=(class Cavifier const &) = delete;
    Cavifier(class Cavifier const &) = delete;
    Cavifier() = delete;
#endif

public:
    /**
     * @hash   549112334
     * @symbol  ??0Cavifier\@\@QEAA\@AEBVCavifierNoises\@\@MM\@Z
     */
    MCAPI Cavifier(class CavifierNoises const &, float, float);
    /**
     * @hash   -1838340007
     * @symbol  ?cavify\@Cavifier\@\@QEBAMVVec3\@\@HM\@Z
     */
    MCAPI float cavify(class Vec3, int, float) const;

//private:
    /**
     * @hash   -1749892564
     * @symbol  ?_getSpaghetti2d\@Cavifier\@\@AEBAMVVec3\@\@\@Z
     */
    MCAPI float _getSpaghetti2d(class Vec3) const;

private:

};