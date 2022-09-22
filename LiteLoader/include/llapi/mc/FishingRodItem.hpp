/**
 * @file  FishingRodItem.hpp
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
 * @brief MC class FishingRodItem.
 *
 */
class FishingRodItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISHINGRODITEM
public:
    class FishingRodItem& operator=(class FishingRodItem const &) = delete;
    FishingRodItem(class FishingRodItem const &) = delete;
    FishingRodItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FishingRodItem();
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
     * @hash   -525389024
     * @vftbl  50
     * @symbol ?isHandEquipped@FishingRodItem@@UEBA_NXZ
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
     * @hash   837906668
     * @vftbl  60
     * @symbol ?requiresInteract@FishingRodItem@@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @hash   -1504871076
     * @vftbl  63
     * @symbol ?getEnchantSlot@FishingRodItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @hash   -793379191
     * @vftbl  64
     * @symbol ?getEnchantValue@FishingRodItem@@UEBAHXZ
     */
    virtual int getEnchantValue() const;
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
     * @hash   1443044974
     * @vftbl  85
     * @symbol ?use@FishingRodItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   431459534
     * @vftbl  90
     * @symbol ?hurtActor@FishingRodItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   353032715
     * @vftbl  94
     * @symbol ?mineBlock@FishingRodItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   1132475243
     * @vftbl  118
     * @symbol ?getInteractText@FishingRodItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @hash   -1322851835
     * @vftbl  119
     * @symbol ?getAnimationFrameFor@FishingRodItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @hash   190702483
     * @vftbl  122
     * @symbol ?getIcon@FishingRodItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   -1082996820
     * @vftbl  124
     * @symbol ?setIcon@FishingRodItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @hash   769066990
     * @symbol ??0FishingRodItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI FishingRodItem(std::string const &, int);

};