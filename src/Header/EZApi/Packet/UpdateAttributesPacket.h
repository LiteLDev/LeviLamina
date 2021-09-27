#pragma once

#include <vector>

#include "../Actor/ActorRuntimeID.h"
#include "../Core/HashedString.h"
#include "../Core/Packet.h"
#include "../dll.h"

class UpdateAttributesPacket : public Packet {
public:
    struct AttributeData {
        float        value = 0.0f, min = 0.0f, max = 0.0f, def = 0.0f;
        HashedString name; // 16
        char         pad[8];
    };

    ActorRuntimeID             rid;
    std::vector<AttributeData> data;
    uint64_t                   tick;

    inline ~UpdateAttributesPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(UpdateAttributesPacket, rid) == 48);
static_assert(offsetof(UpdateAttributesPacket, data) == 56);
static_assert(offsetof(UpdateAttributesPacket, tick) == 80);

static_assert(sizeof(UpdateAttributesPacket::AttributeData) == 64);