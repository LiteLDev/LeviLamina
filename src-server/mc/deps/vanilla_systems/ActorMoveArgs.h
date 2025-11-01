#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaSystems {

struct ActorMoveArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk172cfc;
    ::ll::UntypedStorage<8, 8> mUnk974e84;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorMoveArgs& operator=(ActorMoveArgs const&);
    ActorMoveArgs(ActorMoveArgs const&);
    ActorMoveArgs();
};

} // namespace VanillaSystems
