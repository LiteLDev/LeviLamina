#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/BannerBlockType.h"
#include "mc/world/level/block/actor/BlockActor.h"

class BannerBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    BannerBlockActor& operator=(BannerBlockActor const&);
    BannerBlockActor(BannerBlockActor const&);
    BannerBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BannerBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 11
    virtual void onPlace(class BlockSource& region);

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI uchar getBaseColorInt() const;

    MCAPI void setItemValues(class ItemStackBase const& instance);

    MCAPI static ::BannerBlockType getBannerType(class CompoundTag const* tag);

    MCAPI static int getBaseColor(class ItemStack const& item);

    MCAPI static int getPatternCount(class CompoundTag const* tagElement);

    MCAPI static bool isDefaultBanner(class ItemStackBase const& instance);

    MCAPI static bool removeLastPattern(class ItemStack& instance, class Player&);

    MCAPI static int const MAX_PATTERNS;

    MCAPI static std::string const TAG_BASE_COLOR;

    MCAPI static std::string const TAG_COLOR;

    MCAPI static std::string const TAG_PATTERN;

    MCAPI static std::string const TAG_PATTERNS;

    MCAPI static std::string const TAG_TYPE;

    // NOLINTEND
};
