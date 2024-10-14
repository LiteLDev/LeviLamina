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
#include "mc/world/actor/monster/HumanoidMonster.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool canBeAffected$(uint effectId) const;

    MCAPI bool canFreeze$() const;

    MCAPI void die$(class ActorDamageSource const& source);

    MCAPI bool doHurtTarget$(class Actor* target, ::ActorDamageCause const& cause);

    MCAPI void getDebugText$(std::vector<std::string>& outputInfo);

    MCAPI void normalTick$();

    MCAPI void setTarget$(class Actor* target);

    MCAPI static class mce::UUID const& SPEED_MODIFIER_ATTACK_UUID();

    // NOLINTEND
};
