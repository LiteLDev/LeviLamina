#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ClientCameraAimAssistPacketAction.h"

struct ClientCameraAimAssistPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                      mCameraPresetId;
    ::ll::TypedStorage<1, 1, ::ClientCameraAimAssistPacketAction> mAction;
    ::ll::TypedStorage<1, 1, bool>                                mAllowAimAssist;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientCameraAimAssistPacketPayload(ClientCameraAimAssistPacketPayload const&);
    ClientCameraAimAssistPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ClientCameraAimAssistPacketPayload& operator=(::ClientCameraAimAssistPacketPayload&&);

    MCAPI ::ClientCameraAimAssistPacketPayload& operator=(::ClientCameraAimAssistPacketPayload const&);

    MCAPI ~ClientCameraAimAssistPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
