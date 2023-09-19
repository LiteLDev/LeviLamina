#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/PackInfoData.h"

struct PacksInfoData {
public:
    bool                      mResourcePackRequired;    // this+0x0
    bool                      mHasScripts;              // this+0x1
    bool                      mHasExceptions;           // this+0x2
    bool                      mForceServerPacksEnabled; // this+0x3
    std::vector<PackInfoData> mBehaviorPacks;           // this+0x8
    std::vector<PackInfoData> mResourcePacks;           // this+0x20

    // prevent constructor by default
    PacksInfoData& operator=(PacksInfoData const&);
    PacksInfoData(PacksInfoData const&);
    PacksInfoData();

public:
    // NOLINTBEGIN
    // symbol: ?getBehaviorPackSize@PacksInfoData@@QEBA_KXZ
    MCAPI uint64 getBehaviorPackSize() const;

    // symbol: ?getResourcePackSize@PacksInfoData@@QEBA_KXZ
    MCAPI uint64 getResourcePackSize() const;

    // NOLINTEND
};
