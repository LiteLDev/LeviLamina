#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/ResourcePackResponse.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/resources/ResourcePackResponse.h"

class ResourcePackClientResponsePacket : public ::Packet {
public:
    std::set<std::string> mDownloadingPacks; // this+0x30
    ResourcePackResponse  mResponse;         // this+0x40

    // prevent constructor by default
    ResourcePackClientResponsePacket& operator=(ResourcePackClientResponsePacket const&);
    ResourcePackClientResponsePacket(ResourcePackClientResponsePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@ResourcePackClientResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ResourcePackClientResponsePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ResourcePackClientResponsePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ResourcePackClientResponsePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0ResourcePackClientResponsePacket@@QEAA@XZ
    MCAPI ResourcePackClientResponsePacket();

    // symbol:
    // ?getDownloadingPacks@ResourcePackClientResponsePacket@@QEBAAEBV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::set<std::string> const& getDownloadingPacks() const;

    // symbol: ?isResponse@ResourcePackClientResponsePacket@@QEBA_NW4ResourcePackResponse@@@Z
    MCAPI bool isResponse(::ResourcePackResponse) const;

    // NOLINTEND
};
