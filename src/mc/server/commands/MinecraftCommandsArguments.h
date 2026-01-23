#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecraftCommandsArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk39dd7a;
    ::ll::UntypedStorage<8, 8> mUnk1896e7;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftCommandsArguments& operator=(MinecraftCommandsArguments const&);
    MinecraftCommandsArguments(MinecraftCommandsArguments const&);
    MinecraftCommandsArguments();
};
