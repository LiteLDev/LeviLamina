#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class BookEditPacket : public ::Packet {
public:
    // prevent constructor by default
    BookEditPacket& operator=(BookEditPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BookEditPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI BookEditPacket();

    MCAPI BookEditPacket(class BookEditPacket const&);

    MCAPI struct PageContent getPage() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Bedrock::Result<void> _readPage(class ReadOnlyBinaryStream& stream);

    MCAPI void _writePage(class BinaryStream& stream) const;

    // NOLINTEND
};
