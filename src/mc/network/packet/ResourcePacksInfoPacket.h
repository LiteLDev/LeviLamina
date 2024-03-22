#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/PacksInfoData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ResourcePacksInfoPacket : public ::Packet {
public:
    PacksInfoData                                    mData;
    std::vector<std::pair<std::string, std::string>> mCDNUrls;

    // prevent constructor by default
    ResourcePacksInfoPacket& operator=(ResourcePacksInfoPacket const&);
    ResourcePacksInfoPacket(ResourcePacksInfoPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ResourcePacksInfoPacket@@UEAA@XZ
    virtual ~ResourcePacksInfoPacket();

    // vIndex: 1, symbol: ?getId@ResourcePacksInfoPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ResourcePacksInfoPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ResourcePacksInfoPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ResourcePacksInfoPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ResourcePacksInfoPacket@@QEAA@XZ
    MCAPI ResourcePacksInfoPacket();

    // symbol:
    // ??0ResourcePacksInfoPacket@@QEAA@_NAEAV?$vector@UPackInfoData@@V?$allocator@UPackInfoData@@@std@@@std@@10$$QEAV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@2@0@Z
    MCAPI ResourcePacksInfoPacket(
        bool,
        std::vector<struct PackInfoData>&,
        std::vector<struct PackInfoData>&,
        bool,
        std::vector<std::pair<std::string, std::string>>&&,
        bool
    );

    // NOLINTEND
};
