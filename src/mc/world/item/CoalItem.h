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

class CoalItem : public ::ComponentItem {
public:
    // CoalItem inner types define
    enum class Type {};

public:
    // prevent constructor by default
    CoalItem& operator=(CoalItem const&);
    CoalItem(CoalItem const&);
    CoalItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CoalItem() = default;

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    // vIndex: 112
    virtual float getFurnaceXPmultiplier(class ItemStackBase const& instance) const;

    MCAPI CoalItem(std::string const& name, int id, struct cereal::ReflectionCtx& ctx, ::CoalItem::Type type);

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

    MCAPI float getFurnaceXPmultiplier$(class ItemStackBase const& instance) const;

    MCAPI struct ResolvedItemIconInfo
    getIconInfo$(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI class Item& setIconInfo$(std::string const& name, int id);

    // NOLINTEND
};
