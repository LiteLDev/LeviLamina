#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThirdPartyInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THIRDPARTYINFO
public:
    ThirdPartyInfo& operator=(ThirdPartyInfo const&) = delete;
#endif

public:
    /**
     * @symbol ??0ThirdPartyInfo\@\@QEAA\@XZ
     */
    MCAPI ThirdPartyInfo();
    /**
     * @symbol ??0ThirdPartyInfo\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ThirdPartyInfo(class ThirdPartyInfo const&);
    /**
     * @symbol ??1ThirdPartyInfo\@\@QEAA\@XZ
     */
    MCAPI ~ThirdPartyInfo();
};
