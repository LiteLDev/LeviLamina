/**
 * @file  ShieldItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~ShieldItem();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  49
     * @symbol  ?isHandEquipped\@ShieldItem\@\@UEBA_NXZ
     */
    virtual bool isHandEquipped() const;
    /**
     * @vftbl  51
     * @symbol  __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @symbol  __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  61
     * @symbol  ?isValidRepairItem\@ShieldItem\@\@UEBA_NAEBVItemStackBase\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vftbl  62
     * @symbol  ?getEnchantSlot\@ShieldItem\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  66
     * @symbol  __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @symbol  __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @symbol  __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol  __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol  __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @symbol  __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  84
     * @symbol  ?use\@ShieldItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  85
     * @symbol  ?dispense\@ShieldItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  89
     * @symbol  ?hurtActor\@ShieldItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl  98
     * @symbol  ?readUserData\@ShieldItem\@\@UEBAXAEAVItemStackBase\@\@AEAVIDataInput\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual void readUserData(class ItemStackBase &, class IDataInput &, class ReadOnlyBinaryStream &) const;
    /**
     * @vftbl  99
     * @symbol  ?writeUserData\@ShieldItem\@\@UEBAXAEBVItemStackBase\@\@AEAVIDataOutput\@\@\@Z
     */
    virtual void writeUserData(class ItemStackBase const &, class IDataOutput &) const;
    /**
     * @vftbl  101
     * @symbol  ?inventoryTick\@ShieldItem\@\@UEBA_NAEAVItemStack\@\@AEAVLevel\@\@AEAVActor\@\@H_N\@Z
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @vftbl  103
     * @symbol  ?getCooldownType\@ShieldItem\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @vftbl  104
     * @symbol  ?getCooldownTime\@ShieldItem\@\@UEBAHXZ
     */
    virtual int getCooldownTime() const;
    /**
     * @vftbl  109
     * @symbol  ?getInHandUpdateType\@ShieldItem\@\@UEBA?AW4InHandUpdateType\@\@AEBVPlayer\@\@AEBVItemInstance\@\@1_N2\@Z
     */
    virtual enum class InHandUpdateType getInHandUpdateType(class Player const &, class ItemInstance const &, class ItemInstance const &, bool, bool) const;
    /**
     * @vftbl  110
     * @symbol  ?getInHandUpdateType\@ShieldItem\@\@UEBA?AW4InHandUpdateType\@\@AEBVPlayer\@\@AEBVItemStack\@\@1_N2\@Z
     */
    virtual enum class InHandUpdateType getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;
    /**
     * @symbol  ??0ShieldItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI ShieldItem(std::string const &, int);
    /**
     * @symbol  ?playBlockSound\@ShieldItem\@\@QEBAXPEAVPlayer\@\@\@Z
     */
    MCAPI void playBlockSound(class Player *) const;
    /**
     * @symbol  ?playBreakSound\@ShieldItem\@\@QEBAXPEAVPlayer\@\@\@Z
     */
    MCAPI void playBreakSound(class Player *) const;
    /**
     * @symbol  ?EFFECTIVE_BLOCK_DELAY\@ShieldItem\@\@2HB
     */
    MCAPI static int const EFFECTIVE_BLOCK_DELAY;
    /**
     * @symbol  ?IN_HAND_BLOCK_DURATION\@ShieldItem\@\@2HB
     */
    MCAPI static int const IN_HAND_BLOCK_DURATION;
    /**
     * @symbol  ?TIMESTAMP_TAG\@ShieldItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TIMESTAMP_TAG;

//private:
    /**
     * @symbol  ?_getInHandUpdateType\@ShieldItem\@\@AEBA?AW4InHandUpdateType\@\@AEBVPlayer\@\@AEBVItemStack\@\@1_N2\@Z
     */
    MCAPI enum class InHandUpdateType _getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;

private:

};