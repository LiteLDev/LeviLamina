/**
 * @file  MC/ItemActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemActor.
 *
 */
class ItemActor : public Actor {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI ItemStack* getItemStack();
    LIAPI int getDespawnTime();
    LIAPI bool setDespawnTime(int);
    LIAPI int getLatestSpawnTime();
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMACTOR
public:
    class ItemActor& operator=(class ItemActor const &) = delete;
    ItemActor(class ItemActor const &) = delete;
    ItemActor() = delete;
#endif

public:
    /**
     * @hash   -1166544437
     * @vftbl  8
     * @symbol ?reloadHardcoded@ItemActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~ItemActor();
    /**
     * @hash   869657022
     * @vftbl  19
     * @symbol ?isRuntimePredictedMovementEnabled@ItemActor@@UEBA_NXZ
     */
    virtual bool isRuntimePredictedMovementEnabled() const;
    /**
     * @hash   -1993556695
     * @vftbl  39
     * @symbol ?isFireImmune@ItemActor@@UEBA_NXZ
     */
    virtual bool isFireImmune() const;
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   1814537131
     * @vftbl  47
     * @symbol ?tryCreateAddActorPacket@ItemActor@@UEAA?AV?$unique_ptr@VAddActorBasePacket@@U?$default_delete@VAddActorBasePacket@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /**
     * @hash   -2111743415
     * @vftbl  48
     * @symbol ?normalTick@ItemActor@@UEAAXXZ
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
     * @hash   -1022665040
     * @vftbl  88
     * @symbol ?playerTouch@ItemActor@@UEAAXAEAVPlayer@@@Z
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
     * @hash   602083120
     * @vftbl  134
     * @symbol ?isInvulnerableTo@ItemActor@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @hash   -1619478764
     * @vftbl  141
     * @symbol ?handleEntityEvent@ItemActor@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @hash   303033380
     * @vftbl  171
     * @symbol ?getSourceUniqueID@ItemActor@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @hash   -57630926
     * @vftbl  175
     * @symbol ?getLiquidAABB@ItemActor@@UEBA?AVAABB@@W4MaterialType@@@Z
     */
    virtual class AABB getLiquidAABB(enum MaterialType) const;
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
     * @hash   1787221993
     * @vftbl  198
     * @symbol ?canSynchronizeNewEntity@ItemActor@@UEBA_NXZ
     */
    virtual bool canSynchronizeNewEntity() const;
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
     * @hash   -1609175954
     * @vftbl  271
     * @symbol ?_hurt@ItemActor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -907819378
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@ItemActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -2083438849
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@ItemActor@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMACTOR
    /**
     * @hash   1610238139
     * @symbol ?canMakeStepSound@ItemActor@@UEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
#endif
    /**
     * @hash   -1526408754
     * @symbol ??0ItemActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI ItemActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   2039073995
     * @symbol ?postNormalTick@ItemActor@@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @hash   -1735658989
     * @symbol ?setSourceEntity@ItemActor@@QEAAXPEBVActor@@@Z
     */
    MCAPI void setSourceEntity(class Actor const *);
    /**
     * @hash   2094099672
     * @symbol ?tryGetFromEntity@ItemActor@@SAPEAV1@AEAVEntityContext@@_N@Z
     */
    MCAPI static class ItemActor * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @hash   1046733490
     * @symbol ?_addComponents@ItemActor@@AEAAXXZ
     */
    MCAPI void _addComponents();
    /**
     * @hash   331935362
     * @symbol ?_dropContents@ItemActor@@AEAAXXZ
     */
    MCAPI void _dropContents();
    /**
     * @hash   608453481
     * @symbol ?_merge@ItemActor@@AEAA_NPEAV1@@Z
     */
    MCAPI bool _merge(class ItemActor *);
    /**
     * @hash   -1859255038
     * @symbol ?_validateItem@ItemActor@@AEAAXXZ
     */
    MCAPI void _validateItem();

private:
    /**
     * @hash   612066695
     * @symbol ?LIFETIME@ItemActor@@0HB
     */
    MCAPI static int const LIFETIME;

};