#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CraftingSessionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkc36f7e;
    ::ll::UntypedStorage<4, 4>  mUnkc24046;
    ::ll::UntypedStorage<4, 4>  mUnk6dc536;
    ::ll::UntypedStorage<4, 4>  mUnkb19aac;
    ::ll::UntypedStorage<1, 1>  mUnkcd00e6;
    ::ll::UntypedStorage<1, 1>  mUnk43a436;
    ::ll::UntypedStorage<1, 1>  mUnkd1ae83;
    ::ll::UntypedStorage<8, 24> mUnk7d107a;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingSessionInfo& operator=(CraftingSessionInfo const&);
    CraftingSessionInfo(CraftingSessionInfo const&);
    CraftingSessionInfo();
};
