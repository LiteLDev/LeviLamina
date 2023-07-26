#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class BannerBlockActor : public ::BlockActor {

public:
    // prevent constructor by default
    BannerBlockActor& operator=(BannerBlockActor const&) = delete;
    BannerBlockActor(BannerBlockActor const&)            = delete;
    BannerBlockActor()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@BannerBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@BannerBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?tick\@BannerBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?onPlace\@BannerBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onPlace(class BlockSource&); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30(); // NOLINT
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31(); // NOLINT
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32(); // NOLINT
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33(); // NOLINT
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36(); // NOLINT
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
    /**
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@BannerBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@BannerBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?getBaseColorInt\@BannerBlockActor\@\@QEBAEXZ
     */
    MCAPI unsigned char getBaseColorInt() const; // NOLINT
    /**
     * @symbol ?setItemValues\@BannerBlockActor\@\@QEAAXAEBVItemStackBase\@\@\@Z
     */
    MCAPI void setItemValues(class ItemStackBase const&); // NOLINT
    /**
     * @symbol ?getBannerType\@BannerBlockActor\@\@SA?AW4BannerBlockType\@\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI static enum class BannerBlockType getBannerType(class CompoundTag const*); // NOLINT
    /**
     * @symbol ?getBaseColor\@BannerBlockActor\@\@SAHAEBVItemStack\@\@\@Z
     */
    MCAPI static int getBaseColor(class ItemStack const&); // NOLINT
    /**
     * @symbol ?getPatternCount\@BannerBlockActor\@\@SAHPEBVCompoundTag\@\@\@Z
     */
    MCAPI static int getPatternCount(class CompoundTag const*); // NOLINT
    /**
     * @symbol ?isDefaultBanner\@BannerBlockActor\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool isDefaultBanner(class ItemStackBase const&); // NOLINT
    /**
     * @symbol ?removeLastPattern\@BannerBlockActor\@\@SA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI static bool removeLastPattern(class ItemStack&, class Player&); // NOLINT
    /**
     * @symbol ?MAX_PATTERNS\@BannerBlockActor\@\@2HB
     */
    MCAPI static int const MAX_PATTERNS; // NOLINT
    /**
     * @symbol
     * ?TAG_BASE_COLOR\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_BASE_COLOR; // NOLINT
    /**
     * @symbol
     * ?TAG_COLOR\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_COLOR; // NOLINT
    /**
     * @symbol
     * ?TAG_PATTERN\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_PATTERN; // NOLINT
    /**
     * @symbol
     * ?TAG_PATTERNS\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_PATTERNS; // NOLINT
    /**
     * @symbol
     * ?TAG_TYPE\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_TYPE; // NOLINT
};
