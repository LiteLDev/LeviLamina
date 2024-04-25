#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
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

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FishingHook : public ::Actor {
public:
    // prevent constructor by default
    FishingHook& operator=(FishingHook const&);
    FishingHook(FishingHook const&);
    FishingHook();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@FishingHook@@MEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1FishingHook@@UEAA@XZ
    virtual ~FishingHook() = default;

    // vIndex: 13, symbol: ?remove@FishingHook@@UEAAXXZ
    virtual void remove();

    // vIndex: 38, symbol: ?getShadowRadius@FishingHook@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 75, symbol: ?handleEntityEvent@FishingHook@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent eventId, int data);

    // vIndex: 89, symbol: ?save@FishingHook@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& entityTag) const;

    // vIndex: 92, symbol: ?getSourceUniqueID@FishingHook@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 96, symbol: ?canChangeDimensionsUsingPortal@FishingHook@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 134, symbol: ?shouldDropDeathLoot@FishingHook@@UEBA_NXZ
    virtual bool shouldDropDeathLoot() const;

    // symbol: ??0FishingHook@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI FishingHook(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

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
    MCAPI void _pullCloser(class Actor& inEntity, float inSpeed);

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
