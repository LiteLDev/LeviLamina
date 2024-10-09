#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ItemDescriptorCount : public ::ItemDescriptor {
public:
    // prevent constructor by default
    ItemDescriptorCount& operator=(ItemDescriptorCount const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemDescriptorCount();

    // vIndex: 2
    virtual void serialize(class BinaryStream& stream) const;

    MCAPI ItemDescriptorCount();

    MCAPI ItemDescriptorCount(class ItemDescriptorCount const&);

    MCAPI explicit ItemDescriptorCount(class ReadOnlyBinaryStream& stream);

    MCAPI ItemDescriptorCount(class Block const& block, ushort stackSize);

    MCAPI ItemDescriptorCount(class BlockLegacy const& block, ushort stackSize);

    MCAPI ItemDescriptorCount(class ItemDescriptor const& descriptor, ushort stackSize);

    MCAPI ItemDescriptorCount(struct ItemTag const& itemTag, ushort stackSize);

    MCAPI ItemDescriptorCount(class Item const& item, int auxValue, ushort stackSize);

    MCAPI ItemDescriptorCount(std::string_view item, int auxValue, ushort stackSize);

    MCAPI short getStackSize() const;

    MCAPI explicit operator bool() const;

    MCAPI void setStackSize(short size);

    // NOLINTEND
};
