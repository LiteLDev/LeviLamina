#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct ClientState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk688fc0;
    ::ll::UntypedStorage<1, 1> mUnkb3c649;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientState& operator=(ClientState const&);
    ClientState(ClientState const&);
    ClientState();
};

} // namespace Bedrock::Profiling::Orchestrator
