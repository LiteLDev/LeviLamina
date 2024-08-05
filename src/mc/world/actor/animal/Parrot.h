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

class Parrot : public ::Animal {
public:
    // prevent constructor by default
    Parrot& operator=(Parrot const&);
    Parrot(Parrot const&);
    Parrot();

public:
    // NOLINTBEGIN
    // vIndex: 5
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~Parrot() = default;

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 60
    virtual void setSitting(bool value);

    // vIndex: 67
    virtual void playAmbientSound();

    // vIndex: 68
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 69
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 102
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 149
    virtual void _playStepSound(class BlockPos const& pos, class Block const& onBlock);

    // vIndex: 184
    virtual float _getWalkTargetValue(class BlockPos const& pos);

    MCAPI Parrot(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI float getFlap() const;

    MCAPI float getFlapSpeed() const;

    MCAPI void postAiStep();

    // NOLINTEND
};
