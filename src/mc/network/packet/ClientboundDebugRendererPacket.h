#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ClientboundDebugRendererPacket : public ::Packet {
public:
    // ClientboundDebugRendererPacket inner types define
    enum class Type {};

public:
    // prevent constructor by default
    ClientboundDebugRendererPacket& operator=(ClientboundDebugRendererPacket const&);
    ClientboundDebugRendererPacket(ClientboundDebugRendererPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientboundDebugRendererPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ClientboundDebugRendererPacket();

    MCAPI explicit ClientboundDebugRendererPacket(::ClientboundDebugRendererPacket::Type type);

    MCAPI ClientboundDebugRendererPacket(
        std::string               text,
        class mce::Color const&   color,
        class Vec3 const&         position,
        std::chrono::milliseconds duration
    );

    // NOLINTEND
};
