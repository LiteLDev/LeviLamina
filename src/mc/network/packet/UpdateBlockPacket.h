#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/BlockUpdateFlag.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdateBlockPacket : public ::Packet {
public:
    enum class BlockLayer : uint {
        Standard = 0,
        Extra    = 1,
        Count    = 2,
    };

    static const bool          SHARE_WITH_HANDLER = true; // constant
    class NetworkBlockPosition mPos;                      // this+0x30
    BlockLayer                 mLayer;                    // this+0x3C
    BlockUpdateFlag            mUpdateFlags;              // this+0x40
    uint                       mRuntimeId;                // this+0x44

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UpdateBlockPacket@@UEAA@XZ
    virtual ~UpdateBlockPacket();

    // vIndex: 1, symbol: ?getId@UpdateBlockPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UpdateBlockPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@UpdateBlockPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@UpdateBlockPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0UpdateBlockPacket@@QEAA@XZ
    MCAPI UpdateBlockPacket();

    // symbol: ??0UpdateBlockPacket@@QEAA@AEBVBlockPos@@IIE@Z
    MCAPI UpdateBlockPacket(class BlockPos const& pos, uint layer, uint runtimeId, uchar updateFlags);

    // NOLINTEND
};
