#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab {

class OneDSEventsAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk717290;
    ::ll::UntypedStorage<8, 32> mUnk495b82;
    ::ll::UntypedStorage<8, 32> mUnk62a59a;
    ::ll::UntypedStorage<8, 32> mUnk6b0d30;
    ::ll::UntypedStorage<8, 32> mUnk12d8df;
    ::ll::UntypedStorage<8, 32> mUnkfa8a08;
    // NOLINTEND

public:
    // prevent constructor by default
    OneDSEventsAPI& operator=(OneDSEventsAPI const&);
    OneDSEventsAPI(OneDSEventsAPI const&);
    OneDSEventsAPI();
};

} // namespace PlayFab
