#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"

class RequestPermissionsPacket : public ::Packet {
public:
    ActorUniqueID         mTargetPlayerId;        // this+0x30
    PlayerPermissionLevel mPlayerPermissions;     // this+0x38
    ushort                mCustomPermissionFlags; // this+0x3A

    // prevent constructor by default
    RequestPermissionsPacket& operator=(RequestPermissionsPacket const&);
    RequestPermissionsPacket(RequestPermissionsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RequestPermissionsPacket@@UEAA@XZ
    virtual ~RequestPermissionsPacket() = default;

    // vIndex: 1, symbol: ?getId@RequestPermissionsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@RequestPermissionsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@RequestPermissionsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@RequestPermissionsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0RequestPermissionsPacket@@QEAA@XZ
    MCAPI RequestPermissionsPacket();

    // symbol: ?getCustomAbilityValue@RequestPermissionsPacket@@QEBA_NW4AbilitiesIndex@@@Z
    MCAPI bool getCustomAbilityValue(::AbilitiesIndex ability) const;

    // symbol: ?getPlayerPermissions@RequestPermissionsPacket@@QEBA?AW4PlayerPermissionLevel@@XZ
    MCAPI ::PlayerPermissionLevel getPlayerPermissions() const;

    // symbol: ?getTargetPlayerId@RequestPermissionsPacket@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getTargetPlayerId() const;

    // NOLINTEND
};
