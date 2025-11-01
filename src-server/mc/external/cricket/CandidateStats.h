#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class CandidateStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 528> mUnkf44837;
    ::ll::UntypedStorage<8, 32> mUnk567153;
    // NOLINTEND

public:
    // prevent constructor by default
    CandidateStats& operator=(CandidateStats const&);
    CandidateStats(CandidateStats const&);
    CandidateStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CandidateStats();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
