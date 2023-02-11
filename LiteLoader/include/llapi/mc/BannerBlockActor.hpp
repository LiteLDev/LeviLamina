/**
 * @file  BannerBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~BannerBlockActor();
    /**
     * @hash   -906619333
     * @vftbl  1
     * @symbol  ?load\@BannerBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   403061098
     * @vftbl  2
     * @symbol  ?save\@BannerBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -762430396
     * @vftbl  7
     * @symbol  ?tick\@BannerBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @hash   -684750487
     * @vftbl  11
     * @symbol  ?onPlace\@BannerBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onPlace(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  31
     * @symbol  __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol  __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @hash   1744247181
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@BannerBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -1776342651
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@BannerBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -699273561
     * @symbol  ??0BannerBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BannerBlockActor(class BlockPos const &);
    /**
     * @hash   -1325378921
     * @symbol  ?getBaseColorInt\@BannerBlockActor\@\@QEBAEXZ
     */
    MCAPI unsigned char getBaseColorInt() const;
    /**
     * @hash   430874486
     * @symbol  ?setItemValues\@BannerBlockActor\@\@QEAAXAEBVItemStackBase\@\@\@Z
     */
    MCAPI void setItemValues(class ItemStackBase const &);
    /**
     * @hash   -1921500415
     * @symbol  ?MAX_PATTERNS\@BannerBlockActor\@\@2HB
     */
    MCAPI static int const MAX_PATTERNS;
    /**
     * @hash   855146079
     * @symbol  ?TAG_BASE_COLOR\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_BASE_COLOR;
    /**
     * @hash   1629075049
     * @symbol  ?TAG_COLOR\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_COLOR;
    /**
     * @hash   468530659
     * @symbol  ?TAG_PATTERN\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_PATTERN;
    /**
     * @hash   661092315
     * @symbol  ?TAG_PATTERNS\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_PATTERNS;
    /**
     * @hash   1151819881
     * @symbol  ?TAG_TYPE\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_TYPE;
    /**
     * @hash   516440198
     * @symbol  ?getBannerType\@BannerBlockActor\@\@SA?AW4BannerBlockType\@\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI static enum class BannerBlockType getBannerType(class CompoundTag const *);
    /**
     * @hash   -1463124601
     * @symbol  ?getBaseColor\@BannerBlockActor\@\@SAHAEBVItemStack\@\@\@Z
     */
    MCAPI static int getBaseColor(class ItemStack const &);
    /**
     * @hash   -1496569902
     * @symbol  ?getPatternCount\@BannerBlockActor\@\@SAHPEBVCompoundTag\@\@\@Z
     */
    MCAPI static int getPatternCount(class CompoundTag const *);
    /**
     * @hash   645346181
     * @symbol  ?isDefaultBanner\@BannerBlockActor\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool isDefaultBanner(class ItemStackBase const &);
    /**
     * @hash   -2105867272
     * @symbol  ?removeLastPattern\@BannerBlockActor\@\@SA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI static bool removeLastPattern(class ItemStack &, class Player &);

};