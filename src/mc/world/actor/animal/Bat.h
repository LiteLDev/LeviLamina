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
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Bat : public ::Mob {
public:
    // prevent constructor by default
    Bat& operator=(Bat const&);
    Bat(Bat const&);
    Bat();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Bat@@UEAA@XZ
    virtual ~Bat() = default;

    // vIndex: 148, symbol: ?_hurt@Bat@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 149, symbol: ?readAdditionalSaveData@Bat@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@Bat@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& entityTag) const;

    // vIndex: 161, symbol: ?pushActors@Bat@@UEAAXXZ
    virtual void pushActors();

    // vIndex: 189, symbol: ?newServerAiStep@Bat@@MEAAXXZ
    virtual void newServerAiStep();

    // symbol: ??0Bat@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI
    Bat(class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext);

    // symbol: ?postNormalTick@Bat@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?hasRestingBlockAbove@Bat@@SA_NAEBVVec3@@AEBVBlockSource@@@Z
    MCAPI static bool hasRestingBlockAbove(class Vec3 const&, class BlockSource const& region);

    // NOLINTEND
};
