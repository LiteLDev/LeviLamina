/**
 * @file  ItemActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 10
     * @symbol ?reloadHardcoded\@ItemActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 20
     * @symbol ?isRuntimePredictedMovementEnabled\@ItemActor\@\@UEBA_NXZ
     */
    virtual bool isRuntimePredictedMovementEnabled() const;
    /**
     * @vftbl 34
     * @symbol ?isFireImmune\@ItemActor\@\@UEBA_NXZ
     */
    virtual bool isFireImmune() const;
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 42
     * @symbol ?tryCreateAddActorPacket\@ItemActor\@\@UEAA?AV?$unique_ptr\@VAddActorBasePacket\@\@U?$default_delete\@VAddActorBasePacket\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /**
     * @vftbl 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl 77
     * @symbol ?playerTouch\@ItemActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player &);
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl 92
     * @symbol __unk_vfn_92
     */
    virtual void __unk_vfn_92();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 119
     * @symbol ?isInvulnerableTo\@ItemActor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl 125
     * @symbol ?handleEntityEvent\@ItemActor\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 153
     * @symbol ?getSourceUniqueID\@ItemActor\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 177
     * @symbol ?canSynchronizeNewEntity\@ItemActor\@\@UEBA_NXZ
     */
    virtual bool canSynchronizeNewEntity() const;
    /**
     * @vftbl 198
     * @symbol __unk_vfn_198
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl 199
     * @symbol __unk_vfn_199
     */
    virtual void __unk_vfn_199();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 236
     * @symbol ?_hurt\@ItemActor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 239
     * @symbol ?readAdditionalSaveData\@ItemActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 240
     * @symbol ?addAdditionalSaveData\@ItemActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMACTOR
    /**
     * @symbol ?canMakeStepSound\@ItemActor\@\@UEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
#endif
    /**
     * @symbol ??0ItemActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI ItemActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?postNormalTick\@ItemActor\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?setSourceEntity\@ItemActor\@\@QEAAXPEBVActor\@\@\@Z
     */
    MCAPI void setSourceEntity(class Actor const *);
    /**
     * @symbol ?getLiquidAABB\@ItemActor\@\@SA?AVAABB\@\@AEBUAABBShapeComponent\@\@\@Z
     */
    MCAPI static class AABB getLiquidAABB(struct AABBShapeComponent const &);
    /**
     * @symbol ?tryGetFromEntity\@ItemActor\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class ItemActor * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @symbol ?_addComponents\@ItemActor\@\@AEAAXXZ
     */
    MCAPI void _addComponents();
    /**
     * @symbol ?_dropContents\@ItemActor\@\@AEAAXXZ
     */
    MCAPI void _dropContents();
    /**
     * @symbol ?_merge\@ItemActor\@\@AEAA_NPEAV1\@\@Z
     */
    MCAPI bool _merge(class ItemActor *);
    /**
     * @symbol ?_validateItem\@ItemActor\@\@AEAAXXZ
     */
    MCAPI void _validateItem();

private:
    /**
     * @symbol ?LIFETIME\@ItemActor\@\@0HB
     */
    MCAPI static int const LIFETIME;

};
