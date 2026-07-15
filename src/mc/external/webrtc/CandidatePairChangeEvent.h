#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct CandidatePairChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>   mUnk3cb8a9;
    ::ll::UntypedStorage<8, 1064> mUnkc4ddb0;
    ::ll::UntypedStorage<8, 8>    mUnk45c493;
    ::ll::UntypedStorage<8, 32>   mUnk15b84e;
    ::ll::UntypedStorage<8, 8>    mUnkd75471;
    // NOLINTEND

public:
    // prevent constructor by default
    CandidatePairChangeEvent& operator=(CandidatePairChangeEvent const&);
    CandidatePairChangeEvent(CandidatePairChangeEvent const&);
    CandidatePairChangeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CandidatePairChangeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
