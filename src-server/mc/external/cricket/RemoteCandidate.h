#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/Candidate.h"

namespace cricket {

class RemoteCandidate : public ::cricket::Candidate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk672a92;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteCandidate& operator=(RemoteCandidate const&);
    RemoteCandidate(RemoteCandidate const&);
    RemoteCandidate();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RemoteCandidate();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
