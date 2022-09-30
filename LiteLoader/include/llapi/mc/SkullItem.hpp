/**
 * @file  SkullItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SkullItem.
 *
 */
class SkullItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKULLITEM
public:
    class SkullItem& operator=(class SkullItem const &) = delete;
    SkullItem(class SkullItem const &) = delete;
    SkullItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SkullItem();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   -235230394
     * @vftbl  43
     * @symbol ?getBlockShape@SkullItem@@UEBA?AW4BlockShape@@XZ
     */
    virtual enum class BlockShape getBlockShape() const;
    /**
     * @hash   2043838884
     * @vftbl  46
     * @symbol ?getLevelDataForAuxValue@SkullItem@@UEBAHH@Z
     */
    virtual int getLevelDataForAuxValue(int) const;
    /**
     * @vftbl  52
     * @symbol __unk_vfn_52
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   1907612012
     * @vftbl  63
     * @symbol ?getEnchantSlot@SkullItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   26120390
     * @vftbl  68
     * @symbol ?isValidAuxValue@SkullItem@@UEBA_NH@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @symbol __unk_vfn_73
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   -1554883156
     * @vftbl  86
     * @symbol ?dispense@SkullItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   2006936026
     * @vftbl  96
     * @symbol ?buildDescriptionId@SkullItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   -2022730613
     * @vftbl  114
     * @symbol ?getEquipLocation@SkullItem@@UEBA?AW4ActorLocation@@XZ
     */
    virtual enum class ActorLocation getEquipLocation() const;
    /**
     * @hash   1497963500
     * @vftbl  115
     * @symbol ?getEquipSound@SkullItem@@UEBA?AW4LevelSoundEvent@@XZ
     */
    virtual enum class LevelSoundEvent getEquipSound() const;
    /**
     * @hash   1468203075
     * @vftbl  122
     * @symbol ?getIcon@SkullItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   1296093158
     * @vftbl  132
     * @symbol ?getAuxValuesDescription@SkullItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getAuxValuesDescription() const;
    /**
     * @hash   -1138762287
     * @vftbl  134
     * @symbol ?_calculatePlacePos@SkullItem@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @hash   -1644650194
     * @vftbl  135
     * @symbol ?_useOn@SkullItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @hash   -617447970
     * @symbol ??0SkullItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI SkullItem(std::string const &, int);

};