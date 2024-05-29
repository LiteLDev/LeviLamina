#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/BaseGameVersion.h"
#include "mc/world/level/PackInstanceId.h"
#include "mc/world/level/storage/ExperimentStorage.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ResourcePackStackPacket : public ::Packet {
public:
    std::vector<PackInstanceId> mAddOnIdsAndVersions;
    std::vector<PackInstanceId> mTexturePackIdsAndVersions;
    BaseGameVersion             mBaseGameVersion;
    bool                        mTexturePackRequired;
    ExperimentStorage           mExperiments;
    bool                        mHasEditorPacks; // Added in version 1.20.80, the order is not fully confirmed yet.

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

    // vIndex: 4, symbol: ?write@ResourcePackStackPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ResourcePackStackPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ResourcePackStackPacket@@QEAA@XZ
    MCAPI ResourcePackStackPacket();

    // symbol:
    // ??0ResourcePackStackPacket@@QEAA@V?$vector@UPackInstanceId@@V?$allocator@UPackInstanceId@@@std@@@std@@0AEBVBaseGameVersion@@_NAEBVExperiments@@2@Z
    MCAPI ResourcePackStackPacket(
        std::vector<struct PackInstanceId>,
        std::vector<struct PackInstanceId>,
        class BaseGameVersion const&,
        bool,
        class Experiments const&,
        bool
    );

    // NOLINTEND
};
