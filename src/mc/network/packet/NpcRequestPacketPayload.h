#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NpcRequestPacketPayload {
public:
    // NpcRequestPacketPayload inner types define
    enum class RequestType : uchar {
        SetActions             = 0,
        ExecuteAction          = 1,
        ExecuteClosingCommands = 2,
        SetName                = 3,
        SetSkin                = 4,
        SetInteractText        = 5,
        ExecuteOpeningCommands = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk22a7d6;
    ::ll::UntypedStorage<1, 1>  mUnke62af5;
    ::ll::UntypedStorage<8, 32> mUnk7e9a5f;
    ::ll::UntypedStorage<1, 1>  mUnk45ff77;
    ::ll::UntypedStorage<8, 32> mUnk328665;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcRequestPacketPayload& operator=(NpcRequestPacketPayload const&);
    NpcRequestPacketPayload(NpcRequestPacketPayload const&);
    NpcRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::NpcRequestPacketPayload& operator=(::NpcRequestPacketPayload&&);

    MCNAPI ~NpcRequestPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
