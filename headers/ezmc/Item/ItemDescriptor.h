#pragma once

class Item;
class Block;

#include "../Block/BlockLegacy.h"
#include "../Core/WeakPtr.h"

class ItemDescriptor {
public:
    WeakPtr<Item> item;
    char          pad[64];

    inline ~ItemDescriptor() {
    }

    ItemDescriptor(void);
    ItemDescriptor(class Item const&, int);

    MCAPI bool isValid(void) const;
    MCAPI bool isNull(void) const;
    MCAPI bool hasTags(void) const;

    MCAPI short getId(void) const;
    MCAPI int   getIdAux(void) const;
    MCAPI short getAuxValue(void) const;

    MCAPI Block const* getBlock() const;
    MCAPI Item const* getItem() const;
    MCAPI std::string getRawNameId() const;

    MCAPI WeakPtr<BlockLegacy> const& getBlockLegacy() const;
};

class ItemDescriptorCount : public ItemDescriptor {
public:
    unsigned short count;

    inline ItemDescriptorCount() {
    }
    inline ~ItemDescriptorCount() {
    }
};

static_assert(sizeof(ItemDescriptor) == 72);