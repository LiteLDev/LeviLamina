#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class SimulcastDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd466b0;
    ::ll::UntypedStorage<8, 24> mUnk6ef00b;
    // NOLINTEND

public:
    // prevent constructor by default
    SimulcastDescription(SimulcastDescription const&);
    SimulcastDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool empty() const;

    MCNAPI ::webrtc::SimulcastDescription& operator=(::webrtc::SimulcastDescription const&);

    MCNAPI ~SimulcastDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
