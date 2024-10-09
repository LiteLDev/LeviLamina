#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class ShowCreditsPacket : public ::Packet {
public:
    // ShowCreditsPacket inner types define
    enum class CreditsState : int {
        Start    = 0x0,
        Finished = 0x1,
    };

public:
    ActorRuntimeID mPlayerID;     // this+0x30
    CreditsState   mCreditsState; // this+0x38

    // prevent constructor by default
    ShowCreditsPacket& operator=(ShowCreditsPacket const&);
    ShowCreditsPacket(ShowCreditsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShowCreditsPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ShowCreditsPacket();

    MCAPI ShowCreditsPacket(class ActorRuntimeID playerID, ::ShowCreditsPacket::CreditsState creditsState);

    // NOLINTEND
};
