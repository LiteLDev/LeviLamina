#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/PositionTrackingId.h"


// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class PositionTrackingDBServerBroadcastPacket : public ::Packet {
public:
    enum Action : uchar {
        Update   = 0x0,
        Destroy  = 0x1,
        NotFound = 0x2,
    };

public:
    Action             mAction; // this+0x30
    PositionTrackingId mId;     // this+0x34
    CompoundTag        mData;   // this+0x38

    // prevent constructor by default
    PositionTrackingDBServerBroadcastPacket& operator=(PositionTrackingDBServerBroadcastPacket const&);
    PositionTrackingDBServerBroadcastPacket(PositionTrackingDBServerBroadcastPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PositionTrackingDBServerBroadcastPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PositionTrackingDBServerBroadcastPacket();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
