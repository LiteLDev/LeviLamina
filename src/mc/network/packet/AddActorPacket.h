#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/AddActorBasePacket.h"

class AddActorPacket : public ::AddActorBasePacket {
public:
    // prevent constructor by default
    AddActorPacket& operator=(AddActorPacket const&);
    AddActorPacket(AddActorPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddActorPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AddActorPacket();

    MCAPI explicit AddActorPacket(class Actor& e);

    // NOLINTEND
};
