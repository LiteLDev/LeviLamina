#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/codebuilder/Category.h"
#include "mc/codebuilder/Operation.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CodeBuilderSourcePacket : public ::Packet {
public:
    CodeBuilderStorageQueryOptions::Operation mOperation; // this+0x30
    CodeBuilderStorageQueryOptions::Category  mCategory;  // this+0x31
    std::string                               mValue;     // this+0x38

    // prevent constructor by default
    CodeBuilderSourcePacket& operator=(CodeBuilderSourcePacket const&);
    CodeBuilderSourcePacket(CodeBuilderSourcePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CodeBuilderSourcePacket@@UEAA@XZ
    virtual ~CodeBuilderSourcePacket() = default;

    // vIndex: 1, symbol: ?getId@CodeBuilderSourcePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CodeBuilderSourcePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@CodeBuilderSourcePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@CodeBuilderSourcePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0CodeBuilderSourcePacket@@QEAA@XZ
    MCAPI CodeBuilderSourcePacket();

    // NOLINTEND
};
