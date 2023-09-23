#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/util/molang/MolangVersion.h"

class AnimateEntityPacket : public ::Packet {
public:
    // prevent constructor by default
    AnimateEntityPacket& operator=(AnimateEntityPacket const&);
    AnimateEntityPacket(AnimateEntityPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@AnimateEntityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AnimateEntityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@AnimateEntityPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@AnimateEntityPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1AnimateEntityPacket@@UEAA@XZ
    MCVAPI ~AnimateEntityPacket();

    // symbol:
    // ??0AnimateEntityPacket@@QEAA@AEBV?$vector@VActorRuntimeID@@V?$allocator@VActorRuntimeID@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@1M1W4MolangVersion@@1@Z
    MCAPI
    AnimateEntityPacket(std::vector<class ActorRuntimeID> const&, std::string const&, std::string const&, float, std::string const&, ::MolangVersion, std::string const&);

    // symbol: ??0AnimateEntityPacket@@QEAA@XZ
    MCAPI AnimateEntityPacket();

    // NOLINTEND
};
