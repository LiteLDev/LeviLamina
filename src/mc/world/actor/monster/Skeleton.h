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
#include "mc/world/actor/monster/HumanoidMonster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class Skeleton : public ::HumanoidMonster {
public:
    // prevent constructor by default
    Skeleton& operator=(Skeleton const&);
    Skeleton(Skeleton const&);
    Skeleton();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Skeleton() = default;

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 55
    virtual void setTarget(class Actor* target);

    // vIndex: 91
    virtual bool canFreeze() const;

    // vIndex: 111
    virtual bool canBeAffected(uint effectId) const;

    // vIndex: 119
    virtual void getDebugText(std::vector<std::string>& outputInfo);

    // vIndex: 131
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 167
    virtual bool doHurtTarget(class Actor* target, ::ActorDamageCause const& cause);

    MCAPI Skeleton(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void setWitherParent(class WitherBoss* wither);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACK_UUID;

    // NOLINTEND
};
