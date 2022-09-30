/**
 * @file  ShieldItem.hpp
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
 * @brief MC class ShieldItem.
 *
 */
class ShieldItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIELDITEM
public:
    class ShieldItem& operator=(class ShieldItem const &) = delete;
    ShieldItem(class ShieldItem const &) = delete;
    ShieldItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ShieldItem();
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
     * @hash   -1550008940
     * @vftbl  50
     * @symbol ?isHandEquipped@ShieldItem@@UEBA_NXZ
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
     * @hash   -735137292
     * @vftbl  62
     * @symbol ?isValidRepairItem@ShieldItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @hash   97109072
     * @vftbl  63
     * @symbol ?getEnchantSlot@ShieldItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
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
     * @hash   -1473303006
     * @vftbl  85
     * @symbol ?use@ShieldItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   -639649528
     * @vftbl  86
     * @symbol ?dispense@ShieldItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   -2059562790
     * @vftbl  90
     * @symbol ?hurtActor@ShieldItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   1501992995
     * @vftbl  99
     * @symbol ?readUserData@ShieldItem@@UEBAXAEAVItemStackBase@@AEAVIDataInput@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual void readUserData(class ItemStackBase &, class IDataInput &, class ReadOnlyBinaryStream &) const;
    /**
     * @hash   1887251795
     * @vftbl  100
     * @symbol ?writeUserData@ShieldItem@@UEBAXAEBVItemStackBase@@AEAVIDataOutput@@@Z
     */
    virtual void writeUserData(class ItemStackBase const &, class IDataOutput &) const;
    /**
     * @hash   306729292
     * @vftbl  102
     * @symbol ?inventoryTick@ShieldItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @hash   1965016270
     * @vftbl  104
     * @symbol ?getCooldownType@ShieldItem@@UEBAAEBVHashedString@@XZ
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @hash   -477153091
     * @vftbl  105
     * @symbol ?getCooldownTime@ShieldItem@@UEBAHXZ
     */
    virtual int getCooldownTime() const;
    /**
     * @hash   137080580
     * @vftbl  110
     * @symbol ?getInHandUpdateType@ShieldItem@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemInstance@@1_N2@Z
     */
    virtual enum class InHandUpdateType getInHandUpdateType(class Player const &, class ItemInstance const &, class ItemInstance const &, bool, bool) const;
    /**
     * @hash   -936681316
     * @vftbl  111
     * @symbol ?getInHandUpdateType@ShieldItem@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
     */
    virtual enum class InHandUpdateType getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;
    /**
     * @hash   -437856646
     * @symbol ??0ShieldItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI ShieldItem(std::string const &, int);
    /**
     * @hash   906200783
     * @symbol ?playBlockSound@ShieldItem@@QEBAXPEAVPlayer@@@Z
     */
    MCAPI void playBlockSound(class Player *) const;
    /**
     * @hash   546911347
     * @symbol ?playBreakSound@ShieldItem@@QEBAXPEAVPlayer@@@Z
     */
    MCAPI void playBreakSound(class Player *) const;
    /**
     * @hash   1455609359
     * @symbol ?EFFECTIVE_BLOCK_DELAY@ShieldItem@@2HB
     */
    MCAPI static int const EFFECTIVE_BLOCK_DELAY;
    /**
     * @hash   -1712844843
     * @symbol ?IN_HAND_BLOCK_DURATION@ShieldItem@@2HB
     */
    MCAPI static int const IN_HAND_BLOCK_DURATION;
    /**
     * @hash   -256107433
     * @symbol ?TIMESTAMP_TAG@ShieldItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TIMESTAMP_TAG;

//private:
    /**
     * @hash   29309278
     * @symbol ?_getInHandUpdateType@ShieldItem@@AEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
     */
    MCAPI enum class InHandUpdateType _getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;

private:

};