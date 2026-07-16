#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class CandidateStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 528> mUnk43cc54;
    ::ll::UntypedStorage<8, 32>  mUnkc3dc12;
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

} // namespace webrtc
