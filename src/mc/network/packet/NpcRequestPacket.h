#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class NpcRequestPacket : public ::Packet {
public:
    // NpcRequestPacket inner types define
    enum class RequestType {};

public:
    // prevent constructor by default
    NpcRequestPacket& operator=(NpcRequestPacket const&);
    NpcRequestPacket(NpcRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NpcRequestPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI NpcRequestPacket();

    MCAPI std::string const& getInteractText() const;

    MCAPI std::string const& getNpcName() const;

    MCAPI std::string const& getSceneName() const;

    MCAPI int getSkin() const;

    MCAPI static class NpcRequestPacket requestSetInteractText(class ActorRuntimeID id, std::string text);

    MCAPI static class NpcRequestPacket requestSetName(class ActorRuntimeID id, std::string name);

    MCAPI static class NpcRequestPacket requestSetSkin(class ActorRuntimeID id, int skin);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI NpcRequestPacket(
        class ActorRuntimeID            id,
        ::NpcRequestPacket::RequestType type,
        std::string                     actions,
        uchar                           actionIndex
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void*
    ctor$(class ActorRuntimeID id, ::NpcRequestPacket::RequestType type, std::string actions, uchar actionIndex);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
