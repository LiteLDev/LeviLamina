#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class EmotePacket : public ::Packet {
public:
    enum class Flags : uchar {
        Invalid    = 0x0,
        ServerSide = 0x1,
        MuteChat   = 0x2,
    };

    ActorRuntimeID mRuntimeId;  // this+0x30
    std::string    mPieceId;    // this+0x38
    std::string    mXuid;       // this+0x58
    std::string    mPlatformId; // this+0x78
    Flags          mFlags;      // this+0x98

    // prevent constructor by default
    EmotePacket& operator=(EmotePacket const&);
    EmotePacket(EmotePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EmotePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI EmotePacket();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
