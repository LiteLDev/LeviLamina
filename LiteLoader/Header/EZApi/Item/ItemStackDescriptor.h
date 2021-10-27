#pragma once

#include "ItemDescriptor.h"

class ItemStackDescriptor : public ItemDescriptorCount {
public:
    CompoundTag* tag;

    MCAPI ItemStackDescriptor(void);
    MCAPI ItemStackDescriptor(Item const&, int, unsigned short, class CompoundTag const*);
};

static_assert(offsetof(ItemStackDescriptor, tag) == 80);