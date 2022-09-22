/**
 * @file  ShearsItem.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~ShearsItem();
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
     * @hash   -2109957160
     * @vftbl  45
     * @symbol ?canDestroySpecial@ShearsItem@@UEBA_NAEBVBlock@@@Z
     */
    virtual bool canDestroySpecial(class Block const &) const;
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
     * @hash   549027511
     * @vftbl  63
     * @symbol ?getEnchantSlot@ShearsItem@@UEBAHXZ
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
     * @hash   -1166421535
     * @vftbl  86
     * @symbol ?dispense@ShearsItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   69637957
     * @vftbl  89
     * @symbol ?getDestroySpeed@ShearsItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @hash   -1949707069
     * @vftbl  90
     * @symbol ?hurtActor@ShearsItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   -450614842
     * @vftbl  94
     * @symbol ?mineBlock@ShearsItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   2121091605
     * @vftbl  135
     * @symbol ?_useOn@ShearsItem@@UEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;

};