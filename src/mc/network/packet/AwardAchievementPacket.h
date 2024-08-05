#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AwardAchievementPacket : public ::Packet {
public:
    // prevent constructor by default
    AwardAchievementPacket& operator=(AwardAchievementPacket const&);
    AwardAchievementPacket(AwardAchievementPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AwardAchievementPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream&) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    MCAPI AwardAchievementPacket();

    MCAPI explicit AwardAchievementPacket(int);

    // NOLINTEND
};
