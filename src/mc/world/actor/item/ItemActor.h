#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"

class ItemActor : public ::Actor {

public:
    // prevent constructor by default
    ItemActor& operator=(ItemActor const&) = delete;
    ItemActor(ItemActor const&)            = delete;
    ItemActor()                            = delete;

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@ItemActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 20
     * @symbol ?isRuntimePredictedMovementEnabled\@ItemActor\@\@UEBA_NXZ
     */
    virtual bool isRuntimePredictedMovementEnabled() const; // NOLINT
    /**
     * @vftbl 34
     * @symbol ?isFireImmune\@ItemActor\@\@UEBA_NXZ
     */
    virtual bool isFireImmune() const; // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 42
     * @symbol
     * ?tryCreateAddActorPacket\@ItemActor\@\@UEAA?AV?$unique_ptr\@VAddActorBasePacket\@\@U?$default_delete\@VAddActorBasePacket\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket(); // NOLINT
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55(); // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 78
     * @symbol ?playerTouch\@ItemActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player&); // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93(); // NOLINT
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95(); // NOLINT
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96(); // NOLINT
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98(); // NOLINT
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@ItemActor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const; // NOLINT
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@ItemActor\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int); // NOLINT
    /**
     * @vftbl 155
     * @symbol ?getSourceUniqueID\@ItemActor\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const; // NOLINT
    /**
     * @vftbl 159
     * @symbol ?getLiquidAABB\@ItemActor\@\@UEBA?AVAABB\@\@W4MaterialType\@\@\@Z
     */
    virtual class AABB getLiquidAABB(enum class MaterialType) const; // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
    /**
     * @vftbl 181
     * @symbol ?canSynchronizeNewEntity\@ItemActor\@\@UEBA_NXZ
     */
    virtual bool canSynchronizeNewEntity() const; // NOLINT
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202(); // NOLINT
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203(); // NOLINT
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219(); // NOLINT
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222(); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 240
     * @symbol ?_hurt\@ItemActor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool); // NOLINT
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@ItemActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@ItemActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMACTOR
    /**
     * @symbol ?canMakeStepSound\@ItemActor\@\@UEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const; // NOLINT
#endif
    /**
     * @symbol
     * ??0ItemActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI
    ItemActor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?postNormalTick\@ItemActor\@\@QEAAXXZ
     */
    MCAPI void postNormalTick(); // NOLINT
    /**
     * @symbol ?setSourceEntity\@ItemActor\@\@QEAAXPEBVActor\@\@\@Z
     */
    MCAPI void setSourceEntity(class Actor const*); // NOLINT
    /**
     * @symbol ?getLiquidAABB\@ItemActor\@\@SA?AVAABB\@\@AEBUAABBShapeComponent\@\@\@Z
     */
    MCAPI static class AABB getLiquidAABB(struct AABBShapeComponent const&); // NOLINT
    /**
     * @symbol ?tryGetFromEntity\@ItemActor\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class ItemActor* tryGetFromEntity(class EntityContext&, bool); // NOLINT

    // private:
    /**
     * @symbol ?_addComponents\@ItemActor\@\@AEAAXXZ
     */
    MCAPI void _addComponents(); // NOLINT
    /**
     * @symbol ?_dropContents\@ItemActor\@\@AEAAXXZ
     */
    MCAPI void _dropContents(); // NOLINT
    /**
     * @symbol ?_merge\@ItemActor\@\@AEAA_NPEAV1\@\@Z
     */
    MCAPI bool _merge(class ItemActor*); // NOLINT
    /**
     * @symbol ?_validateItem\@ItemActor\@\@AEAAXXZ
     */
    MCAPI void _validateItem(); // NOLINT

private:
    /**
     * @symbol ?LIFETIME\@ItemActor\@\@0HB
     */
    MCAPI static int const LIFETIME; // NOLINT
};
