#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PacksInfoData {

public:
    // prevent constructor by default
    PacksInfoData& operator=(PacksInfoData const&) = delete;
    PacksInfoData(PacksInfoData const&)            = delete;
    PacksInfoData()                                = delete;

public:
    /**
     * @symbol ?getBehaviorPackSize\@PacksInfoData\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getBehaviorPackSize() const; // NOLINT
    /**
     * @symbol ?getResourcePackSize\@PacksInfoData\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getResourcePackSize() const; // NOLINT
};
