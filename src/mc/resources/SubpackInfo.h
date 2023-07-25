#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SubpackInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBPACKINFO
public:
    SubpackInfo& operator=(SubpackInfo const&) = delete;
    SubpackInfo(SubpackInfo const&)            = delete;
    SubpackInfo()                              = delete;
#endif

public:
    /**
     * @symbol ??1SubpackInfo\@\@QEAA\@XZ
     */
    MCAPI ~SubpackInfo();
};
