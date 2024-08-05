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
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/item/components/ItemUseMethod.h"

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
    virtual void onBorn(class Actor& parentLeft, class Actor& parentRight);

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

    MCAPI static std::optional<::Puv::Legacy::LevelSoundEvent> getCustomHurtSound(class Mob&, ::ActorDamageCause);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _avoidSnowBury();

    // NOLINTEND
};
