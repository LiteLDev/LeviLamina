#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SpawnExperienceOrbPacket : public ::Packet {
public:
    Vec3 mPos;   // this+0x30
    int  mCount; // this+0x3C

    // prevent constructor by default
    SpawnExperienceOrbPacket& operator=(SpawnExperienceOrbPacket const&);
    SpawnExperienceOrbPacket(SpawnExperienceOrbPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SpawnExperienceOrbPacket@@UEAA@XZ
    virtual ~SpawnExperienceOrbPacket();

    // vIndex: 1, symbol: ?getId@SpawnExperienceOrbPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SpawnExperienceOrbPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SpawnExperienceOrbPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SpawnExperienceOrbPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SpawnExperienceOrbPacket@@QEAA@XZ
    MCAPI SpawnExperienceOrbPacket();

    // symbol: ??0SpawnExperienceOrbPacket@@QEAA@AEBVVec3@@H@Z
    MCAPI SpawnExperienceOrbPacket(class Vec3 const& pos, int xpValue);

    // NOLINTEND
};
