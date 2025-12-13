#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

struct DebugParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk9e55f3;
    ::ll::UntypedStorage<1, 1>  mUnkd99b29;
    ::ll::UntypedStorage<1, 1>  mUnkad3f08;
    ::ll::UntypedStorage<1, 1>  mUnk74c76b;
    ::ll::UntypedStorage<1, 1>  mUnkbfb221;
    ::ll::UntypedStorage<1, 1>  mUnk99de02;
    ::ll::UntypedStorage<8, 48> mUnkc709a3;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugParameters& operator=(DebugParameters const&);
    DebugParameters(DebugParameters const&);
    DebugParameters();
};

} // namespace dragon::framerenderer
