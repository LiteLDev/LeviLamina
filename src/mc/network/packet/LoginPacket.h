#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/ConnectionRequest.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LoginPacket : public ::Packet {
public:
    int                                mClientNetworkVersion; // this+0x30
    std::unique_ptr<ConnectionRequest> mConnectionRequest;    // this+0x38

    // prevent constructor by default
    LoginPacket& operator=(LoginPacket const&);
    LoginPacket(LoginPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 6
    virtual bool disallowBatching() const;

    // vIndex: 7
    virtual bool isValid() const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI LoginPacket();

    // NOLINTEND
};
