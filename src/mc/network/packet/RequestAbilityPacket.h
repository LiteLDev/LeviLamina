#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/AbilitiesIndex.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class RequestAbilityPacket : public ::Packet {
public:
    // RequestAbilityPacket inner types define
    enum class Type : uchar {
        Unset = 0x0,
        Bool  = 0x1,
        Float = 0x2,
    };

public:
    AbilitiesIndex            mAbility;   // this+0x30
    Type                      mValueType; // this+0x32
    std::variant<bool, float> mValue;     // this+0x34

    // prevent constructor by default
    RequestAbilityPacket& operator=(RequestAbilityPacket const&);
    RequestAbilityPacket(RequestAbilityPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~RequestAbilityPacket() = default;

    // vIndex: 1, symbol: ?getId@RequestAbilityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@RequestAbilityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@RequestAbilityPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@RequestAbilityPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0RequestAbilityPacket@@QEAA@XZ
    MCAPI RequestAbilityPacket();

    // symbol: ?getAbility@RequestAbilityPacket@@QEBA?AW4AbilitiesIndex@@XZ
    MCAPI ::AbilitiesIndex getAbility() const;

    // symbol: ?tryGetBool@RequestAbilityPacket@@QEBA_NAEA_N@Z
    MCAPI bool tryGetBool(bool&) const;

    // NOLINTEND
};
