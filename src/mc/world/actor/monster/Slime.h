#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
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
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Slime : public ::Monster {
public:
    // prevent constructor by default
    Slime& operator=(Slime const&);
    Slime(Slime const&);
    Slime();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~Slime();

    // vIndex: 13
    virtual void remove();

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 99
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 158
    virtual void aiStep();

    // vIndex: 160
    virtual bool checkSpawnRules(bool fromSpawner);

    // vIndex: 184
    virtual float _getWalkTargetValue(class BlockPos const& pos);

    // vIndex: 191
    virtual bool doPlayLandSound();

    // vIndex: 192
    virtual void playJumpSound();

    // vIndex: 193
    virtual void decreaseSquish();

    // vIndex: 194
    virtual class OwnerPtr<class EntityContext> createChild(int i);

    MCAPI Slime(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI float getOldSquishValue() const;

    MCAPI float getSquishValue() const;

    MCAPI void postNormalTick(bool wasOnGround);

    MCAPI void preNormalTick();

    MCAPI static std::function<bool(class SpawnConditions const&, class BlockSource&)> getSpawnRulesCallback();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void justJumped();

    MCAPI void justLanded();

    MCAPI void setSlimeSize(int size);

    // NOLINTEND
};
