#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class SimpleEventPacket : public ::Packet {
public:
    // SimpleEventPacket inner types define
    enum class Subtype {};

public:
    // prevent constructor by default
    SimpleEventPacket& operator=(SimpleEventPacket const&);
    SimpleEventPacket(SimpleEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimpleEventPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SimpleEventPacket();

    MCAPI explicit SimpleEventPacket(::SimpleEventPacket::Subtype const& st);

    MCAPI ::SimpleEventPacket::Subtype const& getSubtype() const;

    // NOLINTEND
};
