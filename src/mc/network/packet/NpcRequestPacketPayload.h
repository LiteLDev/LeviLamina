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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    NpcRequestPacketPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI NpcRequestPacketPayload(::ActorRuntimeID id, ::std::string const& newActions);

    MCAPI NpcRequestPacketPayload(::ActorRuntimeID id, int actionIndex, ::std::string const& sceneName);

    MCAPI NpcRequestPacketPayload(
        ::ActorRuntimeID                       id,
        ::NpcRequestPacketPayload::RequestType type,
        ::std::string const&                   sceneName
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ActorRuntimeID id, ::std::string const& newActions);

    MCAPI void* $ctor(::ActorRuntimeID id, int actionIndex, ::std::string const& sceneName);

    MCAPI void* $ctor(::ActorRuntimeID id, ::NpcRequestPacketPayload::RequestType type, ::std::string const& sceneName);
#endif
    // NOLINTEND
};
