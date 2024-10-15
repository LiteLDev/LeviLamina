#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class MovePlayerPacket : public ::Packet {
public:
    // prevent constructor by default
    MovePlayerPacket& operator=(MovePlayerPacket const&);
    MovePlayerPacket(MovePlayerPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MovePlayerPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7
    virtual bool isValid() const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI MovePlayerPacket();

    MCAPI MovePlayerPacket(class Player const& player, class Vec3 const& pos);

    MCAPI MovePlayerPacket(
        class Player const&                         player,
        ::PlayerPositionModeComponent::PositionMode resetPosition,
        int                                         cause,
        int                                         sourceEntityType
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class Player const&                         player,
        ::PlayerPositionModeComponent::PositionMode resetPosition,
        int                                         cause,
        int                                         sourceEntityType
    );

    MCAPI void* ctor$(class Player const& player, class Vec3 const& pos);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI bool isValid$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
