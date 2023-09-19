#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CameraInstructionPacket : public ::Packet {
public:
    // prevent constructor by default
    CameraInstructionPacket& operator=(CameraInstructionPacket const&);
    CameraInstructionPacket(CameraInstructionPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@CameraInstructionPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CameraInstructionPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@CameraInstructionPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 4, symbol:
    // ?read@CameraInstructionPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);

    // vIndex: 7, symbol:
    // ?_read@CameraInstructionPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1CameraInstructionPacket@@UEAA@XZ
    MCVAPI ~CameraInstructionPacket();

    // symbol: ??0CameraInstructionPacket@@QEAA@XZ
    MCAPI CameraInstructionPacket();

    // symbol: ??0CameraInstructionPacket@@QEAA@AEBUCameraInstruction@@@Z
    MCAPI explicit CameraInstructionPacket(struct CameraInstruction const&);

    // NOLINTEND
};
