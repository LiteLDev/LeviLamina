#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/common/CameraPresets.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CameraPresetsPacket : public ::Packet {
public:
    CameraPresets                          mData;
    std::vector<CameraPresets::CameraList> mList;

    // prevent constructor by default
    CameraPresetsPacket& operator=(CameraPresetsPacket const&);
    CameraPresetsPacket(CameraPresetsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@CameraPresetsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CameraPresetsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@CameraPresetsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 4, symbol:
    // ?read@CameraPresetsPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream&);

    // vIndex: 7, symbol:
    // ?_read@CameraPresetsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1CameraPresetsPacket@@UEAA@XZ
    MCVAPI ~CameraPresetsPacket();

    // symbol: ??0CameraPresetsPacket@@QEAA@AEBVCameraPresets@@@Z
    MCAPI explicit CameraPresetsPacket(class CameraPresets const&);

    // symbol: ??0CameraPresetsPacket@@QEAA@XZ
    MCAPI CameraPresetsPacket();

    // NOLINTEND
};
