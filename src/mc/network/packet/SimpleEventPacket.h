#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SimpleEventPacket : public ::Packet {
public:
    // SimpleEventPacket inner types define
    enum class Subtype : int {
        UninitializedSubtype        = 0x0,
        EnableCommands              = 0x1,
        DisableCommands             = 0x2,
        UnlockWorldTemplateSettings = 0x3,
    };

public:
    Subtype mSubtype; // this+0x30

    // prevent constructor by default
    SimpleEventPacket& operator=(SimpleEventPacket const&);
    SimpleEventPacket(SimpleEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SimpleEventPacket@@UEAA@XZ
    virtual ~SimpleEventPacket();

    // vIndex: 1, symbol: ?getId@SimpleEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SimpleEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SimpleEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SimpleEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SimpleEventPacket@@QEAA@XZ
    MCAPI SimpleEventPacket();

    // symbol: ??0SimpleEventPacket@@QEAA@AEBW4Subtype@0@@Z
    MCAPI explicit SimpleEventPacket(::SimpleEventPacket::Subtype const& st);

    // symbol: ?getSubtype@SimpleEventPacket@@QEBAAEBW4Subtype@1@XZ
    MCAPI ::SimpleEventPacket::Subtype const& getSubtype() const;

    // NOLINTEND
};
