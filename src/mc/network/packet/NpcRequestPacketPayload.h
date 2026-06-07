#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"

// auto generated forward declare list
// clang-format off
class NpcRequestPacket;
// clang-format on

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
    NpcRequestPacketPayload& operator=(NpcRequestPacketPayload const&);
    NpcRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NpcRequestPacketPayload(::NpcRequestPacketPayload const&);

#ifdef LL_PLAT_C
    MCAPI NpcRequestPacketPayload(::ActorRuntimeID id, ::std::string const& newActions);

    MCAPI NpcRequestPacketPayload(::ActorRuntimeID id, int actionIndex, ::std::string const& sceneName);

    MCAPI NpcRequestPacketPayload(
        ::ActorRuntimeID                       id,
        ::NpcRequestPacketPayload::RequestType type,
        ::std::string const&                   sceneName
    );
#endif

    MCFOLD ::std::string const& getInteractText() const;

    MCFOLD ::std::string const& getNpcName() const;

    MCFOLD ::std::string const& getSceneName() const;

    MCFOLD int getSkin() const;

    MCAPI ::NpcRequestPacketPayload& operator=(::NpcRequestPacketPayload&&);

    MCAPI ~NpcRequestPacketPayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::NpcRequestPacket requestSetInteractText(::ActorRuntimeID id, ::std::string text);

    MCAPI static ::NpcRequestPacket requestSetName(::ActorRuntimeID id, ::std::string name);

    MCAPI static ::NpcRequestPacket requestSetSkin(::ActorRuntimeID id, int skin);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NpcRequestPacketPayload const&);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ActorRuntimeID id, ::std::string const& newActions);

    MCAPI void* $ctor(::ActorRuntimeID id, int actionIndex, ::std::string const& sceneName);

    MCAPI void* $ctor(::ActorRuntimeID id, ::NpcRequestPacketPayload::RequestType type, ::std::string const& sceneName);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
