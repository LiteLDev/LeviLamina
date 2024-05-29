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

class Sheep : public ::Animal {
public:
    // prevent constructor by default
    Sheep& operator=(Sheep const&);
    Sheep(Sheep const&);
    Sheep();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Sheep@@UEAA@XZ
    virtual ~Sheep() = default;

    // vIndex: 75, symbol: ?handleEntityEvent@Sheep@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // symbol: ??0Sheep@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Sheep(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?isGrazing@Sheep@@QEBA_NXZ
    MCAPI bool isGrazing() const;

    // symbol: ?preAiStep@Sheep@@QEAAXXZ
    MCAPI void preAiStep();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?EAT_ANIMATION_TICKS@Sheep@@0HB
    MCAPI static int const EAT_ANIMATION_TICKS;

    // NOLINTEND
};
