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

class Warden : public ::Monster {
public:
    // prevent constructor by default
    Warden& operator=(Warden const&);
    Warden(Warden const&);
    Warden();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Warden() = default;

    // vIndex: 22
    virtual bool canDisableShield();

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 55
    virtual void setTarget(class Actor* target);

    // vIndex: 69
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 99
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 135
    virtual void onPush(class Actor& source);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 160
    virtual bool checkSpawnRules(bool);

    // vIndex: 161
    virtual bool checkSpawnObstruction() const;

    // vIndex: 167
    virtual bool doHurtTarget(class Actor* target, ::ActorDamageCause const& cause);

    MCAPI Warden(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

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

    MCAPI bool canDisableShield$();

    MCAPI bool checkSpawnObstruction$() const;

    MCAPI bool checkSpawnRules$(bool);

    MCAPI bool doHurtTarget$(class Actor* target, ::ActorDamageCause const& cause);

    MCAPI bool isInvulnerableTo$(class ActorDamageSource const& source) const;

    MCAPI void normalTick$();

    MCAPI void onPush$(class Actor& source);

    MCAPI void onSynchedDataUpdate$(int dataId);

    MCAPI void setTarget$(class Actor* target);

    // NOLINTEND
};
