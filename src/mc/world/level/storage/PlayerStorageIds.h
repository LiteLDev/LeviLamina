#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerStorageIds {
public:
    std::string MsaId;             // this+0x0
    std::string PlatformId;        // this+0x20
    std::string PlatformOnlineId;  // this+0x40
    std::string PlatformOfflineId; // this+0x60
    std::string SelfSignedId;      // this+0x80
    std::string RandomClientId;    // this+0xA0

public:
    // NOLINTBEGIN
    // symbol: ??1PlayerStorageIds@@QEAA@XZ
    MCAPI ~PlayerStorageIds();

    // NOLINTEND
};
