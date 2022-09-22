/**
 * @file  BannerBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BannerBlockActor.
 *
 */
class BannerBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERBLOCKACTOR
public:
    class BannerBlockActor& operator=(class BannerBlockActor const &) = delete;
    BannerBlockActor(class BannerBlockActor const &) = delete;
    BannerBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BannerBlockActor();
    /**
     * @hash   -1858485989
     * @vftbl  1
     * @symbol ?load@BannerBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -548836310
     * @vftbl  2
     * @symbol ?save@BannerBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -1714297052
     * @vftbl  7
     * @symbol ?tick@BannerBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @hash   -1636632519
     * @vftbl  11
     * @symbol ?onPlace@BannerBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onPlace(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @hash   1540607437
     * @vftbl  35
     * @symbol ?_getUpdatePacket@BannerBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   1567004005
     * @vftbl  36
     * @symbol ?_onUpdatePacket@BannerBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -1650909577
     * @symbol ??0BannerBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI BannerBlockActor(class BlockPos const &);
    /**
     * @hash   2017967735
     * @symbol ?getBaseColorInt@BannerBlockActor@@QEBAEXZ
     */
    MCAPI unsigned char getBaseColorInt() const;
    /**
     * @hash   -520946042
     * @symbol ?setItemValues@BannerBlockActor@@QEAAXAEBVItemStackBase@@@Z
     */
    MCAPI void setItemValues(class ItemStackBase const &);
    /**
     * @hash   1298065597
     * @symbol ?MAX_PATTERNS@BannerBlockActor@@2HB
     */
    MCAPI static int const MAX_PATTERNS;
    /**
     * @hash   -1148192961
     * @symbol ?TAG_BASE_COLOR@BannerBlockActor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_BASE_COLOR;
    /**
     * @hash   -374263991
     * @symbol ?TAG_COLOR@BannerBlockActor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_COLOR;
    /**
     * @hash   -1534808381
     * @symbol ?TAG_PATTERN@BannerBlockActor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_PATTERN;
    /**
     * @hash   -1342246725
     * @symbol ?TAG_PATTERNS@BannerBlockActor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_PATTERNS;
    /**
     * @hash   -851519159
     * @symbol ?TAG_TYPE@BannerBlockActor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_TYPE;
    /**
     * @hash   -435180442
     * @symbol ?getBannerType@BannerBlockActor@@SA?AW4BannerBlockType@@PEBVCompoundTag@@@Z
     */
    MCAPI static enum BannerBlockType getBannerType(class CompoundTag const *);
    /**
     * @hash   1880222055
     * @symbol ?getBaseColor@BannerBlockActor@@SAHAEBVItemStack@@@Z
     */
    MCAPI static int getBaseColor(class ItemStack const &);
    /**
     * @hash   1846776754
     * @symbol ?getPatternCount@BannerBlockActor@@SAHPEBVCompoundTag@@@Z
     */
    MCAPI static int getPatternCount(class CompoundTag const *);
    /**
     * @hash   -306520475
     * @symbol ?isDefaultBanner@BannerBlockActor@@SA_NAEBVItemStackBase@@@Z
     */
    MCAPI static bool isDefaultBanner(class ItemStackBase const &);
    /**
     * @hash   1237217992
     * @symbol ?removeLastPattern@BannerBlockActor@@SA_NAEAVItemStack@@AEAVPlayer@@@Z
     */
    MCAPI static bool removeLastPattern(class ItemStack &, class Player &);

};