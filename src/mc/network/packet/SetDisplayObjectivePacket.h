#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/ObjectiveSortOrder.h"
#include "mc/network/packet/Packet.h"

class SetDisplayObjectivePacket : public ::Packet {
public:
    // prevent constructor by default
    SetDisplayObjectivePacket& operator=(SetDisplayObjectivePacket const&);
    SetDisplayObjectivePacket(SetDisplayObjectivePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetDisplayObjectivePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetDisplayObjectivePacket();

    MCAPI SetDisplayObjectivePacket(
        std::string const&   displaySlotName,
        std::string const&   objectiveName,
        std::string const&   dispalyName,
        std::string const&   criteriaName,
        ::ObjectiveSortOrder order
    );

    // NOLINTEND
};
