#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/CameraShakeAction.h"
#include "mc/enums/CameraShakeType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/CameraShakeAction.h"
#include "mc/enums/CameraShakeType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CameraShakePacket : public ::Packet {
public:
    float             mIntensity;   // this+0x30
    float             mSeconds;     // this+0x34
    CameraShakeType   mShakeType;   // this+0x38
    CameraShakeAction mShakeAction; // this+0x39

    // prevent constructor by default
    CameraShakePacket& operator=(CameraShakePacket const&);
    CameraShakePacket(CameraShakePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@CameraShakePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CameraShakePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@CameraShakePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@CameraShakePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1CameraShakePacket@@UEAA@XZ
    MCVAPI ~CameraShakePacket();

    // symbol: ??0CameraShakePacket@@QEAA@MMW4CameraShakeType@@@Z
    MCAPI CameraShakePacket(float, float, ::CameraShakeType);

    // symbol: ??0CameraShakePacket@@QEAA@XZ
    MCAPI CameraShakePacket();

    // symbol: ??0CameraShakePacket@@QEAA@W4CameraShakeAction@@@Z
    MCAPI explicit CameraShakePacket(::CameraShakeAction);

    // NOLINTEND
};
