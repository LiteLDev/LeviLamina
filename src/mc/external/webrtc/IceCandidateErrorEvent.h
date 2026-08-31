#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct IceCandidateErrorEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbb7f31;
    ::ll::UntypedStorage<4, 4>  mUnk787d9e;
    ::ll::UntypedStorage<8, 32> mUnkf9a1b5;
    ::ll::UntypedStorage<4, 4>  mUnk8b9d76;
    ::ll::UntypedStorage<8, 32> mUnk265af0;
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

} // namespace webrtc
