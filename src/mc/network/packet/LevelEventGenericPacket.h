#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/events/LevelEvent.h"
#include "mc/network/packet/Packet.h"

class LevelEventGenericPacket : public ::Packet {
public:
    int                          mEventId; // this+0x30
    std::unique_ptr<CompoundTag> mData;    // this+0x38

    // prevent constructor by default
    LevelEventGenericPacket& operator=(LevelEventGenericPacket const&);
    LevelEventGenericPacket(LevelEventGenericPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelEventGenericPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI LevelEventGenericPacket();

    MCAPI LevelEventGenericPacket(::LevelEvent eventId, class CompoundTag const& data);

    // NOLINTEND
};
