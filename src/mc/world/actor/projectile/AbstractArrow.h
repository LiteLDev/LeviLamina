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
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/components/ItemUseMethod.h"

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
