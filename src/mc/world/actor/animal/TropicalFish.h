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

class TropicalFish : public ::WaterAnimal {
public:
    // prevent constructor by default
    TropicalFish& operator=(TropicalFish const&);
    TropicalFish(TropicalFish const&);
    TropicalFish();

public:
    // NOLINTBEGIN
    // vIndex: 6, symbol:
    // ?initializeComponents@TropicalFish@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1TropicalFish@@UEAA@XZ
    virtual ~TropicalFish() = default;

    // vIndex: 29, symbol: ?startRiding@TropicalFish@@UEAA_NAEAVActor@@@Z
    virtual bool startRiding(class Actor&);

    // vIndex: 101, symbol: ?onSynchedDataUpdate@TropicalFish@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 146, symbol: ?updateEntitySpecificMolangVariables@TropicalFish@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 182, symbol: ?createAIGoals@TropicalFish@@UEAA_NXZ
    virtual bool createAIGoals();

    // symbol: ??0TropicalFish@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI TropicalFish(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND
};
