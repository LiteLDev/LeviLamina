#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CreativeGroupInfo {

public:
    // prevent constructor by default
    CreativeGroupInfo& operator=(CreativeGroupInfo const&) = delete;
    CreativeGroupInfo()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CreativeGroupInfo\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CreativeGroupInfo(class CreativeGroupInfo const&);
    /**
     * @symbol ?addCreativeItem\@CreativeGroupInfo\@\@QEAAXPEAVCreativeItemEntry\@\@\@Z
     */
    MCAPI void addCreativeItem(class CreativeItemEntry*);
    // NOLINTEND
};
