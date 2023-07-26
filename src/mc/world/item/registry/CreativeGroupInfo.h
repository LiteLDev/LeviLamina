#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CreativeGroupInfo {

public:
    // prevent constructor by default
    CreativeGroupInfo& operator=(CreativeGroupInfo const&) = delete;
    CreativeGroupInfo()                                    = delete;

public:
    /**
     * @symbol ??0CreativeGroupInfo\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CreativeGroupInfo(class CreativeGroupInfo const&); // NOLINT
    /**
     * @symbol ?addCreativeItem\@CreativeGroupInfo\@\@QEAAXPEAVCreativeItemEntry\@\@\@Z
     */
    MCAPI void addCreativeItem(class CreativeItemEntry*); // NOLINT
};
