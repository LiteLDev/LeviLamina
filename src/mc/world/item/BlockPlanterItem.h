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
    virtual class BlockPlanterItem& setDescriptionId(std::string const& descriptionId);

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI BlockPlanterItem(
        std::string const&            name,
        int                           id,
        struct cereal::ReflectionCtx& ctx,
        class Block const&            block,
        bool                          useBlockDescription
    );

    // NOLINTEND
};
