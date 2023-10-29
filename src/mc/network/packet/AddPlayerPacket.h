#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/AddActorBasePacket.h"

class AddPlayerPacket : public ::AddActorBasePacket {
public:
    // prevent constructor by default
    AddPlayerPacket& operator=(AddPlayerPacket const&);
    AddPlayerPacket(AddPlayerPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@AddPlayerPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AddPlayerPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@AddPlayerPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 4, symbol:
    // ?read@PlayerListPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream&);

    // vIndex: 5, symbol: ?disallowBatching@Packet@@UEBA_NXZ
    virtual bool disallowBatching() const;

    // vIndex: 6, symbol: ?isValid@Packet@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 7, symbol:
    // ?_read@AddPlayerPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1AddPlayerPacket@@UEAA@XZ
    MCVAPI ~AddPlayerPacket();

    // symbol: ??0AddPlayerPacket@@QEAA@XZ
    MCAPI AddPlayerPacket();

    // symbol: ??0AddPlayerPacket@@QEAA@AEAVPlayer@@@Z
    MCAPI explicit AddPlayerPacket(class Player&);

    // NOLINTEND
};
