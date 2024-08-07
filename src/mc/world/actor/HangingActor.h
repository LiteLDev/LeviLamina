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

class HangingActor : public ::Actor {
public:
    // prevent constructor by default
    HangingActor& operator=(HangingActor const&);
    HangingActor(HangingActor const&);
    HangingActor();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~HangingActor();

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 41
    virtual float getBrightness(float, class IConstBlockSource const& region) const;

    // vIndex: 69
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 151
    virtual int getWidth() const = 0;

    // vIndex: 152
    virtual int getHeight() const = 0;

    // vIndex: 153
    virtual void dropItem() = 0;

    // vIndex: 154
    virtual bool placeHangingEntity(class BlockSource& region, int direction);

    // vIndex: 155
    virtual bool wouldSurvive(class BlockSource& region);

    MCAPI HangingActor(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI int getDirection() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _calculateAABB();

    MCAPI void _calculateActorPositionFromPlacementPosition(class BlockPos const& blockPos);

    MCAPI bool _wouldSurvive(class BlockSource& region, class BlockPos const& blockPos, bool beingPlaced);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _blockContainsObstruction(class BlockSource const& region, class BlockPos const& blockPos) const;

    MCAPI bool _blockIsObstruction(class BlockSource const& region, class BlockPos const& blockPos) const;

    MCAPI bool
    _canSurviveOnBlock(class BlockSource const& region, class BlockPos const& blockPos, bool beingPlaced) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static float const HANGING_OFFSET;

    // NOLINTEND
};
