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
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Endermite : public ::Monster {
public:
    // prevent constructor by default
    Endermite& operator=(Endermite const&);
    Endermite(Endermite const&);
    Endermite();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Endermite@@UEAA@XZ
    virtual ~Endermite() = default;

    // vIndex: 26, symbol: ?normalTick@Endermite@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 149, symbol: ?readAdditionalSaveData@Endermite@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@Endermite@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 160, symbol: ?aiStep@Endermite@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 162, symbol: ?checkSpawnRules@Endermite@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool fromSpawner);

    // symbol: ??0Endermite@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Endermite(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND
};
