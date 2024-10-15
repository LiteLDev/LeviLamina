#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/events/MinecraftEventing.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class AwardAchievementPacket : public ::Packet {
public:
    MinecraftEventing::AchievementIds mAchievementId;

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
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AwardAchievementPacket();

    MCAPI explicit AwardAchievementPacket(int achievementID);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(int achievementID);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
