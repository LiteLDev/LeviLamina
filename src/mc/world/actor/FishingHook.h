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
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~FishingHook() = default;

    // vIndex: 13
    virtual void remove();

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent eventId, int data);

    // vIndex: 87
    virtual bool save(class CompoundTag& entityTag) const;

    // vIndex: 90
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 94
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 132
    virtual bool shouldDropDeathLoot() const;

    MCAPI FishingHook(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI class Actor* getFishingTarget();

    MCAPI class Actor* getOwner();

    MCAPI void postNormalTick();

    MCAPI int retrieve();

    MCAPI static float const BOBBER_SIZE;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _fishPosEvent();

    MCAPI void _fishTeaseEvent();

    MCAPI void _fishhookEvent();

    MCAPI float _getWaterPercentage();

    MCAPI class HitResult _hitCheck();

    MCAPI void _pullCloser(class Actor& inEntity, float inSpeed);

    MCAPI bool _serverHooked();

    MCAPI bool _serverLured();

    MCAPI void _updateGravity();

    MCAPI void _updateServer();

    // NOLINTEND
};
