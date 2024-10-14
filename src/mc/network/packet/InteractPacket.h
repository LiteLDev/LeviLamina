#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class InteractPacket : public ::Packet {
public:
    // InteractPacket inner types define
    enum class Action : uchar {
        Invalid        = 0x0,
        RightClick     = 0x1,
        LeftClick      = 0x2,
        StopRiding     = 0x3,
        InteractUpdate = 0x4, // MouseOver
        NpcOpen        = 0x5,
        OpenInventory  = 0x6,
    };

public:
    InteractPacket::Action mAction;   // this+0x30
    ActorRuntimeID         mTargetId; // this+0x38
    Vec3                   mPos;      // this+0x40

    // prevent constructor by default
    InteractPacket& operator=(InteractPacket const&);
    InteractPacket(InteractPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InteractPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI InteractPacket();

    MCAPI InteractPacket(::InteractPacket::Action action, class ActorRuntimeID targetId, class Vec3 const& pos);

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
