#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class EditorNetworkPacket : public ::Packet {
public:
    CompoundTag mBinaryPayload; // this+0x30

    // prevent constructor by default
    EditorNetworkPacket& operator=(EditorNetworkPacket const&);
    EditorNetworkPacket(EditorNetworkPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EditorNetworkPacket@@UEAA@XZ
    virtual ~EditorNetworkPacket() = default;

    // vIndex: 1, symbol: ?getId@EditorNetworkPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@EditorNetworkPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@EditorNetworkPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@EditorNetworkPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0EditorNetworkPacket@@QEAA@XZ
    MCAPI EditorNetworkPacket();

    // NOLINTEND
};
