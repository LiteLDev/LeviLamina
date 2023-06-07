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
     * @vftbl 39
     * @symbol ?isFireImmune\@ItemActor\@\@UEBA_NXZ
     */
    virtual bool isFireImmune() const;
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 47
     * @symbol ?tryCreateAddActorPacket\@ItemActor\@\@UEAA?AV?$unique_ptr\@VAddActorBasePacket\@\@U?$default_delete\@VAddActorBasePacket\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 68
     * @symbol __unk_vfn_68
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 87
     * @symbol ?playerTouch\@ItemActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player &);
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 104
     * @symbol __unk_vfn_104
     */
    virtual void __unk_vfn_104();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 132
     * @symbol ?isInvulnerableTo\@ItemActor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl 139
     * @symbol ?handleEntityEvent\@ItemActor\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 167
     * @symbol ?getSourceUniqueID\@ItemActor\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl 171
     * @symbol ?getLiquidAABB\@ItemActor\@\@UEBA?AVAABB\@\@W4MaterialType\@\@\@Z
     */
    virtual class AABB getLiquidAABB(enum class MaterialType) const;
    /**
     * @vftbl 176
     * @symbol __unk_vfn_176
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl 190
     * @symbol __unk_vfn_190
     */
    virtual void __unk_vfn_190();
    /**
     * @vftbl 193
     * @symbol ?canSynchronizeNewEntity\@ItemActor\@\@UEBA_NXZ
     */
    virtual bool canSynchronizeNewEntity() const;
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 216
     * @symbol __unk_vfn_216
     */
    virtual void __unk_vfn_216();
    /**
     * @vftbl 232
     * @symbol __unk_vfn_232
     */
    virtual void __unk_vfn_232();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 252
     * @symbol __unk_vfn_252
     */
    virtual void __unk_vfn_252();
    /**
     * @vftbl 253
     * @symbol ?_hurt\@ItemActor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 256
     * @symbol ?readAdditionalSaveData\@ItemActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 257
     * @symbol ?addAdditionalSaveData\@ItemActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
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
