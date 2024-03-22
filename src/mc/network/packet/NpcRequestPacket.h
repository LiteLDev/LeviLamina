#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class NpcRequestPacket : public ::Packet {
public:
    // NpcRequestPacket inner types define
    enum class RequestType : uchar {
        SetActions             = 0x0,
        ExecuteAction          = 0x1,
        ExecuteClosingCommands = 0x2,
        SetName                = 0x3,
        SetSkin                = 0x4,
        SetInteractText        = 0x5,
        ExecuteOpeningCommands = 0x6,
    };

public:
    ActorRuntimeID mId;          // this+0x30
    RequestType    mType;        // this+0x38
    std::string    mActions;     // this+0x40
    uchar          mActionIndex; // this+0x60
    std::string    mSceneName;   // this+0x68

    // prevent constructor by default
    NpcRequestPacket& operator=(NpcRequestPacket const&);
    NpcRequestPacket(NpcRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NpcRequestPacket@@UEAA@XZ
    virtual ~NpcRequestPacket();

    // vIndex: 1, symbol: ?getId@NpcRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@NpcRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@NpcRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@NpcRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

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
    MCAPI static class NpcRequestPacket requestSetInteractText(class ActorRuntimeID id, std::string text);

    // symbol:
    // ?requestSetName@NpcRequestPacket@@SA?AV1@VActorRuntimeID@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class NpcRequestPacket requestSetName(class ActorRuntimeID id, std::string name);

    // symbol: ?requestSetSkin@NpcRequestPacket@@SA?AV1@VActorRuntimeID@@H@Z
    MCAPI static class NpcRequestPacket requestSetSkin(class ActorRuntimeID id, int skin);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0NpcRequestPacket@@AEAA@VActorRuntimeID@@W4RequestType@0@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@E@Z
    MCAPI NpcRequestPacket(
        class ActorRuntimeID            id,
        ::NpcRequestPacket::RequestType type,
        std::string                     actions,
        uchar                           actionIndex
    );

    // NOLINTEND
};
