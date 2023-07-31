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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@BannerBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 2
     * @symbol ?save\@BannerBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const;
    /**
     * @vftbl 7
     * @symbol ?tick\@BannerBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&);
    /**
     * @vftbl 11
     * @symbol ?onPlace\@BannerBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onPlace(class BlockSource&);
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@BannerBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@BannerBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /**
     * @symbol ?getBaseColorInt\@BannerBlockActor\@\@QEBAEXZ
     */
    MCAPI unsigned char getBaseColorInt() const;
    /**
     * @symbol ?setItemValues\@BannerBlockActor\@\@QEAAXAEBVItemStackBase\@\@\@Z
     */
    MCAPI void setItemValues(class ItemStackBase const&);
    /**
     * @symbol ?getBannerType\@BannerBlockActor\@\@SA?AW4BannerBlockType\@\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI static enum class BannerBlockType getBannerType(class CompoundTag const*);
    /**
     * @symbol ?getBaseColor\@BannerBlockActor\@\@SAHAEBVItemStack\@\@\@Z
     */
    MCAPI static int getBaseColor(class ItemStack const&);
    /**
     * @symbol ?getPatternCount\@BannerBlockActor\@\@SAHPEBVCompoundTag\@\@\@Z
     */
    MCAPI static int getPatternCount(class CompoundTag const*);
    /**
     * @symbol ?isDefaultBanner\@BannerBlockActor\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool isDefaultBanner(class ItemStackBase const&);
    /**
     * @symbol ?removeLastPattern\@BannerBlockActor\@\@SA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI static bool removeLastPattern(class ItemStack&, class Player&);
    /**
     * @symbol ?MAX_PATTERNS\@BannerBlockActor\@\@2HB
     */
    MCAPI static int const MAX_PATTERNS;
    /**
     * @symbol
     * ?TAG_BASE_COLOR\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_BASE_COLOR;
    /**
     * @symbol
     * ?TAG_COLOR\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_COLOR;
    /**
     * @symbol
     * ?TAG_PATTERN\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_PATTERN;
    /**
     * @symbol
     * ?TAG_PATTERNS\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_PATTERNS;
    /**
     * @symbol
     * ?TAG_TYPE\@BannerBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_TYPE;
    // NOLINTEND
};
