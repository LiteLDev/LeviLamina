/**
 * @file  SparklerItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ChemistryStickItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SparklerItem.
 *
 */
class SparklerItem : public ChemistryStickItem {

#define AFTER_EXTRA
// Add Member There
public:
struct ColorInfo {
    ColorInfo() = delete;
    ColorInfo(ColorInfo const&) = delete;
    ColorInfo(ColorInfo const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPARKLERITEM
public:
    class SparklerItem& operator=(class SparklerItem const &) = delete;
    SparklerItem(class SparklerItem const &) = delete;
    SparklerItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SparklerItem();
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
     * @hash   1137032865
     * @vftbl  50
     * @symbol ?isHandEquipped@SparklerItem@@UEBA_NXZ
     */
    virtual bool isHandEquipped() const;
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
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
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
     * @hash   75423899
     * @vftbl  96
     * @symbol ?buildDescriptionId@SparklerItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   581960847
     * @vftbl  102
     * @symbol ?inventoryTick@SparklerItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @hash   -1632799158
     * @vftbl  121
     * @symbol ?getLightEmission@SparklerItem@@UEBA?AUBrightness@@H@Z
     */
    virtual struct Brightness getLightEmission(int) const;
    /**
     * @hash   -409228590
     * @vftbl  122
     * @symbol ?getIcon@SparklerItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   -1717855491
     * @vftbl  124
     * @symbol ?setIcon@SparklerItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @hash   707056109
     * @symbol ??0SparklerItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI SparklerItem(std::string const &, int);
    /**
     * @hash   1907907689
     * @symbol ?COLORS@SparklerItem@@2QBUColorInfo@1@B
     */
    MCAPI static struct SparklerItem::ColorInfo const COLORS[];
    /**
     * @hash   -1343149663
     * @symbol ?MAX_ACTIVE_TICKS@SparklerItem@@2HB
     */
    MCAPI static int const MAX_ACTIVE_TICKS;

};