#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/OwnerPtr.h"
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
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

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
