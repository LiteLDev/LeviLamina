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

class BlockPlanterItem : public ::ComponentItem {
public:
    // prevent constructor by default
    BlockPlanterItem& operator=(BlockPlanterItem const&);
    BlockPlanterItem(BlockPlanterItem const&);
    BlockPlanterItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPlanterItem() = default;

    // vIndex: 3
    virtual class BlockPlanterItem& setDescriptionId(std::string const&);

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    MCAPI BlockPlanterItem(std::string const&, int, struct cereal::ReflectionCtx&, class Block const&, bool);

    // NOLINTEND
};
