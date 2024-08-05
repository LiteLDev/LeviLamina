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

class FallingBlockActor : public ::PredictableProjectile {
public:
    // prevent constructor by default
    FallingBlockActor& operator=(FallingBlockActor const&);
    FallingBlockActor(FallingBlockActor const&);
    FallingBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~FallingBlockActor() = default;

    // vIndex: 23
    virtual void teleportTo(class Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool);

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 94
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 98
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 99
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI FallingBlockActor(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void breakBlock();

    MCAPI void doNormalTick(class ITickDelegate&);

    MCAPI class Block const& getFallingBlock() const;

    MCAPI void setFallDamageAmount(float amount);

    MCAPI void setFallingBlock(class Block const& block, bool creative);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _waitRemoval();

    // NOLINTEND
};
