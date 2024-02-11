#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/utils/BannerBlockType.h"

class BannerBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    BannerBlockActor& operator=(BannerBlockActor const&);
    BannerBlockActor(BannerBlockActor const&);
    BannerBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BannerBlockActor@@UEAA@XZ
    virtual ~BannerBlockActor() = default;

    // vIndex: 1, symbol: ?load@BannerBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@BannerBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@BannerBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 11, symbol: ?onPlace@BannerBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onPlace(class BlockSource& region);

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@BannerBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41, symbol: ?_onUpdatePacket@BannerBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ??0BannerBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit BannerBlockActor(class BlockPos const& pos);

    // symbol: ?getBaseColorInt@BannerBlockActor@@QEBAEXZ
    MCAPI uchar getBaseColorInt() const;

    // symbol: ?setItemValues@BannerBlockActor@@QEAAXAEBVItemStackBase@@@Z
    MCAPI void setItemValues(class ItemStackBase const& instance);

    // symbol: ?getBannerType@BannerBlockActor@@SA?AW4BannerBlockType@@PEBVCompoundTag@@@Z
    MCAPI static ::BannerBlockType getBannerType(class CompoundTag const* tag);

    // symbol: ?getBaseColor@BannerBlockActor@@SAHAEBVItemStack@@@Z
    MCAPI static int getBaseColor(class ItemStack const& item);

    // symbol: ?getPatternCount@BannerBlockActor@@SAHPEBVCompoundTag@@@Z
    MCAPI static int getPatternCount(class CompoundTag const* tagElement);

    // symbol: ?isDefaultBanner@BannerBlockActor@@SA_NAEBVItemStackBase@@@Z
    MCAPI static bool isDefaultBanner(class ItemStackBase const& instance);

    // symbol: ?removeLastPattern@BannerBlockActor@@SA_NAEAVItemStack@@AEAVPlayer@@@Z
    MCAPI static bool removeLastPattern(class ItemStack& instance, class Player&);

    // symbol: ?MAX_PATTERNS@BannerBlockActor@@2HB
    MCAPI static int const MAX_PATTERNS;

    // symbol: ?TAG_BASE_COLOR@BannerBlockActor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_BASE_COLOR;

    // symbol: ?TAG_COLOR@BannerBlockActor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_COLOR;

    // symbol: ?TAG_PATTERN@BannerBlockActor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_PATTERN;

    // symbol: ?TAG_PATTERNS@BannerBlockActor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_PATTERNS;

    // symbol: ?TAG_TYPE@BannerBlockActor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_TYPE;

    // NOLINTEND
};
