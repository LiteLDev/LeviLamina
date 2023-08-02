#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/PackInfoData.h"

struct PacksInfoData {

public:
    bool                                                    mResourcePackRequired;
    bool                                                    mHasScripts;
    bool                                                    mHasExceptions;
    bool                                                    mForceServerPacksEnabled;
    std::vector<PackInfoData> mBehaviorPacks;
    std::vector<PackInfoData> mResourcePacks;
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
