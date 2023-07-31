#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PacksInfoData {

public:
    // prevent constructor by default
    PacksInfoData& operator=(PacksInfoData const&) = delete;
    PacksInfoData(PacksInfoData const&)            = delete;
    PacksInfoData()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getBehaviorPackSize\@PacksInfoData\@\@QEBA_KXZ
     */
    MCAPI uint64_t getBehaviorPackSize() const;
    /**
     * @symbol ?getResourcePackSize\@PacksInfoData\@\@QEBA_KXZ
     */
    MCAPI uint64_t getResourcePackSize() const;
    // NOLINTEND
};
