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
    FishingHook& operator=(FishingHook const&) = delete;
    FishingHook(FishingHook const&)            = delete;
    FishingHook()                              = delete;

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

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 69, symbol: ?getShadowRadius@FishingHook@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 86, symbol: __unk_vfn_86
    virtual void __unk_vfn_86();

    // vIndex: 93, symbol: __unk_vfn_93
    virtual void __unk_vfn_93();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: __unk_vfn_96
    virtual void __unk_vfn_96();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 127, symbol: ?handleEntityEvent@FishingHook@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 149, symbol: ?save@FishingHook@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 155, symbol: ?getSourceUniqueID@FishingHook@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 163, symbol: ?canChangeDimensionsUsingPortal@FishingHook@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 225, symbol: ?shouldDropDeathLoot@FishingHook@@UEBA_NXZ
    virtual bool shouldDropDeathLoot() const;

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

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
