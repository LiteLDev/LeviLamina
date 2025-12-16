#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MinecraftGraphicsPipeline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk9276a8;
    ::ll::UntypedStorage<8, 104> mUnk67880b;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGraphicsPipeline& operator=(MinecraftGraphicsPipeline const&);
    MinecraftGraphicsPipeline(MinecraftGraphicsPipeline const&);
    MinecraftGraphicsPipeline();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MinecraftGraphicsPipeline();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
