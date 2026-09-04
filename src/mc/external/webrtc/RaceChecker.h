#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RaceChecker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc04a6e;
    ::ll::UntypedStorage<4, 4> mUnk602690;
    // NOLINTEND

public:
    // prevent constructor by default
    RaceChecker& operator=(RaceChecker const&);
    RaceChecker(RaceChecker const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RaceChecker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace webrtc
