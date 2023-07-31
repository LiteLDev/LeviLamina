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
    // NOLINTBEGIN
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@ItemActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&);
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
     * @symbol
     * ?tryCreateAddActorPacket\@ItemActor\@\@UEAA?AV?$unique_ptr\@VAddActorBasePacket\@\@U?$default_delete\@VAddActorBasePacket\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 78
     * @symbol ?playerTouch\@ItemActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player&);
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@ItemActor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@ItemActor\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 155
     * @symbol ?getSourceUniqueID\@ItemActor\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl 159
     * @symbol ?getLiquidAABB\@ItemActor\@\@UEBA?AVAABB\@\@W4MaterialType\@\@\@Z
     */
    virtual class AABB getLiquidAABB(enum class MaterialType) const;
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 181
     * @symbol ?canSynchronizeNewEntity\@ItemActor\@\@UEBA_NXZ
     */
    virtual bool canSynchronizeNewEntity() const;
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202();
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203();
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 240
     * @symbol ?_hurt\@ItemActor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@ItemActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@ItemActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMACTOR
    /**
     * @symbol ?canMakeStepSound\@ItemActor\@\@UEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
#endif
    /**
     * @symbol
     * ??0ItemActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI ItemActor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    /**
     * @symbol ?postNormalTick\@ItemActor\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?setSourceEntity\@ItemActor\@\@QEAAXPEBVActor\@\@\@Z
     */
    MCAPI void setSourceEntity(class Actor const*);
    /**
     * @symbol ?getLiquidAABB\@ItemActor\@\@SA?AVAABB\@\@AEBUAABBShapeComponent\@\@\@Z
     */
    MCAPI static class AABB getLiquidAABB(struct AABBShapeComponent const&);
    /**
     * @symbol ?tryGetFromEntity\@ItemActor\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class ItemActor* tryGetFromEntity(class EntityContext&, bool);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
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
    MCAPI bool _merge(class ItemActor*);
    /**
     * @symbol ?_validateItem\@ItemActor\@\@AEAAXXZ
     */
    MCAPI void _validateItem();
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?LIFETIME\@ItemActor\@\@0HB
     */
    MCAPI static int const LIFETIME;
    // NOLINTEND
};
