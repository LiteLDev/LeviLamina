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
#include "mc/enums/ArmorTextureType.h"
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
    // vIndex: 5, symbol: ?reloadHardcodedClient@Parrot@@MEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1Parrot@@UEAA@XZ
    virtual ~Parrot() = default;

    // vIndex: 38, symbol: ?getShadowRadius@Parrot@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 61, symbol: ?setSitting@Parrot@@UEAAX_N@Z
    virtual void setSitting(bool value);

    // vIndex: 68, symbol: ?playAmbientSound@Parrot@@UEAAXXZ
    virtual void playAmbientSound();

    // vIndex: 69, symbol: ?getAmbientSound@Parrot@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 70, symbol: ?isInvulnerableTo@Parrot@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 104, symbol: ?canBePulledIntoVehicle@Parrot@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 151, symbol: ?_playStepSound@Parrot@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const& pos, class Block const& onBlock);

    // vIndex: 186, symbol: ?_getWalkTargetValue@Parrot@@UEAAMAEBVBlockPos@@@Z
    virtual float _getWalkTargetValue(class BlockPos const& pos);

    // symbol: ??0Parrot@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Parrot(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?getFlap@Parrot@@QEBAMXZ
    MCAPI float getFlap() const;

    // symbol: ?getFlapSpeed@Parrot@@QEBAMXZ
    MCAPI float getFlapSpeed() const;

    // symbol: ?postAiStep@Parrot@@QEAAXXZ
    MCAPI void postAiStep();

    // NOLINTEND
};
