/**
 * @file  MC/ThrownTrident.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "AbstractArrow.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ThrownTrident.
 *
 */
class ThrownTrident : public AbstractArrow {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWNTRIDENT
public:
    class ThrownTrident& operator=(class ThrownTrident const &) = delete;
    ThrownTrident(class ThrownTrident const &) = delete;
    ThrownTrident() = delete;
#endif

public:
    /**
     * @hash   115425146
     * @vftbl  7
     * @symbol ?outOfWorld@ThrownTrident@@UEAAXXZ
     */
    virtual void outOfWorld();
    /**
     * @hash   589202243
     * @vftbl  8
     * @symbol ?reloadHardcoded@ThrownTrident@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~ThrownTrident();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   2073188913
     * @vftbl  48
     * @symbol ?normalTick@ThrownTrident@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @hash   494424392
     * @vftbl  88
     * @symbol ?playerTouch@ThrownTrident@@UEAAXAEAVPlayer@@@Z
     */
    virtual void playerTouch(class Player &);
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @symbol __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @hash   -528951844
     * @vftbl  129
     * @symbol ?isEnchanted@ThrownTrident@@UEBA_NXZ
     */
    virtual bool isEnchanted() const;
    /**
     * @hash   -814871513
     * @vftbl  149
     * @symbol ?despawn@ThrownTrident@@UEAAXXZ
     */
    virtual void despawn();
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  221
     * @symbol __unk_vfn_221
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   1460906182
     * @vftbl  271
     * @symbol ?_hurt@ThrownTrident@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   1688213990
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@ThrownTrident@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -2076598329
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@ThrownTrident@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -954133132
     * @vftbl  286
     * @symbol ?shoot@ThrownTrident@@UEAAXAEBVVec3@@MM0@Z
     */
    virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /**
     * @hash   691037095
     * @vftbl  288
     * @symbol ?_getPickupItem@ThrownTrident@@MEBA?AVItemStack@@XZ
     */
    virtual class ItemStack _getPickupItem() const;
    /**
     * @hash   -1362921354
     * @symbol ??0ThrownTrident@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI ThrownTrident(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -297726862
     * @symbol ?getPickupItem@ThrownTrident@@QEBA?AVItemStack@@XZ
     */
    MCAPI class ItemStack getPickupItem() const;
    /**
     * @hash   563611654
     * @symbol ?returnWithLoyalty@ThrownTrident@@QEAAXH@Z
     */
    MCAPI void returnWithLoyalty(int);
    /**
     * @hash   1176923730
     * @symbol ?setTridentItem@ThrownTrident@@QEAAXAEBVItemStack@@@Z
     */
    MCAPI void setTridentItem(class ItemStack const &);

};