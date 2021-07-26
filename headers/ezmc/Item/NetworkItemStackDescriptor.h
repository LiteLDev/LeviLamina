#pragma once

#include "Block//BlockPalette.h"
#include "ItemDescriptor.h"
#include "ItemStack.h"
#include "ItemStackDescriptor.h"
#include "ItemStackNetIdVariant.h"

class NetworkItemStackDescriptor : public ItemDescriptorCount {
public:
    bool                  includeNetIds; // 80
    ItemStackNetIdVariant serverNetId;   // 84
    std::string           unk;           // 96

    inline NetworkItemStackDescriptor() {
    }
    MCAPI NetworkItemStackDescriptor(ItemStack const&);
    MCAPI NetworkItemStackDescriptor(ItemStackDescriptor const&);

    MCAPI void read(ReadOnlyBinaryStream&);
    MCAPI void write(BinaryStream&) const;
    MCAPI void setIncludeNetIds(bool);

    inline ~NetworkItemStackDescriptor() {
    }

private:
    MCAPI ItemStack getItemStack(BlockPalette const&);
};

static_assert(offsetof(NetworkItemStackDescriptor, includeNetIds) == 80);
static_assert(offsetof(NetworkItemStackDescriptor, serverNetId) == 84);
static_assert(offsetof(NetworkItemStackDescriptor, unk) == 96);