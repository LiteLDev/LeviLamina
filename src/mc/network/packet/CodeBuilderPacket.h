#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CodeBuilderPacket : public ::Packet {
public:
    std::string mURL;                   // this+0x30
    bool        mShouldOpenCodeBuilder; // this+0x50

    // prevent constructor by default
    CodeBuilderPacket& operator=(CodeBuilderPacket const&);
    CodeBuilderPacket(CodeBuilderPacket const&);
    CodeBuilderPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CodeBuilderPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
