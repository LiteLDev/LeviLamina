#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"
#include "mc/network/packet/ModalFormCancelReason.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class ModalFormResponsePacket : public ::Packet {
public:
    uint                                 mFormId;           // this+0x30
    std::optional<Json::Value>           mJSONResponse;     // this+0x38
    std::optional<ModalFormCancelReason> mFormCancelReason; // this+0x50

    // prevent constructor by default
    ModalFormResponsePacket& operator=(ModalFormResponsePacket const&);
    ModalFormResponsePacket(ModalFormResponsePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ModalFormResponsePacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ModalFormResponsePacket();

    // NOLINTEND
};
