/**
 * @file  ItemActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
    LLAPI ItemStack* getItemStack();
    LLAPI int getDespawnTime();
    LLAPI bool setDespawnTime(int);
    LLAPI int getLatestSpawnTime();
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMACTOR
public:
    class ItemActor& operator=(class ItemActor const &) = delete;
    ItemActor(class ItemActor const &) = delete;
    ItemActor() = delete;
#endif

public:
    /**
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@ItemActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~ItemActor();
    /**
     * @vftbl  21
     * @symbol  ?isRuntimePredictedMovementEnabled\@ItemActor\@\@UEBA_NXZ
     */
    virtual bool isRuntimePredictedMovementEnabled() const;
    /**
     * @vftbl  40
     * @symbol  ?isFireImmune\@ItemActor\@\@UEBA_NXZ
     */
    virtual bool isFireImmune() const;
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  48
     * @symbol  ?tryCreateAddActorPacket\@ItemActor\@\@UEAA?AV?$unique_ptr\@VAddActorBasePacket\@\@U?$default_delete\@VAddActorBasePacket\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /**
     * @vftbl  49
     * @symbol  ?normalTick\@ItemActor\@\@UEAAXXZ
     */
    virtual void normalTick();
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
     * @vftbl  90
     * @symbol  ?playerTouch\@ItemActor\@\@UEAAXAEAVPlayer\@\@\@Z
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
     * @vftbl  135
     * @symbol  ?isInvulnerableTo\@ItemActor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  142
     * @symbol  ?handleEntityEvent\@ItemActor\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl  170
     * @symbol  ?getSourceUniqueID\@ItemActor\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl  174
     * @symbol  ?getLiquidAABB\@ItemActor\@\@UEBA?AVAABB\@\@W4MaterialType\@\@\@Z
     */
    virtual class AABB getLiquidAABB(enum class MaterialType) const;
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
     * @vftbl  196
     * @symbol  ?canSynchronizeNewEntity\@ItemActor\@\@UEBA_NXZ
     */
    virtual bool canSynchronizeNewEntity() const;
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
     * @vftbl  263
     * @symbol  ?_hurt\@ItemActor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@ItemActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@ItemActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMACTOR
    /**
     * @symbol  ?canMakeStepSound\@ItemActor\@\@UEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
#endif
    /**
     * @symbol  ??0ItemActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI ItemActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol  ?postNormalTick\@ItemActor\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @symbol  ?setSourceEntity\@ItemActor\@\@QEAAXPEBVActor\@\@\@Z
     */
    MCAPI void setSourceEntity(class Actor const *);
    /**
     * @symbol  ?getLiquidAABB\@ItemActor\@\@SA?AVAABB\@\@AEBUAABBShapeComponent\@\@\@Z
     */
    MCAPI static class AABB getLiquidAABB(struct AABBShapeComponent const &);
    /**
     * @symbol  ?tryGetFromEntity\@ItemActor\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class ItemActor * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @symbol  ?_addComponents\@ItemActor\@\@AEAAXXZ
     */
    MCAPI void _addComponents();
    /**
     * @symbol  ?_dropContents\@ItemActor\@\@AEAAXXZ
     */
    MCAPI void _dropContents();
    /**
     * @symbol  ?_merge\@ItemActor\@\@AEAA_NPEAV1\@\@Z
     */
    MCAPI bool _merge(class ItemActor *);
    /**
     * @symbol  ?_validateItem\@ItemActor\@\@AEAAXXZ
     */
    MCAPI void _validateItem();

private:
    /**
     * @symbol  ?LIFETIME\@ItemActor\@\@0HB
     */
    MCAPI static int const LIFETIME;

};