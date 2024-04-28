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
    // vIndex: 4, symbol: ?reloadHardcoded@AbstractArrow@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 6, symbol:
    // ?initializeComponents@AbstractArrow@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: ??1AbstractArrow@@UEAA@XZ
    virtual ~AbstractArrow();

    // vIndex: 24, symbol: ?lerpMotion@AbstractArrow@@UEAAXAEBVVec3@@@Z
    virtual void lerpMotion(class Vec3 const& delta);

    // vIndex: 38, symbol: ?getShadowRadius@AbstractArrow@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 42, symbol: ?playerTouch@AbstractArrow@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player& player);

    // vIndex: 92, symbol: ?getSourceUniqueID@AbstractArrow@@MEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 96, symbol: ?canChangeDimensionsUsingPortal@AbstractArrow@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 149, symbol: ?readAdditionalSaveData@AbstractArrow@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@AbstractArrow@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 153, symbol: ?shoot@AbstractArrow@@UEAAXAEBVVec3@@MM0@Z
    virtual void shoot(class Vec3 const& dir, float pow, float uncertainty, class Vec3 const& baseSpeed);

    // vIndex: 154, symbol: ?_getPickupItem@Arrow@@MEBA?AVItemStack@@XZ
    virtual class ItemStack _getPickupItem() const = 0;

    // symbol: ??0AbstractArrow@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI AbstractArrow(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?isPlayerOwned@AbstractArrow@@QEBA_NXZ
    MCAPI bool isPlayerOwned() const;

    // symbol: ?setFavoredSlot@AbstractArrow@@QEAAXH@Z
    MCAPI void setFavoredSlot(int favoredSlot);

    // symbol: ?setIsCreative@AbstractArrow@@QEAAX_N@Z
    MCAPI void setIsCreative(bool creativeOnly);

    // symbol: ?spawnPlayerProjectile@AbstractArrow@@SAPEAVActor@@AEBUActorDefinitionIdentifier@@AEAVPlayer@@VVec3@@@Z
    MCAPI static class Actor*
    spawnPlayerProjectile(struct ActorDefinitionIdentifier const& id, class Player& player, class Vec3 aimDir);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canPickup@AbstractArrow@@IEBA_NAEBVPlayer@@@Z
    MCAPI bool _canPickup(class Player const& player) const;

    // NOLINTEND
};
