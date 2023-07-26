/**
 * @file  Cavifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0Cavifier\@\@QEAA\@AEBVCavifierNoises\@\@MM\@Z
     */
    MCAPI Cavifier(class CavifierNoises const &, float, float);
    /**
     * @symbol  ?cavify\@Cavifier\@\@QEBAMVVec3\@\@HM\@Z
     */
    MCAPI float cavify(class Vec3, int, float) const;

//private:
    /**
     * @symbol  ?_getSpaghetti2d\@Cavifier\@\@AEBAMVVec3\@\@\@Z
     */
    MCAPI float _getSpaghetti2d(class Vec3) const;

private:

};