#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"


// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(
        std::string               text,
        class mce::Color const&   color,
        class Vec3 const&         position,
        std::chrono::milliseconds duration
    );

    MCAPI void* ctor$(::ClientboundDebugRendererPacket::Type type);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
