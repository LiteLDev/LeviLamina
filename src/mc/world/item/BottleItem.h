#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class BottleItem : public ::Item {
public:
    // prevent constructor by default
    BottleItem& operator=(BottleItem const&);
    BottleItem(BottleItem const&);
    BottleItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BottleItem() = default;

    // vIndex: 45
    virtual bool isLiquidClipItem() const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar, class Vec3 const& clickPos) const;

    MCAPI BottleItem(std::string const& name, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _createBottledItem(class Actor& entity, class ItemStack& instance, std::string_view itemToCreate) const;

    MCAPI void _fillBottleViaDispenser(
        class BlockSource& region,
        std::string_view   bottledItem,
        class Container&   container,
        int                slot,
        class Vec3 const&  pos,
        uchar              face
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class InteractionResult
    _useOn$(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar, class Vec3 const& clickPos)
        const;

    MCAPI bool
    dispense$(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    MCAPI bool isLiquidClipItem$() const;

    // NOLINTEND
};
