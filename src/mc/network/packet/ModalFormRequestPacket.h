#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ModalFormRequestPacket : public ::Packet {
public:
    uint        mFormId;   // this+0x30
    std::string mFormJSON; // this+0x38

    // prevent constructor by default
    ModalFormRequestPacket& operator=(ModalFormRequestPacket const&);
    ModalFormRequestPacket(ModalFormRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ModalFormRequestPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ModalFormRequestPacket();

    MCAPI ModalFormRequestPacket(uint formId, std::string const& formJSON);

    // NOLINTEND
};
