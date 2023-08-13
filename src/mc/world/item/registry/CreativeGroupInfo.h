#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class CreativeGroupInfo : public ::Bedrock::EnableNonOwnerReferences {

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
