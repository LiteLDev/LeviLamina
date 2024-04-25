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

class Armadillo : public ::Animal {
public:
    // prevent constructor by default
    Armadillo& operator=(Armadillo const&);
    Armadillo(Armadillo const&);
    Armadillo();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Armadillo@@UEAA@XZ
    virtual ~Armadillo() = default;

    // vIndex: 38, symbol: ?getShadowRadius@Armadillo@@UEBAMXZ
    virtual float getShadowRadius() const;

    // symbol: ??0Armadillo@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Armadillo(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getCustomHurtSound@Armadillo@@SA?AV?$optional@W4LevelSoundEvent@Legacy@Puv@@@std@@AEAVMob@@@Z
    MCAPI static std::optional<::Puv::Legacy::LevelSoundEvent> getCustomHurtSound(class Mob&);

    // NOLINTEND
};
