#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class NpcDialoguePacket : public ::Packet {
public:
    // NpcDialoguePacket inner types define
    enum class NpcDialogueActionType {};

public:
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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
