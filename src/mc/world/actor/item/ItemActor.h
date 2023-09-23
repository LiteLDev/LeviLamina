#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/item/components/ItemUseMethod.h"

class ItemActor : public ::Actor {
public:
    // prevent constructor by default
    ItemActor& operator=(ItemActor const&);
    ItemActor(ItemActor const&);
    ItemActor();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ?reloadHardcoded@ItemActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 20, symbol: ?isRuntimePredictedMovementEnabled@ItemActor@@UEBA_NXZ
    virtual bool isRuntimePredictedMovementEnabled() const;

    // vIndex: 34, symbol: ?isFireImmune@ItemActor@@UEBA_NXZ
    virtual bool isFireImmune() const;

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 42, symbol:
    // ?tryCreateAddActorPacket@ItemActor@@UEAA?AV?$unique_ptr@VAddActorBasePacket@@U?$default_delete@VAddActorBasePacket@@@std@@@std@@XZ
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 77, symbol: ?playerTouch@ItemActor@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player&);

    // vIndex: 82, symbol: __unk_vfn_82
    virtual void __unk_vfn_82();

    // vIndex: 85, symbol: __unk_vfn_85
    virtual void __unk_vfn_85();

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 94, symbol: __unk_vfn_94
    virtual void __unk_vfn_94();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 97, symbol: __unk_vfn_97
    virtual void __unk_vfn_97();

    // vIndex: 119, symbol: ?isInvulnerableTo@ItemActor@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 125, symbol: ?handleEntityEvent@ItemActor@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 153, symbol: ?getSourceUniqueID@ItemActor@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 177, symbol: ?canSynchronizeNewEntity@ItemActor@@UEBA_NXZ
    virtual bool canSynchronizeNewEntity() const;

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@ItemActor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 239, symbol: ?readAdditionalSaveData@ItemActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@ItemActor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // symbol: ?canMakeStepSound@ItemActor@@UEBA_NXZ
    MCVAPI bool canMakeStepSound() const;

    // symbol: ??0ItemActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ItemActor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?postNormalTick@ItemActor@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?setSourceEntity@ItemActor@@QEAAXPEBVActor@@@Z
    MCAPI void setSourceEntity(class Actor const*);

    // symbol: ?getLiquidAABB@ItemActor@@SA?AVAABB@@AEBUAABBShapeComponent@@@Z
    MCAPI static class AABB getLiquidAABB(struct AABBShapeComponent const&);

    // symbol: ?tryGetFromEntity@ItemActor@@SAPEAV1@AEAVEntityContext@@_N@Z
    MCAPI static class ItemActor* tryGetFromEntity(class EntityContext&, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addComponents@ItemActor@@AEAAXXZ
    MCAPI void _addComponents();

    // symbol: ?_dropContents@ItemActor@@AEAAXXZ
    MCAPI void _dropContents();

    // symbol: ?_merge@ItemActor@@AEAA_NPEAV1@@Z
    MCAPI bool _merge(class ItemActor*);

    // symbol: ?_validateItem@ItemActor@@AEAAXXZ
    MCAPI void _validateItem();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?LIFETIME@ItemActor@@0HB
    MCAPI static int const LIFETIME;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $LIFETIME() { return LIFETIME; }

    // NOLINTEND
};
