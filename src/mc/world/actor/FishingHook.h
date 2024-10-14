#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

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
    virtual bool save(class CompoundTag&) const;

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool canChangeDimensionsUsingPortal$() const;

    MCAPI float getShadowRadius$() const;

    MCAPI struct ActorUniqueID getSourceUniqueID$() const;

    MCAPI void handleEntityEvent$(::ActorEvent eventId, int data);

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI void remove$();

    MCAPI bool save$(class CompoundTag&) const;

    MCAPI bool shouldDropDeathLoot$() const;

    MCAPI static float const& BOBBER_SIZE();

    // NOLINTEND
};
