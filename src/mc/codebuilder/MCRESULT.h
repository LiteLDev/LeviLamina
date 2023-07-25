#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MCRESULT {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MCRESULT
public:
    MCRESULT& operator=(MCRESULT const&) = delete;
    MCRESULT(MCRESULT const&)            = delete;
    MCRESULT()                           = delete;
#endif

public:
    /**
     * @symbol ?getFullCode\@MCRESULT\@\@QEBAHXZ
     */
    MCAPI int getFullCode() const;
    /**
     * @symbol ?isSuccess\@MCRESULT\@\@QEBA_NXZ
     */
    MCAPI bool isSuccess() const;
    /**
     * @symbol ??8MCRESULT\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct MCRESULT const&) const;
};
