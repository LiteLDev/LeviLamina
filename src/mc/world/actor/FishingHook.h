#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

class FishingHook : public ::Actor {
public:
    // prevent constructor by default
    FishingHook& operator=(FishingHook const&);
    FishingHook(FishingHook const&);
    FishingHook();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@FishingHook@@MEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 13, symbol: ?remove@FishingHook@@UEAAXXZ
    virtual void remove();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: ?getShadowRadius@FishingHook@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 84, symbol: ?handleEntityEvent@FishingHook@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 98, symbol: ?save@FishingHook@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 102, symbol: ?getSourceUniqueID@FishingHook@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 108, symbol: ?canChangeDimensionsUsingPortal@FishingHook@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 151, symbol: ?shouldDropDeathLoot@FishingHook@@UEBA_NXZ
    virtual bool shouldDropDeathLoot() const;

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // symbol: ??0FishingHook@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI FishingHook(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getFishingTarget@FishingHook@@QEAAPEAVActor@@XZ
    MCAPI class Actor* getFishingTarget();

    // symbol: ?getOwner@FishingHook@@QEAAPEAVActor@@XZ
    MCAPI class Actor* getOwner();

    // symbol: ?postNormalTick@FishingHook@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?retrieve@FishingHook@@QEAAHXZ
    MCAPI int retrieve();

    // symbol: ?BOBBER_SIZE@FishingHook@@2MB
    MCAPI static float const BOBBER_SIZE;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_fishPosEvent@FishingHook@@IEAAXXZ
    MCAPI void _fishPosEvent();

    // symbol: ?_fishTeaseEvent@FishingHook@@IEAAXXZ
    MCAPI void _fishTeaseEvent();

    // symbol: ?_fishhookEvent@FishingHook@@IEAAXXZ
    MCAPI void _fishhookEvent();

    // symbol: ?_getWaterPercentage@FishingHook@@IEAAMXZ
    MCAPI float _getWaterPercentage();

    // symbol: ?_hitCheck@FishingHook@@IEAA?AVHitResult@@XZ
    MCAPI class HitResult _hitCheck();

    // symbol: ?_pullCloser@FishingHook@@IEAAXAEAVActor@@M@Z
    MCAPI void _pullCloser(class Actor&, float);

    // symbol: ?_serverHooked@FishingHook@@IEAA_NXZ
    MCAPI bool _serverHooked();

    // symbol: ?_serverLured@FishingHook@@IEAA_NXZ
    MCAPI bool _serverLured();

    // symbol: ?_updateGravity@FishingHook@@IEAAXXZ
    MCAPI void _updateGravity();

    // symbol: ?_updateServer@FishingHook@@IEAAXXZ
    MCAPI void _updateServer();

    // NOLINTEND
};
