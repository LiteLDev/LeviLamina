#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/LabTableReactionType.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/LabTableReactionType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LabTablePacket : public ::Packet {
public:
    // LabTablePacket inner types define
    enum class Type : uchar {
        StartCombine  = 0x0,
        StartReaction = 0x1,
        Reset         = 0x2,
    };

public:
    Type                 mType;     // this+0x30
    BlockPos             mPos;      // this+0x34
    LabTableReactionType mReaction; // this+0x40

    // prevent constructor by default
    LabTablePacket& operator=(LabTablePacket const&);
    LabTablePacket(LabTablePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LabTablePacket@@UEAA@XZ
    virtual ~LabTablePacket();

    // vIndex: 1, symbol: ?getId@LabTablePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@LabTablePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@LabTablePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@LabTablePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0LabTablePacket@@QEAA@XZ
    MCAPI LabTablePacket();

    // symbol: ??0LabTablePacket@@QEAA@AEBVBlockPos@@W4LabTableReactionType@@@Z
    MCAPI LabTablePacket(class BlockPos const& pos, ::LabTableReactionType reaction);

    // symbol: ??0LabTablePacket@@QEAA@W4Type@0@AEBVBlockPos@@@Z
    MCAPI LabTablePacket(::LabTablePacket::Type type, class BlockPos const& pos);

    // NOLINTEND
};
