/**
 * @file  ThrownTrident.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Actor.hpp"
#include "../../AbstractArrow.hpp"

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
     * @hash   -534995030
     * @vftbl  9
     * @symbol  ?outOfWorld\@ThrownTrident\@\@UEAAXXZ
     */
    virtual void outOfWorld();
    /**
     * @hash   -61217933
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@ThrownTrident\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~ThrownTrident();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @hash   -155995784
     * @vftbl  90
     * @symbol  ?playerTouch\@ThrownTrident\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player &);
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @hash   -1179418148
     * @vftbl  130
     * @symbol  ?isEnchanted\@ThrownTrident\@\@UEBA_NXZ
     */
    virtual bool isEnchanted() const;
    /**
     * @hash   -1465353193
     * @vftbl  148
     * @symbol  ?despawn\@ThrownTrident\@\@UEAAXXZ
     */
    virtual void despawn();
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   810424502
     * @vftbl  263
     * @symbol  ?_hurt\@ThrownTrident\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   1037793814
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@ThrownTrident\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1567887287
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@ThrownTrident\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @hash   -1604491804
     * @vftbl  278
     * @symbol  ?shoot\@ThrownTrident\@\@UEAAXAEBVVec3\@\@MM0\@Z
     */
    virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /**
     * @hash   40555415
     * @vftbl  280
     * @symbol  ?_getPickupItem\@ThrownTrident\@\@MEBA?AVItemStack\@\@XZ
     */
    virtual class ItemStack _getPickupItem() const;
    /**
     * @hash   -2013403034
     * @symbol  ??0ThrownTrident\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI ThrownTrident(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol  ?doNormalTick\@ThrownTrident\@\@QEAAXXZ
     */
    MCAPI void doNormalTick();
    /**
     * @hash   -948208542
     * @symbol  ?getPickupItem\@ThrownTrident\@\@QEBA?AVItemStack\@\@XZ
     */
    MCAPI class ItemStack getPickupItem() const;
    /**
     * @hash   -86808522
     * @symbol  ?returnWithLoyalty\@ThrownTrident\@\@QEAAXH\@Z
     */
    MCAPI void returnWithLoyalty(int);
    /**
     * @hash   526565058
     * @symbol  ?setTridentItem\@ThrownTrident\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setTridentItem(class ItemStack const &);

};