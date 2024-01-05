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
    // vIndex: 0, symbol: ??1ItemStackDescriptor@@UEAA@XZ
    virtual ~ItemStackDescriptor();

    // symbol: ??0ItemStackDescriptor@@QEAA@XZ
    MCAPI ItemStackDescriptor();

    // symbol: ??0ItemStackDescriptor@@QEAA@AEBVItem@@HGPEBVCompoundTag@@@Z
    MCAPI
    ItemStackDescriptor(class Item const& item, int auxValue, ushort stackSize, class CompoundTag const* userData);

    // symbol: ??4ItemStackDescriptor@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ItemStackDescriptor& operator=(class ItemStackDescriptor&& other);

    // NOLINTEND
};
