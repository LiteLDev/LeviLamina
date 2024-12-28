#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/LocalWorldInfo.h"

struct LegacyWorldInfo : public ::LocalWorldInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcdeeaf;
    ::ll::UntypedStorage<8, 8>  mUnkd28ef8;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyWorldInfo& operator=(LegacyWorldInfo const&);
    LegacyWorldInfo(LegacyWorldInfo const&);
    LegacyWorldInfo();
};
