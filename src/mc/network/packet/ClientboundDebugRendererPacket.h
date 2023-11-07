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
    // vIndex: 0, symbol: ??1ClientboundDebugRendererPacket@@UEAA@XZ
    virtual ~ClientboundDebugRendererPacket();

    // vIndex: 1, symbol: ?getId@ClientboundDebugRendererPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ClientboundDebugRendererPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ClientboundDebugRendererPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ClientboundDebugRendererPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0ClientboundDebugRendererPacket@@QEAA@XZ
    MCAPI ClientboundDebugRendererPacket();

    // symbol: ??0ClientboundDebugRendererPacket@@QEAA@W4Type@0@@Z
    MCAPI explicit ClientboundDebugRendererPacket(::ClientboundDebugRendererPacket::Type);

    // symbol:
    // ??0ClientboundDebugRendererPacket@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVColor@mce@@AEBVVec3@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@2@@Z
    MCAPI
    ClientboundDebugRendererPacket(std::string, class mce::Color const&, class Vec3 const&, std::chrono::milliseconds);

    // NOLINTEND
};
