#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ToastRequestPacket : public ::Packet {
public:
    std::string mTitle;   // this+0x30
    std::string mContent; // this+0x50

    // prevent constructor by default
    ToastRequestPacket& operator=(ToastRequestPacket const&);
    ToastRequestPacket(ToastRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ToastRequestPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ToastRequestPacket();

    MCAPI ToastRequestPacket(std::string const& title, std::string const& content);

    // NOLINTEND
};
