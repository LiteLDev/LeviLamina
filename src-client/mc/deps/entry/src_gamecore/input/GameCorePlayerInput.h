#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/XsapiHandle.h"
#include "mc/deps/entry/src_gamecore/input/PlayerInputConnectionState.h"

// auto generated forward declare list
// clang-format off
class GameControllerHandler_GameCore;
class GameCoreGamepadSupport;
class GameCoreKeyboardSupport;
class GameCoreMouseSupport;
class GameCoreTouchSupport;
namespace GameInput::v2 { struct IGameInputDevice; }
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool removeHardwareDeviceMapping(::APP_LOCAL_DEVICE_ID const& deviceId);

    MCAPI bool tryAddHardwareDeviceMapping(::GameInput::v2::IGameInputDevice* device);

    MCAPI void update(
        int const&                        gamePadId,
        ::GameControllerHandler_GameCore& handler,
        ::std::unique_ptr<
            ::GameInput::v2::IGameInput,
            ::Bedrock::ComAdapter<::GameInput::v2::IGameInput>::Deleter> const& gameInput
    );

    MCAPI ~GameCorePlayerInput();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
