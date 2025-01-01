#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class NpcDialogueStorage;
class ReadOnlyBinaryStream;
struct ActorUniqueID;
// clang-format on

class NpcDialoguePacket : public ::Packet {
public:
    // NpcDialoguePacket inner types define
    enum class NpcDialogueActionType : int {
        Open  = 0,
        Close = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                            mNpcId;
    ::ll::TypedStorage<4, 4, ::NpcDialoguePacket::NpcDialogueActionType> mNpcDialogueActionType;
    ::ll::TypedStorage<8, 32, ::std::string>                             mDialogue;
    ::ll::TypedStorage<8, 32, ::std::string>                             mSceneName;
    ::ll::TypedStorage<8, 32, ::std::string>                             mNpcName;
    ::ll::TypedStorage<8, 32, ::std::string>                             mActionJSON;
    // NOLINTEND

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
    virtual ~NpcDialoguePacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NpcDialoguePacket();

    MCAPI explicit NpcDialoguePacket(::ActorUniqueID npcID);

    MCAPI ::Bedrock::Result<void> _verifyJson(::std::string const& actionJSON) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool initializePacket(
        ::NpcDialoguePacket&        outPacket,
        ::NpcDialogueStorage const* storage,
        ::std::string const&        sceneName
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64 const& MAX_NUM_ACTIONS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ActorUniqueID npcID);
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
