#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/interface/GameControllerButtonState.h"
#include "mc/deps/input/interface/GameControllerErrorType.h"

class GameControllerHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkbf0644;
    ::ll::UntypedStorage<8, 24> mUnkedf897;
    ::ll::UntypedStorage<8, 24> mUnk26b586;
    ::ll::UntypedStorage<8, 32> mUnkef31db;
    ::ll::UntypedStorage<8, 32> mUnkfa3a3f;
    ::ll::UntypedStorage<8, 24> mUnkb2bd1e;
    ::ll::UntypedStorage<4, 16> mUnkc39aef;
    ::ll::UntypedStorage<8, 16> mUnkdd3707;
    ::ll::UntypedStorage<1, 1>  mUnkfe6c7b;
    // NOLINTEND

public:
    // prevent constructor by default
    GameControllerHandler& operator=(GameControllerHandler const&);
    GameControllerHandler(GameControllerHandler const&);

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
    MCNAPI GameControllerHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $refresh(bool isInGame);

    MCNAPI void $shutdown();

    MCNAPI ::GameControllerErrorType $checkPlatformSpecificControllerError();

    MCNAPI float $normalizeAxis(float raw, float deadzone);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
