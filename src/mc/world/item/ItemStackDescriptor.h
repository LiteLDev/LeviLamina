#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ItemStackDescriptor : public ::ItemDescriptorCount {
public:
    // prevent constructor by default
    ItemStackDescriptor& operator=(ItemStackDescriptor const&);
    ItemStackDescriptor(ItemStackDescriptor const&);

    std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> mUserData; // this+0x18
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackDescriptor();

    MCAPI ItemStackDescriptor();

    MCAPI
    ItemStackDescriptor(class Item const& item, int auxValue, ushort stackSize, class CompoundTag const* userData);

    MCAPI class ItemStackDescriptor& operator=(class ItemStackDescriptor&& other);

    // NOLINTEND
};
