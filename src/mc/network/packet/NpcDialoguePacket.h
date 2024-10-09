#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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
    // vIndex: 0
    virtual ~NpcDialoguePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI NpcDialoguePacket();

    MCAPI explicit NpcDialoguePacket(struct ActorUniqueID npcID);

    MCAPI static bool initializePacket(
        class NpcDialoguePacket&        outPacket,
        class NpcDialogueStorage const* storage,
        std::string const&              sceneName
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Bedrock::Result<void> _verifyJson(std::string const& actionJSON) const;

    // NOLINTEND
};
