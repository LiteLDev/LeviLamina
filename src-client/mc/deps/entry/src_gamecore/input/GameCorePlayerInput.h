#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/XsapiHandle.h"
#include "mc/deps/entry/src_gamecore/input/PlayerInputConnectionState.h"

// auto generated forward declare list
// clang-format off
class GameCoreGamepadSupport;
class GameCoreKeyboardSupport;
class GameCoreMouseSupport;
class GameCoreTouchSupport;
// clang-format on

class GameCorePlayerInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameCoreGamepadSupport>>  mGamepadSupport;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameCoreKeyboardSupport>> mKeyboardSupport;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameCoreMouseSupport>>    mMouseSupport;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameCoreTouchSupport>>    mTouchSupport;
    ::ll::TypedStorage<8, 136, ::Social::XsapiHandle<::XUser*>>            mMappedUser;
    ::ll::TypedStorage<4, 4, ::PlayerInputConnectionState>                 mConnectionState;
    // NOLINTEND
};
