#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DedicatedServerInitialization {

struct InitContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5297b2;
    ::ll::UntypedStorage<8, 8> mUnkda07d4;
    // NOLINTEND

public:
    // prevent constructor by default
    InitContext& operator=(InitContext const&);
    InitContext(InitContext const&);
    InitContext();
};

} // namespace DedicatedServerInitialization
