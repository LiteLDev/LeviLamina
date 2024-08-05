#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class StructureTemplateDataRequestPacket : public ::Packet {
public:
    // prevent constructor by default
    StructureTemplateDataRequestPacket& operator=(StructureTemplateDataRequestPacket const&);
    StructureTemplateDataRequestPacket(StructureTemplateDataRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureTemplateDataRequestPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI StructureTemplateDataRequestPacket();

    // NOLINTEND
};
