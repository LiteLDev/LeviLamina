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
#include "mc/world/actor/Mob.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Bat : public ::Mob {
public:
    // prevent constructor by default
    Bat& operator=(Bat const&);
    Bat(Bat const&);
    Bat();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Bat() = default;

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& entityTag) const;

    // vIndex: 159
    virtual void pushActors();

    // vIndex: 187
    virtual void newServerAiStep();

    MCAPI
    Bat(class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext);

    MCAPI void postNormalTick();

    MCAPI static bool hasRestingBlockAbove(class Vec3 const& batPos, class BlockSource const& region);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI bool _hurt$(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void addAdditionalSaveData$(class CompoundTag& entityTag) const;

    MCAPI void newServerAiStep$();

    MCAPI void pushActors$();

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // NOLINTEND
};
