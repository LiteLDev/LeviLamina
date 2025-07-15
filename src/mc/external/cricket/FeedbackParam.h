#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class FeedbackParam {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1d6d90;
    ::ll::UntypedStorage<8, 32> mUnkbc5d1b;
    // NOLINTEND

public:
    // prevent constructor by default
    FeedbackParam& operator=(FeedbackParam const&);
    FeedbackParam(FeedbackParam const&);
    FeedbackParam();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::cricket::FeedbackParam const& other) const;

    MCNAPI ~FeedbackParam();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
