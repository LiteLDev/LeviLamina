#pragma once

#include <memory>
#include <vector>

#include "../Actor/ActorRuntimeID.h"
#include "../Actor/SynchedActorData.h"
#include "../Core/DataItem.h"
#include "../Core/Packet.h"
#include "../dll.h"

class SetActorDataPacket : public Packet {
public:
    ActorRuntimeID                         rid;
    std::vector<std::unique_ptr<DataItem>> items;

    inline SetActorDataPacket() {
    }
    MCAPI SetActorDataPacket(ActorRuntimeID, SynchedActorData&, bool);
    inline ~SetActorDataPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(SetActorDataPacket, rid) == 48);