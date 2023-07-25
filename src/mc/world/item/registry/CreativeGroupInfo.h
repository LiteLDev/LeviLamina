#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CreativeGroupInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEGROUPINFO
public:
    CreativeGroupInfo& operator=(CreativeGroupInfo const&) = delete;
    CreativeGroupInfo()                                    = delete;
#endif

public:
    /**
     * @symbol ??0CreativeGroupInfo\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CreativeGroupInfo(class CreativeGroupInfo const&);
    /**
     * @symbol ?addCreativeItem\@CreativeGroupInfo\@\@QEAAXPEAVCreativeItemEntry\@\@\@Z
     */
    MCAPI void addCreativeItem(class CreativeItemEntry*);
};
