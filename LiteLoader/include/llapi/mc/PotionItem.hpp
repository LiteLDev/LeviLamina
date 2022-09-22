/**
 * @file  PotionItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Potion.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PotionItem.
 *
 */
class PotionItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POTIONITEM
public:
    class PotionItem& operator=(class PotionItem const &) = delete;
    PotionItem(class PotionItem const &) = delete;
    PotionItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PotionItem();
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
     * @hash   -1850861306
     * @vftbl  51
     * @symbol ?isGlint@PotionItem@@MEBA_NAEBVItemStackBase@@@Z
     */
    virtual bool isGlint(class ItemStackBase const &) const;
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
     * @hash   30274723
     * @vftbl  57
     * @symbol ?isDestructive@PotionItem@@UEBA_NH@Z
     */
    virtual bool isDestructive(int) const;
    /**
     * @hash   -345372599
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@PotionItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   -743221860
     * @vftbl  68
     * @symbol ?isValidAuxValue@PotionItem@@UEBA_NH@Z
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
     * @hash   -255169640
     * @vftbl  85
     * @symbol ?use@PotionItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   -1879561182
     * @vftbl  86
     * @symbol ?dispense@PotionItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   -79533018
     * @vftbl  87
     * @symbol ?useTimeDepleted@PotionItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     */
    virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @hash   773533380
     * @vftbl  96
     * @symbol ?buildDescriptionId@PotionItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   -1213824443
     * @vftbl  97
     * @symbol ?buildEffectDescriptionName@PotionItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
     */
    virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /**
     * @hash   -495643255
     * @vftbl  122
     * @symbol ?getIcon@PotionItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   1141737062
     * @vftbl  124
     * @symbol ?setIcon@PotionItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @hash   671682948
     * @vftbl  135
     * @symbol ?_useOn@PotionItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @hash   -127954667
     * @vftbl  136
     * @symbol ?getPotionType@PotionItem@@UEBA?AW4PotionType@Potion@@XZ
     */
    virtual enum Potion::PotionType getPotionType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POTIONITEM
    /**
     * @hash   -1818603769
     * @symbol ?uniqueAuxValues@PotionItem@@UEBA_NXZ
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @hash   31697940
     * @symbol ??0PotionItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI PotionItem(std::string const &, int);
    /**
     * @hash   343909136
     * @symbol ?applyEffect@PotionItem@@SAXPEAVThrownPotion@@AEBVItemStack@@@Z
     */
    MCAPI static void applyEffect(class ThrownPotion *, class ItemStack const &);
    /**
     * @hash   1388132723
     * @symbol ?isDestructivePotion@PotionItem@@SA_NW4PotionVariant@Potion@@@Z
     */
    MCAPI static bool isDestructivePotion(enum Potion::PotionVariant);

};