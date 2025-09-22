#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"

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
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                       mId;
    ::ll::TypedStorage<1, 1, ::NpcRequestPacketPayload::RequestType> mType;
    ::ll::TypedStorage<8, 32, ::std::string>                         mActions;
    ::ll::TypedStorage<1, 1, uchar>                                  mActionIndex;
    ::ll::TypedStorage<8, 32, ::std::string>                         mSceneName;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcRequestPacketPayload(NpcRequestPacketPayload const&);
    NpcRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::NpcRequestPacketPayload& operator=(::NpcRequestPacketPayload const&);

    MCAPI ::NpcRequestPacketPayload& operator=(::NpcRequestPacketPayload&&);

    MCAPI ~NpcRequestPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
