#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RewindSimulationDebugContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk914897;
    ::ll::UntypedStorage<4, 8> mUnke42563;
    ::ll::UntypedStorage<8, 32> mUnk453a41;
    ::ll::UntypedStorage<8, 8> mUnk6b3617;
    ::ll::UntypedStorage<8, 8> mUnkfb34da;
    ::ll::UntypedStorage<8, 8> mUnkd25aa8;
    // NOLINTEND

public:
    // prevent constructor by default
    RewindSimulationDebugContext& operator=(RewindSimulationDebugContext const&);
    RewindSimulationDebugContext(RewindSimulationDebugContext const&);
    RewindSimulationDebugContext();

};
