#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerAuthInputPacket : public ::Packet {
public:
    // PlayerAuthInputPacket inner types define
    enum class InputData {};

public:
    // prevent constructor by default
    PlayerAuthInputPacket& operator=(PlayerAuthInputPacket const&);
    PlayerAuthInputPacket(PlayerAuthInputPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayerAuthInputPacket@@UEAA@XZ
    virtual ~PlayerAuthInputPacket();

    // vIndex: 1, symbol: ?getId@PlayerAuthInputPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerAuthInputPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@PlayerAuthInputPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 6, symbol: ?isValid@PlayerAuthInputPacket@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 7, symbol:
    // ?_read@PlayerAuthInputPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0PlayerAuthInputPacket@@QEAA@XZ
    MCAPI PlayerAuthInputPacket();

    // symbol: ??0PlayerAuthInputPacket@@QEAA@$$QEAV0@@Z
    MCAPI PlayerAuthInputPacket(class PlayerAuthInputPacket&&);

    // symbol: ?getInput@PlayerAuthInputPacket@@QEBA_NW4InputData@1@@Z
    MCAPI bool getInput(::PlayerAuthInputPacket::InputData point) const;

    // symbol: ??4PlayerAuthInputPacket@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class PlayerAuthInputPacket& operator=(class PlayerAuthInputPacket&&);

    // symbol: ?readIntoComponent@PlayerAuthInputPacket@@QEBA?AUPlayerActionComponent@@XZ
    MCAPI struct PlayerActionComponent readIntoComponent() const;

    // symbol: ?takeCopy@PlayerAuthInputPacket@@QEBA?AV1@XZ
    MCAPI class PlayerAuthInputPacket takeCopy() const;

    // NOLINTEND
};
