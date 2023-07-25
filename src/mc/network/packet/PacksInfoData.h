#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PacksInfoData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSINFODATA
public:
    PacksInfoData& operator=(PacksInfoData const&) = delete;
    PacksInfoData(PacksInfoData const&)            = delete;
    PacksInfoData()                                = delete;
#endif

public:
    /**
     * @symbol ?getBehaviorPackSize\@PacksInfoData\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getBehaviorPackSize() const;
    /**
     * @symbol ?getResourcePackSize\@PacksInfoData\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getResourcePackSize() const;
};
