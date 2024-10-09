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
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class AbstractArrow : public ::PredictableProjectile {
public:
    // prevent constructor by default
    AbstractArrow& operator=(AbstractArrow const&);
    AbstractArrow(AbstractArrow const&);
    AbstractArrow();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 6
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~AbstractArrow();

    // vIndex: 24
    virtual void lerpMotion(class Vec3 const& delta);

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 42
    virtual void playerTouch(class Player& player);

    // vIndex: 90
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 94
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 151
    virtual void shoot(class Vec3 const& dir, float pow, float uncertainty, class Vec3 const& baseSpeed);

    // vIndex: 152
    virtual class ItemStack _getPickupItem() const = 0;

    MCAPI AbstractArrow(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void setFavoredSlot(int favoredSlot);

    MCAPI void setIsCreative(bool creativeOnly);

    MCAPI void setIsPlayerOwned(bool isPlayerOwned);

    MCAPI static class Actor*
    spawnPlayerProjectile(struct ActorDefinitionIdentifier const& id, class Player& player, class Vec3 aimDir);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _canPickup(class Player const& player) const;

    // NOLINTEND
};
