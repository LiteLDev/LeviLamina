#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class NpcDialoguePacket : public ::Packet {
public:
    // NpcDialoguePacket inner types define
    enum class NpcDialogueActionType : int {
        Open  = 0x0,
        Close = 0x1,
    };

public:
    ActorUniqueID         mNpcId;                 // this+0x30
    NpcDialogueActionType mNpcDialogueActionType; // this+0x38
    std::string           mDialogue;              // this+0x40
    std::string           mSceneName;             // this+0x60
    std::string           mNpcName;               // this+0x80
    std::string           mActionJSON;            // this+0xA0

    // prevent constructor by default
    NpcDialoguePacket& operator=(NpcDialoguePacket const&);
    NpcDialoguePacket(NpcDialoguePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NpcDialoguePacket@@UEAA@XZ
    virtual ~NpcDialoguePacket();

    // vIndex: 1, symbol: ?getId@NpcDialoguePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@NpcDialoguePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@NpcDialoguePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@NpcDialoguePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0NpcDialoguePacket@@QEAA@XZ
    MCAPI NpcDialoguePacket();

    // symbol: ??0NpcDialoguePacket@@QEAA@UActorUniqueID@@@Z
    MCAPI explicit NpcDialoguePacket(struct ActorUniqueID);

    // symbol:
    // ?initializePacket@NpcDialoguePacket@@SA_NAEAV1@PEBVNpcDialogueStorage@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool
    initializePacket(class NpcDialoguePacket&, class NpcDialogueStorage const* storage, std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_verifyJson@NpcDialoguePacket@@AEBA?AV?$Result@XVerror_code@std@@@Bedrock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Bedrock::Result<void> _verifyJson(std::string const&) const;

    // NOLINTEND
};
