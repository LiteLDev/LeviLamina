#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

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
    ClientboundDebugRendererPacket& operator=(ClientboundDebugRendererPacket const&) = delete;
    ClientboundDebugRendererPacket(ClientboundDebugRendererPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@ClientboundDebugRendererPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ClientboundDebugRendererPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ClientboundDebugRendererPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ClientboundDebugRendererPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1ClientboundDebugRendererPacket@@UEAA@XZ
    MCVAPI ~ClientboundDebugRendererPacket();

    // symbol:
    // ??0ClientboundDebugRendererPacket@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVColor@mce@@AEBVVec3@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@2@@Z
    MCAPI
    ClientboundDebugRendererPacket(std::string, class mce::Color const&, class Vec3 const&, std::chrono::milliseconds);

    // symbol: ??0ClientboundDebugRendererPacket@@QEAA@W4Type@0@@Z
    MCAPI ClientboundDebugRendererPacket(::ClientboundDebugRendererPacket::Type);

    // symbol: ??0ClientboundDebugRendererPacket@@QEAA@XZ
    MCAPI ClientboundDebugRendererPacket();

    // NOLINTEND
};
