#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ComponentItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

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
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 112
    virtual float getFurnaceXPmultiplier(class ItemStackBase const& instance) const;

    MCAPI CoalItem(std::string const&, int, struct cereal::ReflectionCtx&, ::CoalItem::Type);

    // NOLINTEND
};
