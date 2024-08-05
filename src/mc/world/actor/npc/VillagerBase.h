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
#include "mc/enums/ParticleType.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class VillagerBase : public ::Mob {
public:
    // prevent constructor by default
    VillagerBase& operator=(VillagerBase const&);
    VillagerBase(VillagerBase const&);
    VillagerBase();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~VillagerBase();

    // vIndex: 72
    virtual void onLightningHit();

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent event, int data);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI VillagerBase(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void consumeLoveFood();

    MCAPI int getBreedingStackIndex() const;

    MCAPI bool isChasing() const;

    MCAPI bool isWillingToBreed(bool consumeFoodIfNecessary);

    MCAPI void setChasing(bool chasing);

    MCAPI void setWillingToBreed(bool willingToBreed);

    MCAPI void stopGoals();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addParticlesAroundSelf(::ParticleType particleType);

    // NOLINTEND
};
