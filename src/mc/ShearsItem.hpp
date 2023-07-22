/**
 * @file  ShearsItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShearsItem.
 *
 */
class ShearsItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHEARSITEM
public:
    class ShearsItem& operator=(class ShearsItem const &) = delete;
    ShearsItem(class ShearsItem const &) = delete;
    ShearsItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ShearsItem();
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
     * @vftbl  44
     * @symbol  ?canDestroySpecial\@ShearsItem\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool canDestroySpecial(class Block const &) const;
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
     * @vftbl  62
     * @symbol  ?getEnchantSlot\@ShearsItem\@\@UEBAHXZ
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
     * @vftbl  85
     * @symbol  ?dispense\@ShearsItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  88
     * @symbol  ?getDestroySpeed\@ShearsItem\@\@UEBAMAEBVItemStackBase\@\@AEBVBlock\@\@\@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @vftbl  89
     * @symbol  ?hurtActor\@ShearsItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl  93
     * @symbol  ?mineBlock\@ShearsItem\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @vftbl  132
     * @symbol  ?_useOn\@ShearsItem\@\@UEBA_NAEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @symbol  ??0ShearsItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI ShearsItem(std::string const &, int);

//private:
    /**
     * @symbol  ?_spawnLoot\@ShearsItem\@\@CAXAEAVLevel\@\@PEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void _spawnLoot(class Level &, class Actor *, std::string const &);
    /**
     * @symbol  ?_tryShearMooshroom\@ShearsItem\@\@CA_NAEAVLevel\@\@AEAVBlockSource\@\@PEAVActor\@\@\@Z
     */
    MCAPI static bool _tryShearMooshroom(class Level &, class BlockSource &, class Actor *);
    /**
     * @symbol  ?_tryShearSheep\@ShearsItem\@\@CA_NAEAVLevel\@\@PEAVActor\@\@\@Z
     */
    MCAPI static bool _tryShearSheep(class Level &, class Actor *);
    /**
     * @symbol  ?_tryShearSnowGolem\@ShearsItem\@\@CA_NAEAVLevel\@\@PEAVActor\@\@\@Z
     */
    MCAPI static bool _tryShearSnowGolem(class Level &, class Actor *);

private:

};