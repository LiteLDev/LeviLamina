#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MCRESULT {

public:
    // prevent constructor by default
    MCRESULT& operator=(MCRESULT const&) = delete;
    MCRESULT(MCRESULT const&)            = delete;
    MCRESULT()                           = delete;

public:
    /**
     * @symbol ?getFullCode\@MCRESULT\@\@QEBAHXZ
     */
    MCAPI int getFullCode() const; // NOLINT
    /**
     * @symbol ?isSuccess\@MCRESULT\@\@QEBA_NXZ
     */
    MCAPI bool isSuccess() const; // NOLINT
    /**
     * @symbol ??8MCRESULT\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct MCRESULT const&) const; // NOLINT
};
