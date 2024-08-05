#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/Color.h"
#include "mc/math/Vec3.h"


// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ClientboundDebugRendererPacket : public ::Packet {
public:
    // ClientboundDebugRendererPacket inner types define
    enum class Type : uint {
        Invalid            = 0x0,
        ClearDebugMarkers  = 0x1,
        AddDebugMarkerCube = 0x2,
    };

    struct DebugMarkerData {
        std::string               text;     // this+0x0
        Vec3                      position; // this+0x20
        mce::Color                color;    // this+0x2C
        std::chrono::milliseconds duration; // this+0x40
    };

public:
    ClientboundDebugRendererPacket::Type                           mType;            // this+0x30
    std::optional<ClientboundDebugRendererPacket::DebugMarkerData> mDebugMarkerData; // this+0x38

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
