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
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

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
    virtual bool checkSpawnRules(bool fromSpawner);

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

    // private:
    // NOLINTBEGIN
    MCAPI static int const ATTACK_TIME;

    MCAPI static int const FIRST_DAMAGE_TIME;

    // NOLINTEND
};
