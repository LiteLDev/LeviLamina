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
    ushort mStackSize; // this+0x10

    ItemDescriptorCount& operator=(ItemDescriptorCount&&)      = default;
    ItemDescriptorCount& operator=(ItemDescriptorCount const&) = default;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ItemDescriptorCount@@UEAA@XZ
    virtual ~ItemDescriptorCount();

    // vIndex: 2, symbol: ?serialize@ItemDescriptorCount@@UEBAXAEAVBinaryStream@@@Z
    virtual void serialize(class BinaryStream& stream) const;

    // symbol: ??0ItemDescriptorCount@@QEAA@XZ
    MCAPI ItemDescriptorCount();

    // symbol: ??0ItemDescriptorCount@@QEAA@AEBV0@@Z
    MCAPI ItemDescriptorCount(class ItemDescriptorCount const&);

    // symbol: ??0ItemDescriptorCount@@QEAA@AEAVReadOnlyBinaryStream@@@Z
    MCAPI explicit ItemDescriptorCount(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ItemDescriptorCount@@QEAA@AEBVBlock@@G@Z
    MCAPI ItemDescriptorCount(class Block const& block, ushort stackSize);

    // symbol: ??0ItemDescriptorCount@@QEAA@AEBVBlockLegacy@@G@Z
    MCAPI ItemDescriptorCount(class BlockLegacy const& block, ushort stackSize);

    // symbol: ??0ItemDescriptorCount@@QEAA@AEBVItemDescriptor@@G@Z
    MCAPI ItemDescriptorCount(class ItemDescriptor const& descriptor, ushort stackSize);

    // symbol: ??0ItemDescriptorCount@@QEAA@AEBUItemTag@@G@Z
    MCAPI ItemDescriptorCount(struct ItemTag const&, ushort stackSize);

    // symbol: ??0ItemDescriptorCount@@QEAA@AEBVItem@@HG@Z
    MCAPI ItemDescriptorCount(class Item const& item, int auxValue, ushort stackSize);

    // symbol: ??0ItemDescriptorCount@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@HG@Z
    MCAPI ItemDescriptorCount(std::string_view item, int auxValue, ushort stackSize);

    // symbol: ?getStackSize@ItemDescriptorCount@@QEBAFXZ
    MCAPI short getStackSize() const;

    // symbol: ?setStackSize@ItemDescriptorCount@@QEAAXF@Z
    MCAPI void setStackSize(short size);

    // NOLINTEND
};
