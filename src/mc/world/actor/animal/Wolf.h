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
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Wolf : public ::Animal {
public:
    // prevent constructor by default
    Wolf& operator=(Wolf const&);
    Wolf(Wolf const&);
    Wolf();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Wolf() = default;

    // vIndex: 60
    virtual void setSitting(bool value);

    // vIndex: 68
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 88
    virtual bool load(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 99
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 166
    virtual bool isAlliedTo(class Mob* other);

    // vIndex: 181
    virtual void onBorn(class Actor&, class Actor& parentRight);

    // vIndex: 187
    virtual void newServerAiStep();

    MCAPI Wolf(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI float getHeadRollAngle(float a);

    MCAPI float getShakeAnim() const;

    MCAPI float getTailAngle();

    MCAPI bool isShaking() const;

    MCAPI void postNormalTick();

    MCAPI static std::optional<::Puv::Legacy::LevelSoundEvent>
    getCustomHurtSound(class Mob& mob, ::ActorDamageCause cause);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _avoidSnowBury();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool _hurt$(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI ::Puv::Legacy::LevelSoundEvent getAmbientSound$() const;

    MCAPI void handleEntityEvent$(::ActorEvent id, int data);

    MCAPI bool isAlliedTo$(class Mob* other);

    MCAPI bool load$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void newServerAiStep$();

    MCAPI void onBorn$(class Actor&, class Actor& parentRight);

    MCAPI void onSynchedDataUpdate$(int dataId);

    MCAPI void setSitting$(bool value);

    // NOLINTEND
};
