#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangActorPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2b49a1;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangActorPtr& operator=(MolangActorPtr const&);
    MolangActorPtr(MolangActorPtr const&);
    MolangActorPtr();
};
