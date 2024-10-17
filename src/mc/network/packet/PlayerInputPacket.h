#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec2.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class PlayerInputPacket : public ::Packet {
public:
    Vec2 mMov;        // this+0x30
    bool mIsJumping;  // this+0x38
    bool mIsSneaking; // this+0x39

    // prevent constructor by default
    PlayerInputPacket& operator=(PlayerInputPacket const&);
    PlayerInputPacket(PlayerInputPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerInputPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PlayerInputPacket();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
