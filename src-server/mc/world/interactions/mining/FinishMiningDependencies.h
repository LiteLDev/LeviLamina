#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions::Mining {

struct FinishMiningDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc030e8;
    ::ll::UntypedStorage<8, 8> mUnk3b0a1d;
    ::ll::UntypedStorage<8, 8> mUnk53d140;
    ::ll::UntypedStorage<8, 8> mUnk361ff4;
    // NOLINTEND

public:
    // prevent constructor by default
    FinishMiningDependencies& operator=(FinishMiningDependencies const&);
    FinishMiningDependencies(FinishMiningDependencies const&);
    FinishMiningDependencies();

};

}
