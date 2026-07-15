#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/Candidate.h"

namespace webrtc {

class RemoteCandidate : public ::webrtc::Candidate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk80537e;
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

} // namespace webrtc
