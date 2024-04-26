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

class PolarBear : public ::Animal {
public:
    // prevent constructor by default
    PolarBear& operator=(PolarBear const&);
    PolarBear(PolarBear const&);
    PolarBear();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1PolarBear@@UEAA@XZ
    virtual ~PolarBear() = default;

    // vIndex: 26, symbol: ?normalTick@PolarBear@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 93, symbol: ?canFreeze@PolarBear@@UEBA_NXZ
    virtual bool canFreeze() const;

    // symbol: ??0PolarBear@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI PolarBear(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?getStandingAnimationScale@PolarBear@@QEAAMM@Z
    MCAPI float getStandingAnimationScale(float a);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?STAND_ANIMATION_TICKS@PolarBear@@0MB
    MCAPI static float const STAND_ANIMATION_TICKS;

    // NOLINTEND
};
