#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class NpcDialoguePacket : public ::Packet {
public:
    // NpcDialoguePacket inner types define
    enum class NpcDialogueActionType {};

public:
    // prevent constructor by default
    NpcDialoguePacket& operator=(NpcDialoguePacket const&);
    NpcDialoguePacket(NpcDialoguePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NpcDialoguePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI NpcDialoguePacket();

    MCAPI explicit NpcDialoguePacket(struct ActorUniqueID);

    MCAPI static bool
    initializePacket(class NpcDialoguePacket&, class NpcDialogueStorage const* storage, std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Bedrock::Result<void> _verifyJson(std::string const&) const;

    // NOLINTEND
};
