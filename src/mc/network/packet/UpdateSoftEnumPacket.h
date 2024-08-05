#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/SoftEnumUpdateType.h"
#include "mc/network/packet/Packet.h"

class UpdateSoftEnumPacket : public ::Packet {
public:
    // prevent constructor by default
    UpdateSoftEnumPacket& operator=(UpdateSoftEnumPacket const&);
    UpdateSoftEnumPacket(UpdateSoftEnumPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateSoftEnumPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdateSoftEnumPacket();

    MCAPI UpdateSoftEnumPacket(
        ::SoftEnumUpdateType            type,
        std::string const&              enumName,
        std::vector<std::string> const& values
    );

    // NOLINTEND
};
