#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab {

class PlayFabEventPipelineSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka73b73;
    ::ll::UntypedStorage<8, 8>  mUnkb13226;
    ::ll::UntypedStorage<8, 8>  mUnk8a904b;
    ::ll::UntypedStorage<8, 8>  mUnkdc516a;
    ::ll::UntypedStorage<8, 8>  mUnkc97556;
    ::ll::UntypedStorage<8, 8>  mUnk1a367e;
    ::ll::UntypedStorage<8, 16> mUnk2b2d0b;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabEventPipelineSettings& operator=(PlayFabEventPipelineSettings const&);
    PlayFabEventPipelineSettings(PlayFabEventPipelineSettings const&);
    PlayFabEventPipelineSettings();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayFabEventPipelineSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace PlayFab
