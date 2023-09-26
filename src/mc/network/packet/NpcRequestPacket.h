#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class NpcRequestPacket : public ::Packet {
public:
    // NpcRequestPacket inner types define
    enum class RequestType {};

public:
    // prevent constructor by default
    NpcRequestPacket& operator=(NpcRequestPacket const&);
    NpcRequestPacket(NpcRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@NpcRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@NpcRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@NpcRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@NpcRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1NpcRequestPacket@@UEAA@XZ
    MCVAPI ~NpcRequestPacket();

    // symbol: ??0NpcRequestPacket@@QEAA@XZ
    MCAPI NpcRequestPacket();

    // symbol:
    // ?getInteractText@NpcRequestPacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getInteractText() const;

    // symbol: ?getNpcName@NpcRequestPacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getNpcName() const;

    // symbol: ?getSceneName@NpcRequestPacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getSceneName() const;

    // symbol: ?getSkin@NpcRequestPacket@@QEBAHXZ
    MCAPI int getSkin() const;

    // symbol:
    // ?requestSetInteractText@NpcRequestPacket@@SA?AV1@VActorRuntimeID@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class NpcRequestPacket requestSetInteractText(class ActorRuntimeID, std::string);

    // symbol:
    // ?requestSetName@NpcRequestPacket@@SA?AV1@VActorRuntimeID@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class NpcRequestPacket requestSetName(class ActorRuntimeID, std::string);

    // symbol: ?requestSetSkin@NpcRequestPacket@@SA?AV1@VActorRuntimeID@@H@Z
    MCAPI static class NpcRequestPacket requestSetSkin(class ActorRuntimeID, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0NpcRequestPacket@@AEAA@VActorRuntimeID@@W4RequestType@0@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@E@Z
    MCAPI NpcRequestPacket(class ActorRuntimeID, ::NpcRequestPacket::RequestType, std::string, uchar);

    // NOLINTEND
};
