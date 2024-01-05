#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlaySoundPacket : public ::Packet {
public:
    // prevent constructor by default
    PlaySoundPacket& operator=(PlaySoundPacket const&);
    PlaySoundPacket(PlaySoundPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlaySoundPacket@@UEAA@XZ
    virtual ~PlaySoundPacket();

    // vIndex: 1, symbol: ?getId@PlaySoundPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlaySoundPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@PlaySoundPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@PlaySoundPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PlaySoundPacket@@QEAA@XZ
    MCAPI PlaySoundPacket();

    // symbol: ??0PlaySoundPacket@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
    MCAPI PlaySoundPacket(std::string name, class Vec3 const& pos, float volume, float pitch);

    // NOLINTEND
};
