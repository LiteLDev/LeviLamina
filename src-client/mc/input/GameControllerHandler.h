#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/interface/GameControllerButtonState.h"
#include "mc/deps/input/interface/GameControllerErrorType.h"

class GameControllerHandler {
public:
    // GameControllerHandler inner types define
    using InputButton = uint;

    using ButtonMap = ::std::unordered_map<uint, int>;

    using ButtonStateMap = ::std::unordered_map<uint, ::GameControllerButtonState>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, int>> mButtonMap;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>            mLeftTrigger;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>            mRightTrigger;
    ::ll::TypedStorage<8, 32, ::std::vector<bool>>             mLeftStickTouched;
    ::ll::TypedStorage<8, 32, ::std::vector<bool>>             mRightStickTouched;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unordered_map<uint, ::GameControllerButtonState>>> mButtonState;
    ::ll::TypedStorage<4, 16, uint[4]>            mInputProcessResult;
    ::ll::TypedStorage<8, 16, ::std::thread>      mPollingThread;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mJoinThreads;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameControllerHandler();

    virtual void refresh() = 0;

    virtual void refresh(bool isInGame);

    virtual void shutdown();

    virtual ::GameControllerErrorType checkPlatformSpecificControllerError();

    virtual float normalizeAxis(float raw, float deadzone);

    virtual void normalizeAxes(float& ioX, float& ioY, float deadzone) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameControllerHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $refresh(bool isInGame);

    MCFOLD void $shutdown();

    MCFOLD ::GameControllerErrorType $checkPlatformSpecificControllerError();

    MCFOLD float $normalizeAxis(float raw, float deadzone);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
