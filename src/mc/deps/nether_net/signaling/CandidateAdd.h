#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class CandidateAdd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd112e8;
    ::ll::UntypedStorage<8, 32> mUnkb6daf5;
    // NOLINTEND

public:
    // prevent constructor by default
    CandidateAdd& operator=(CandidateAdd const&);
    CandidateAdd(CandidateAdd const&);
    CandidateAdd();
};

} // namespace NetherNet
