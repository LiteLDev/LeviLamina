#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct RuntimeCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk99c771;
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeCondition& operator=(RuntimeCondition const&);
    RuntimeCondition(RuntimeCondition const&);
    RuntimeCondition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RuntimeCondition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
