#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class EmoteListPacket : public ::Packet {
public:
    ActorRuntimeID         mRuntimeId;     // this+0x30
    std::vector<mce::UUID> mEmotePieceIds; // this+0x38

    // prevent constructor by default
    EmoteListPacket& operator=(EmoteListPacket const&);
    EmoteListPacket(EmoteListPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EmoteListPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI EmoteListPacket();

    MCAPI static int const MAX_EMOTE_PIECE_IDS;

    // NOLINTEND
};
