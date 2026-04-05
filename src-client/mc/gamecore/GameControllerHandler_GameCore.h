#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/threading/XTaskQueuePort.h"
#include "mc/deps/core/threading/XTaskQueueRegistrationToken.h"
#include "mc/external/game_input/GameInputDeviceStatus.h"
#include "mc/input/GameControllerHandler.h"
#include "mc/platform/Result.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class GameCorePlayerInput;
class HIDController;
struct XTaskQueueObject;
namespace GameInput::v2 { struct GameInputDeviceInfo; }
namespace GameInput::v2 { struct IGameInputDevice; }
// clang-format on

class GameControllerHandler_GameCore : public ::GameControllerHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                              mDeviceStatusChangedToken;
    ::ll::TypedStorage<8, 8, ::XTaskQueueRegistrationToken>       mUserDeviceAssociationChangedToken;
    ::ll::TypedStorage<8, 8, ::XTaskQueueRegistrationToken>       mTaskSubmittedCallbackToken;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::HIDController>> mHIDController;
    ::ll::TypedStorage<2, 2, short>                               mScreenWidth;
    ::ll::TypedStorage<2, 2, short>                               mScreenHeight;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::GameInput::v2::IGameInput, ::Bedrock::ComAdapter<::GameInput::v2::IGameInput>::Deleter>>
                                                                      mGameInput;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>            mPlayerInputsLock;
    ::ll::TypedStorage<8, 16, ::std::map<int, ::GameCorePlayerInput>> mPlayerInputs;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                           mTaskGroup;
    ::ll::TypedStorage<8, 8, ::XTaskQueueObject*>                     mTaskQueue;
    // NOLINTEND

public:
    // prevent constructor by default
    GameControllerHandler_GameCore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameControllerHandler_GameCore() /*override*/;

    virtual void refresh() /*override*/;

    virtual float normalizeAxis(float raw, float deadzone) /*override*/;

    virtual void normalizeAxes(float& ioX, float& ioY, float deadzone) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameControllerHandler_GameCore(
        ::std::shared_ptr<::HIDController> const& hidController,
        short                                     screenWidth,
        short                                     screenHeight
    );

    MCAPI void _onDeviceStatusChanged(
        ::GameInput::v2::IGameInputDevice*     device,
        ::GameInput::v2::GameInputDeviceStatus currentStatus
    );

    MCAPI ::Bedrock::Result<void> initialize();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string _generateGameInputKindString(::GameInput::v2::GameInputDeviceInfo const& deviceInfo);

    MCAPI static void _onDeviceStatusChangedCallback(
        uint64,
        void*                              context,
        ::GameInput::v2::IGameInputDevice* device,
        uint64,
        ::GameInput::v2::GameInputDeviceStatus currentStatus,
        ::GameInput::v2::GameInputDeviceStatus
    );

    MCAPI static void _taskSubmittedCallback(void* context, ::XTaskQueueObject* taskQueue, ::XTaskQueuePort port);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::HIDController> const& hidController, short screenWidth, short screenHeight);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $refresh();

    MCAPI float $normalizeAxis(float raw, float deadzone);

    MCAPI void $normalizeAxes(float& ioX, float& ioY, float deadzone);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
