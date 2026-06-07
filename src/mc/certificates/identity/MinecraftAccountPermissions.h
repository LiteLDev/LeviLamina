#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecraftAccountPermissions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk17e31c;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftAccountPermissions& operator=(MinecraftAccountPermissions const&);
    MinecraftAccountPermissions(MinecraftAccountPermissions const&);
    MinecraftAccountPermissions();
};
