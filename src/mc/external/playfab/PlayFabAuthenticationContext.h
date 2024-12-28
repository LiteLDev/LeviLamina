#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab {

class PlayFabAuthenticationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk96fcec;
    ::ll::UntypedStorage<8, 32> mUnk987400;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabAuthenticationContext& operator=(PlayFabAuthenticationContext const&);
    PlayFabAuthenticationContext(PlayFabAuthenticationContext const&);
    PlayFabAuthenticationContext();
};

} // namespace PlayFab
