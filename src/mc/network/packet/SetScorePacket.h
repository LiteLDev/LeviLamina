#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/ScorePacketType.h"
#include "mc/network/packet/ScorePacketInfo.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/ScorePacketType.h"
#include "mc/platform/Result.h"

class SetScorePacket : public ::Packet {
public:
    ScorePacketType              mType;      // this+0x30
    std::vector<ScorePacketInfo> mScoreInfo; // this+0x38

    // prevent constructor by default
    SetScorePacket& operator=(SetScorePacket const&);
    SetScorePacket(SetScorePacket const&);
    SetScorePacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetScorePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI static class SetScorePacket change(std::vector<struct ScorePacketInfo> info);

    MCAPI static class SetScorePacket change(struct ScoreboardId const& id, class Objective const& objective);

    MCAPI static class SetScorePacket remove(struct ScoreboardId const& id, class Objective const& objective);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI SetScorePacket(::ScorePacketType type, struct ScoreboardId const& id, class Objective const& objective);

    // NOLINTEND
};
