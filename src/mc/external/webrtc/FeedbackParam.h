#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FeedbackParam {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd6f611;
    ::ll::UntypedStorage<8, 32> mUnk73c42d;
    // NOLINTEND

public:
    // prevent constructor by default
    FeedbackParam& operator=(FeedbackParam const&);
    FeedbackParam(FeedbackParam const&);
    FeedbackParam();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::webrtc::FeedbackParam const& other) const;

    MCNAPI ~FeedbackParam();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
