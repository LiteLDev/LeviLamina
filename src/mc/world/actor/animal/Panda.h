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

class Panda : public ::Animal {
public:
    // prevent constructor by default
    Panda& operator=(Panda const&);
    Panda(Panda const&);
    Panda();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Panda@@UEAA@XZ
    virtual ~Panda() = default;

    // vIndex: 69, symbol: ?getAmbientSound@Panda@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 149, symbol: ?readAdditionalSaveData@Panda@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 185, symbol: ?setTransitioningSitting@Panda@@UEAAX_N@Z
    virtual void setTransitioningSitting(bool value);

    // symbol: ??0Panda@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Panda(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?getLieOnBackAmount@Panda@@QEBAMM@Z
    MCAPI float getLieOnBackAmount(float a) const;

    // symbol: ?getSitAmount@Panda@@QEBAMM@Z
    MCAPI float getSitAmount(float a) const;

    // symbol: ?postNormalTick@Panda@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?updateLaying@Panda@@QEAAXXZ
    MCAPI void updateLaying();

    // symbol: ?updateRollAmount@Panda@@QEAAXXZ
    MCAPI void updateRollAmount();

    // symbol: ?updateSitting@Panda@@QEAAXXZ
    MCAPI void updateSitting();

    // NOLINTEND
};
