#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScoreboardIdentityPacketInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka1a5a8;
    ::ll::UntypedStorage<8, 8>  mUnked4ff0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScoreboardIdentityPacketInfo& operator=(ScoreboardIdentityPacketInfo const&);
    ScoreboardIdentityPacketInfo(ScoreboardIdentityPacketInfo const&);
    ScoreboardIdentityPacketInfo();
};
