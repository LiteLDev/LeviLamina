#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab {

class PlayFabApiSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk74e9ea;
    ::ll::UntypedStorage<8, 32> mUnkfa697b;
    ::ll::UntypedStorage<8, 32> mUnk328455;
    ::ll::UntypedStorage<8, 32> mUnk436030;
    ::ll::UntypedStorage<8, 32> mUnkee8595;
    ::ll::UntypedStorage<1, 1>  mUnkc1448e;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabApiSettings& operator=(PlayFabApiSettings const&);
    PlayFabApiSettings(PlayFabApiSettings const&);
    PlayFabApiSettings();
};

} // namespace PlayFab
