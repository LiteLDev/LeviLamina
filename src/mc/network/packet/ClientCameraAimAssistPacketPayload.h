#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientCameraAimAssistPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk288b0a;
    ::ll::UntypedStorage<1, 1>  mUnkb6032d;
    ::ll::UntypedStorage<1, 1>  mUnk829b92;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientCameraAimAssistPacketPayload& operator=(ClientCameraAimAssistPacketPayload const&);
    ClientCameraAimAssistPacketPayload(ClientCameraAimAssistPacketPayload const&);
    ClientCameraAimAssistPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ClientCameraAimAssistPacketPayload& operator=(::ClientCameraAimAssistPacketPayload&&);

    MCNAPI ~ClientCameraAimAssistPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
