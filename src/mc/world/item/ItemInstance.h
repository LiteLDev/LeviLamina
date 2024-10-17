#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStackBase.h"

class ItemInstance : public ::ItemStackBase {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemInstance();

    // vIndex: 1
    virtual void reinit(class Item const& item, int count, int auxValue);

    // vIndex: 2
    virtual void reinit(class BlockLegacy const& block, int count);

    // vIndex: 3
    virtual void reinit(std::string_view name, int count, int auxValue);

    MCAPI ItemInstance();

    MCAPI ItemInstance(class ItemInstance const& rhs);

    MCAPI explicit ItemInstance(class ItemStackBase const& rhs);

    MCAPI ItemInstance(class BlockLegacy const& block, int count);

    MCAPI ItemInstance(class Block const& block, int count, class CompoundTag const* _userData);

    MCAPI ItemInstance(class Item const& item, int count, int auxValue, class CompoundTag const* _userData);

    MCAPI ItemInstance(std::string_view name, int count, int auxValue, class CompoundTag const* _userData);

    MCAPI class ItemInstance clone() const;

    MCAPI class ItemInstance& operator=(class ItemInstance const& rhs);

    MCAPI static class ItemInstance fromTag(class CompoundTag const& tag);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(std::string_view name, int count, int auxValue, class CompoundTag const* _userData);

    MCAPI void* ctor$(class ItemInstance const& rhs);

    MCAPI void* ctor$(class ItemStackBase const& rhs);

    MCAPI void* ctor$(class Block const& block, int count, class CompoundTag const* _userData);

    MCAPI void* ctor$(class BlockLegacy const& block, int count);

    MCAPI void* ctor$(class Item const& item, int count, int auxValue, class CompoundTag const* _userData);

    MCAPI void dtor$();

    MCAPI void reinit$(class Item const& item, int count, int auxValue);

    MCAPI void reinit$(class BlockLegacy const& block, int count);

    MCAPI void reinit$(std::string_view name, int count, int auxValue);

    MCAPI static class ItemInstance const& EMPTY_ITEM();

    // NOLINTEND
};
