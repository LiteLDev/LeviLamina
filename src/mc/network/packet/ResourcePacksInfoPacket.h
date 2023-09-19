#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ResourcePacksInfoPacket : public ::Packet {
public:
    // prevent constructor by default
    ResourcePacksInfoPacket& operator=(ResourcePacksInfoPacket const&);
    ResourcePacksInfoPacket(ResourcePacksInfoPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@ResourcePacksInfoPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ResourcePacksInfoPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ResourcePacksInfoPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ResourcePacksInfoPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1ResourcePacksInfoPacket@@UEAA@XZ
    MCVAPI ~ResourcePacksInfoPacket();

    // symbol:
    // ??0ResourcePacksInfoPacket@@QEAA@_NAEAV?$vector@UPackInfoData@@V?$allocator@UPackInfoData@@@std@@@std@@10@Z
    MCAPI ResourcePacksInfoPacket(bool, std::vector<struct PackInfoData>&, std::vector<struct PackInfoData>&, bool);

    // symbol: ??0ResourcePacksInfoPacket@@QEAA@XZ
    MCAPI ResourcePacksInfoPacket();

    // NOLINTEND
};
