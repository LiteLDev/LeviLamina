#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/threading/XTaskQueueRegistrationToken.h"
#include "mc/input/GameControllerHandler.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class GameCorePlayerInput;
class HIDController;
struct XTaskQueueObject;
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameControllerHandler_GameCore() /*override*/ = default;

    virtual void refresh() /*override*/;

    virtual float normalizeAxis(float raw, float deadzone) /*override*/;

    virtual void normalizeAxes(float&, float&, float) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
