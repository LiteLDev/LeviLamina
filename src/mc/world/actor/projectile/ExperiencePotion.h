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
#include "mc/world/actor/projectile/Throwable.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ExperiencePotion : public ::Throwable {
public:
    // prevent constructor by default
    ExperiencePotion& operator=(ExperiencePotion const&);
    ExperiencePotion(ExperiencePotion const&);
    ExperiencePotion();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1ExperiencePotion@@UEAA@XZ
    virtual ~ExperiencePotion() = default;

    // vIndex: 153, symbol: ?getThrowPower@ExperiencePotion@@MEAAMXZ
    virtual float getThrowPower();

    // vIndex: 154, symbol: ?getThrowUpAngleOffset@ExperiencePotion@@MEAAMXZ
    virtual float getThrowUpAngleOffset();

    // vIndex: 155, symbol: ?getGravity@ExperiencePotion@@MEAAMXZ
    virtual float getGravity();

    // symbol: ??0ExperiencePotion@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ExperiencePotion(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND
};
