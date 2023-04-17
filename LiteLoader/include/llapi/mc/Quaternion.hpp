/**
 * @file  Quaternion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class Quaternion {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_QUATERNION
public:
    class Quaternion& operator=(class Quaternion const &) = delete;
    Quaternion(class Quaternion const &) = delete;
    Quaternion() = delete;
#endif

public:
    /**
     * @symbol ??0Quaternion\@\@QEAA\@AEBVMatrix\@\@\@Z
     */
    MCAPI Quaternion(class Matrix const &);

};
