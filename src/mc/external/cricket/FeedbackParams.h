#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class FeedbackParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk897465;
    // NOLINTEND

public:
    // prevent constructor by default
    FeedbackParams& operator=(FeedbackParams const&);
    FeedbackParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeedbackParams(::cricket::FeedbackParams const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::FeedbackParams const&);
    // NOLINTEND
};

} // namespace cricket
