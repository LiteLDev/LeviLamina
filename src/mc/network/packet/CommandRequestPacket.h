#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandOriginData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CommandRequestPacket : public ::Packet {
public:
    std::string       mCommand;        // this+0x30
    CommandOriginData mOrigin;         // this+0x50
    bool              mInternalSource; // this+0x90

    // prevent constructor by default
    CommandRequestPacket& operator=(CommandRequestPacket const&);
    CommandRequestPacket(CommandRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CommandRequestPacket@@UEAA@XZ
    virtual ~CommandRequestPacket();

    // vIndex: 1, symbol: ?getId@CommandRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CommandRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@CommandRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@CommandRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0CommandRequestPacket@@QEAA@XZ
    MCAPI CommandRequestPacket();

    // symbol: ??0CommandRequestPacket@@QEAA@AEAVCommandContext@@_N@Z
    MCAPI CommandRequestPacket(class CommandContext& context, bool internalSource);

    // symbol:
    // ?createCommandContext@CommandRequestPacket@@QEBA?AV?$unique_ptr@VCommandContext@@U?$default_delete@VCommandContext@@@std@@@std@@AEBVNetworkIdentifier@@AEBV?$NonOwnerPointer@VILevel@@@Bedrock@@@Z
    MCAPI std::unique_ptr<class CommandContext> createCommandContext(
        class NetworkIdentifier const&                      source,
        class Bedrock::NonOwnerPointer<class ILevel> const& level
    ) const;

    // symbol: ?getInternalSource@CommandRequestPacket@@QEBA_NXZ
    MCAPI bool getInternalSource() const;

    // NOLINTEND
};
