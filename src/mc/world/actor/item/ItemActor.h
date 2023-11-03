#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/registry/ItemStack.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
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
    ItemStack mItem;          // this+Actor+0
    int       mAge;           // this+Actor+160
    int       mPickupDelay;   // this+Actor+164
    int       mThrowTime;     // this+Actor+168
    float     mBobOffs;       // this+Actor+172
    int       mHealth;        // this+Actor+176
    int       mLifeTime;      // this+Actor+180
    bool      mIsInItemFrame; // this+Actor+184
    bool      mIsFromFishing; // this+Actor+185

    // prevent constructor by default
    ItemActor& operator=(ItemActor const&);
    ItemActor(ItemActor const&);
    ItemActor();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@ItemActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 14, symbol: ?isRuntimePredictedMovementEnabled@ItemActor@@UEBA_NXZ
    virtual bool isRuntimePredictedMovementEnabled() const;

    // vIndex: 22, symbol: ?isFireImmune@ItemActor@@UEBA_NXZ
    virtual bool isFireImmune() const;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 28, symbol:
    // ?tryCreateAddActorPacket@ItemActor@@UEAA?AV?$unique_ptr@VAddActorBasePacket@@U?$default_delete@VAddActorBasePacket@@@std@@@std@@XZ
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: ?playerTouch@ItemActor@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player&);

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 79, symbol: ?isInvulnerableTo@ItemActor@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 84, symbol: ?handleEntityEvent@ItemActor@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 102, symbol: ?getSourceUniqueID@ItemActor@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 120, symbol: ?canSynchronizeNewEntity@ItemActor@@UEBA_NXZ
    virtual bool canSynchronizeNewEntity() const;

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@ItemActor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 167, symbol: ?readAdditionalSaveData@ItemActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@ItemActor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

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
