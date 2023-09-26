#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/LabTableReactionType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LabTablePacket : public ::Packet {
public:
    // LabTablePacket inner types define
    enum class Type {};

public:
    // prevent constructor by default
    LabTablePacket& operator=(LabTablePacket const&);
    LabTablePacket(LabTablePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@LabTablePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@LabTablePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@LabTablePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@LabTablePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1LabTablePacket@@UEAA@XZ
    MCVAPI ~LabTablePacket();

    // symbol: ??0LabTablePacket@@QEAA@XZ
    MCAPI LabTablePacket();

    // symbol: ??0LabTablePacket@@QEAA@AEBVBlockPos@@W4LabTableReactionType@@@Z
    MCAPI LabTablePacket(class BlockPos const&, ::LabTableReactionType);

    // symbol: ??0LabTablePacket@@QEAA@W4Type@0@AEBVBlockPos@@@Z
    MCAPI LabTablePacket(::LabTablePacket::Type, class BlockPos const&);

    // NOLINTEND
};
