#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/common/CameraInstruction.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CameraInstructionPacket : public ::Packet {
public:
    CameraInstruction mData;

    // prevent constructor by default
    CameraInstructionPacket& operator=(CameraInstructionPacket const&);
    CameraInstructionPacket(CameraInstructionPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CameraInstructionPacket@@UEAA@XZ
    virtual ~CameraInstructionPacket();

    // vIndex: 1, symbol: ?getId@CameraInstructionPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CameraInstructionPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@CameraInstructionPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 5, symbol:
    // ?read@CameraInstructionPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 8, symbol:
    // ?_read@CameraInstructionPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0CameraInstructionPacket@@QEAA@XZ
    MCAPI CameraInstructionPacket();

    // symbol: ??0CameraInstructionPacket@@QEAA@AEBUCameraInstruction@@@Z
    MCAPI explicit CameraInstructionPacket(struct CameraInstruction const&);

    // NOLINTEND
};
