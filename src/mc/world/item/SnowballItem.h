#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/ComponentItem.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class SnowballItem : public ::ComponentItem {
public:
    // prevent constructor by default
    SnowballItem& operator=(SnowballItem const&);
    SnowballItem(SnowballItem const&);
    SnowballItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SnowballItem() = default;

    // vIndex: 3
    virtual class SnowballItem& setDescriptionId(std::string const& descriptionId);

    // vIndex: 73
    virtual class Actor* createProjectileActor(
        class BlockSource& region,
        class ItemStack const&,
        class Vec3 const& pos,
        class Vec3 const& direction
    ) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI SnowballItem(std::string const& name, int id, struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::string
          buildDescriptionId$(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    MCAPI class Actor* createProjectileActor$(
        class BlockSource& region,
        class ItemStack const&,
        class Vec3 const& pos,
        class Vec3 const& direction
    ) const;

    MCAPI bool
    dispense$(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    MCAPI struct ResolvedItemIconInfo
    getIconInfo$(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI class SnowballItem& setDescriptionId$(std::string const& descriptionId);

    MCAPI class Item& setIconInfo$(std::string const& name, int id);

    // NOLINTEND
};
