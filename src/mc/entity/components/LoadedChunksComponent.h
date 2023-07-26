#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LoadedChunksComponent {

public:
    // prevent constructor by default
    LoadedChunksComponent& operator=(LoadedChunksComponent const&) = delete;
    LoadedChunksComponent(LoadedChunksComponent const&)            = delete;
    LoadedChunksComponent()                                        = delete;
};
