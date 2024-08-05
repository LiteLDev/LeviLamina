#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/Difficulty.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetDifficultyPacket : public ::Packet {
public:
    // prevent constructor by default
    SetDifficultyPacket& operator=(SetDifficultyPacket const&);
    SetDifficultyPacket(SetDifficultyPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetDifficultyPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetDifficultyPacket();

    MCAPI explicit SetDifficultyPacket(::Difficulty difficulty);

    MCAPI ::Difficulty getDifficulty() const;

    // NOLINTEND
};
