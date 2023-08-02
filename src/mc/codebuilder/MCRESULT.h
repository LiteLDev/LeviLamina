#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/codebuilder/MCCATEGORY.h"

struct MCRESULT {

public:
    bool                  mSuccess;
    enum class MCCATEGORY mCategory;
    uint16_t              mCode;

    operator bool() { return mSuccess; }

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
