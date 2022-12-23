/**
 * @file  PotionItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @hash   1306702352
     */
    virtual ~PotionItem();
    /**
     * @vftbl  7
     * @hash   -1253298233
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -234427292
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -231656729
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -229809687
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  50
     * @symbol ?isGlint@PotionItem@@MEBA_NAEBVItemStackBase@@@Z
     * @hash   -1141135898
     */
    virtual bool isGlint(class ItemStackBase const &) const;
    /**
     * @vftbl  51
     * @hash   -119910688
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -118063646
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  56
     * @symbol ?isDestructive@PotionItem@@UEBA_NH@Z
     * @hash   739984755
     */
    virtual bool isDestructive(int) const;
    /**
     * @vftbl  60
     * @symbol ?appendFormattedHovertext@PotionItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   363953033
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  66
     * @hash   -86663932
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  67
     * @symbol ?isValidAuxValue@PotionItem@@UEBA_NH@Z
     * @hash   -33450324
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -62652386
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -69186225
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -275840522
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -255523060
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  84
     * @symbol ?use@PotionItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   454617272
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  85
     * @symbol ?dispense@PotionItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   -1170127918
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  86
     * @symbol ?useTimeDepleted@PotionItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     * @hash   630269270
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @vftbl  95
     * @symbol ?buildDescriptionId@PotionItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   1482889764
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  96
     * @symbol ?buildEffectDescriptionName@PotionItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
     * @hash   -504421931
     */
    virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /**
     * @vftbl  117
     * @symbol ?setIconInfo@PotionItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -2107399532
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @vftbl  118
     * @symbol ?getIconInfo@PotionItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
     * @hash   -738546707
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl  132
     * @symbol ?_useOn@PotionItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     * @hash   1380962452
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @vftbl  133
     * @symbol ?getPotionType@PotionItem@@UEBA?AW4PotionType@Potion@@XZ
     * @hash   -31331883
     */
    virtual enum class Potion::PotionType getPotionType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POTIONITEM
    /**
     * @symbol ?uniqueAuxValues@PotionItem@@UEBA_NXZ
     * @hash   -1718705897
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @symbol ??0PotionItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   740977444
     */
    MCAPI PotionItem(std::string const &, int);
    /**
     * @symbol ?applyEffect@PotionItem@@SAXPEAVThrownPotion@@AEBVItemStack@@@Z
     * @hash   1053250144
     */
    MCAPI static void applyEffect(class ThrownPotion *, class ItemStack const &);
    /**
     * @symbol ?isDestructivePotion@PotionItem@@SA_NW4PotionVariant@Potion@@@Z
     * @hash   2097858131
     */
    MCAPI static bool isDestructivePotion(enum class Potion::PotionVariant);

};