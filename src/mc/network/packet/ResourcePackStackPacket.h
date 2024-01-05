#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ResourcePackStackPacket : public ::Packet {
public:
    // prevent constructor by default
    ResourcePackStackPacket& operator=(ResourcePackStackPacket const&);
    ResourcePackStackPacket(ResourcePackStackPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ResourcePackStackPacket@@UEAA@XZ
    virtual ~ResourcePackStackPacket();

    // vIndex: 1, symbol: ?getId@ResourcePackStackPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ResourcePackStackPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ResourcePackStackPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@ResourcePackStackPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ResourcePackStackPacket@@QEAA@XZ
    MCAPI ResourcePackStackPacket();

    // symbol:
    // ??0ResourcePackStackPacket@@QEAA@V?$vector@UPackInstanceId@@V?$allocator@UPackInstanceId@@@std@@@std@@0AEBVBaseGameVersion@@_NAEBVExperiments@@@Z
    MCAPI
    ResourcePackStackPacket(std::vector<struct PackInstanceId> addOnIdsAndVersions, std::vector<struct PackInstanceId> texturePackIdsAndVersions, class BaseGameVersion const& baseGameVersion, bool texturePackRequired, class Experiments const&);

    // NOLINTEND
};
