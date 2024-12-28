#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class NpcRequestPacket : public ::Packet {
public:
    // NpcRequestPacket inner types define
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
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                mId;
    ::ll::TypedStorage<1, 1, ::NpcRequestPacket::RequestType> mType;
    ::ll::TypedStorage<8, 32, ::std::string>                  mActions;
    ::ll::TypedStorage<1, 1, uchar>                           mActionIndex;
    ::ll::TypedStorage<8, 32, ::std::string>                  mSceneName;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcRequestPacket& operator=(NpcRequestPacket const&);
    NpcRequestPacket(NpcRequestPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~NpcRequestPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NpcRequestPacket();

    MCAPI NpcRequestPacket(
        ::ActorRuntimeID                id,
        ::NpcRequestPacket::RequestType type,
        ::std::string                   actions,
        uchar                           actionIndex
    );

    MCAPI ::std::string const& getInteractText() const;

    MCAPI ::std::string const& getNpcName() const;

    MCAPI ::std::string const& getSceneName() const;

    MCAPI int getSkin() const;
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
    MCAPI void* $ctor();

    MCAPI void*
    $ctor(::ActorRuntimeID id, ::NpcRequestPacket::RequestType type, ::std::string actions, uchar actionIndex);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
