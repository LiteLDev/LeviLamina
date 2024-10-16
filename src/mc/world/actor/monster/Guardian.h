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
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Guardian : public ::Monster {
public:
    // prevent constructor by default
    Guardian& operator=(Guardian const&);
    Guardian(Guardian const&);
    Guardian();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~Guardian() = default;

    // vIndex: 55
    virtual void setTarget(class Actor* target);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 160
    virtual bool checkSpawnRules(bool);

    // vIndex: 165
    virtual float getMaxHeadXRot();

    // vIndex: 190
    virtual bool isDarkEnoughToSpawn() const;

    MCAPI Guardian(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI int getAttackDuration();

    MCAPI class Vec3 getMoveEyeVector();

    MCAPI class Actor* getTargetEntity() const;

    MCAPI bool isElder() const;

    MCAPI bool isElderGhost() const;

    MCAPI void preAiStep();

    MCAPI void setAttackTime(int time);

    MCAPI void setElder(bool value);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void registerLoopingSounds();

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

    MCAPI void addAdditionalSaveData$(class CompoundTag& tag) const;

    MCAPI bool checkSpawnRules$(bool);

    MCAPI float getMaxHeadXRot$();

    MCAPI bool isDarkEnoughToSpawn$() const;

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI void reloadHardcodedClient$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI void setTarget$(class Actor* target);

    MCAPI static int const& ATTACK_TIME();

    MCAPI static int const& FIRST_DAMAGE_TIME();

    // NOLINTEND
};
