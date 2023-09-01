#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"

class RequestPermissionsPacket : public ::Packet {
public:
    // prevent constructor by default
    RequestPermissionsPacket& operator=(RequestPermissionsPacket const&) = delete;
    RequestPermissionsPacket(RequestPermissionsPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@RequestPermissionsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@RequestPermissionsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@RequestPermissionsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@RequestPermissionsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0RequestPermissionsPacket@@QEAA@XZ
    MCAPI RequestPermissionsPacket();

    // symbol: ?getCustomAbilityValue@RequestPermissionsPacket@@QEBA_NW4AbilitiesIndex@@@Z
    MCAPI bool getCustomAbilityValue(::AbilitiesIndex) const;

    // symbol: ?getPlayerPermissions@RequestPermissionsPacket@@QEBA?AW4PlayerPermissionLevel@@XZ
    MCAPI ::PlayerPermissionLevel getPlayerPermissions() const;

    // symbol: ?getTargetPlayerId@RequestPermissionsPacket@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getTargetPlayerId() const;

    // NOLINTEND
};
