#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class PlayerAuthInputPacket : public ::Packet {
public:
    // PlayerAuthInputPacket inner types define
    enum class InputData {};

public:
    // prevent constructor by default
    PlayerAuthInputPacket& operator=(PlayerAuthInputPacket const&);
    PlayerAuthInputPacket(PlayerAuthInputPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerAuthInputPacket();

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

    MCAPI PlayerAuthInputPacket();

    MCAPI PlayerAuthInputPacket(class PlayerAuthInputPacket&& rhs);

    MCAPI bool getInput(::PlayerAuthInputPacket::InputData point) const;

    MCAPI class PlayerAuthInputPacket& operator=(class PlayerAuthInputPacket&& rhs);

    MCAPI struct PlayerActionComponent readIntoComponent() const;

    MCAPI class PlayerAuthInputPacket takeCopy() const;

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

    MCAPI bool isValid$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
