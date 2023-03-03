/**
 * @file  MCRESULT.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure MCRESULT.
 *
 */
struct MCRESULT {

#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_MCRESULT
    unsigned char filler[4];
    operator bool() {
        return filler[0];
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MCRESULT
public:
    struct MCRESULT& operator=(struct MCRESULT const &) = delete;
    MCRESULT(struct MCRESULT const &) = delete;
    MCRESULT() = delete;
#endif

public:
    /**
     * @symbol  ?getFullCode\@MCRESULT\@\@QEBAHXZ
     */
    MCAPI int getFullCode() const;
    /**
     * @symbol  ?isSuccess\@MCRESULT\@\@QEBA_NXZ
     */
    MCAPI bool isSuccess() const;

};