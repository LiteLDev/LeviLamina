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

class FishingHook : public ::Actor {
public:
    // prevent constructor by default
    FishingHook& operator=(FishingHook const&);
    FishingHook(FishingHook const&);
    FishingHook();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ?reloadHardcoded@FishingHook@@MEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 19, symbol: ?remove@FishingHook@@UEAAXXZ
    virtual void remove();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 68, symbol: ?getShadowRadius@FishingHook@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

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

    // vIndex: 125, symbol: ?handleEntityEvent@FishingHook@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 147, symbol: ?save@FishingHook@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 153, symbol: ?getSourceUniqueID@FishingHook@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 161, symbol: ?canChangeDimensionsUsingPortal@FishingHook@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 221, symbol: ?shouldDropDeathLoot@FishingHook@@UEBA_NXZ
    virtual bool shouldDropDeathLoot() const;

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

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
