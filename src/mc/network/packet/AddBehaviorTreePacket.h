#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AddBehaviorTreePacket : public ::Packet {
public:
    std::string mJsonInput; // this+0x30

    // prevent constructor by default
    AddBehaviorTreePacket& operator=(AddBehaviorTreePacket const&);
    AddBehaviorTreePacket(AddBehaviorTreePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AddBehaviorTreePacket@@UEAA@XZ
    virtual ~AddBehaviorTreePacket() = default;

    // vIndex: 1, symbol: ?getId@AddBehaviorTreePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AddBehaviorTreePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@AddBehaviorTreePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@AddBehaviorTreePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0AddBehaviorTreePacket@@QEAA@XZ
    MCAPI AddBehaviorTreePacket();

    // NOLINTEND
};
