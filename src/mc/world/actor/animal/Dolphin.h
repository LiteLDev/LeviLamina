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
#include "mc/world/actor/animal/WaterAnimal.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Dolphin : public ::WaterAnimal {
public:
    // prevent constructor by default
    Dolphin& operator=(Dolphin const&);
    Dolphin(Dolphin const&);
    Dolphin();

public:
    // NOLINTBEGIN
    // vIndex: 6, symbol: ?initializeComponents@Dolphin@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1Dolphin@@UEAA@XZ
    virtual ~Dolphin() = default;

    // vIndex: 104, symbol: ?canBePulledIntoVehicle@Dolphin@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 160, symbol: ?aiStep@Dolphin@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 182, symbol: ?createAIGoals@Dolphin@@UEAA_NXZ
    virtual bool createAIGoals();

    // vIndex: 186, symbol: ?_getWalkTargetValue@Dolphin@@UEAAMAEBVBlockPos@@@Z
    virtual float _getWalkTargetValue(class BlockPos const& pos);

    // symbol: ??0Dolphin@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Dolphin(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND
};
