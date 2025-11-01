#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct IceCandidateErrorEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkda3bbc;
    ::ll::UntypedStorage<4, 4> mUnkba9c22;
    ::ll::UntypedStorage<8, 32> mUnk109033;
    ::ll::UntypedStorage<4, 4> mUnkb993c9;
    ::ll::UntypedStorage<8, 32> mUnk790540;
    // NOLINTEND

public:
    // prevent constructor by default
    IceCandidateErrorEvent& operator=(IceCandidateErrorEvent const&);
    IceCandidateErrorEvent(IceCandidateErrorEvent const&);
    IceCandidateErrorEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~IceCandidateErrorEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
