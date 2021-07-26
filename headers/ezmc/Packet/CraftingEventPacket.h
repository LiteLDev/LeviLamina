#pragma once

#include <vector>

#include "../Core/ContainerID.h"
#include "../Core/Packet.h"
#include "../Core/mce.h"
#include "../Item/ItemStack.h"
#include "../dll.h"

class CraftingEventPacket : public Packet {
public:
    enum class Type { shapeless,
                      shaped,
                      furnace,
                      furnace_data,
                      multi,
                      shulker_box };

    ContainerID            container = ContainerID::Invalid;
    Type                   type      = Type::shapeless;
    mce::UUID              uuid;
    std::vector<ItemStack> inputs, outputs;

    inline ~CraftingEventPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(CraftingEventPacket, inputs) == 72);
static_assert(offsetof(CraftingEventPacket, outputs) == 96);