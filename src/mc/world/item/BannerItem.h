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

class BannerItem : public ::Item {
public:
    // prevent constructor by default
    BannerItem& operator=(BannerItem const&);
    BannerItem(BannerItem const&);
    BannerItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BannerItem() = default;

    // vIndex: 42
    virtual bool isWearableThroughLootTable(class CompoundTag const* userData) const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 92
    virtual void fixupCommon(class ItemStackBase& item) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI BannerItem(std::string const& name, int id);

    MCAPI static std::vector<std::pair<gsl::not_null<class BannerPattern const*>, ::ItemColor>>
    getPatternAndColorPairsFromItemStack(class ItemStackBase const& item);

    // NOLINTEND
};
