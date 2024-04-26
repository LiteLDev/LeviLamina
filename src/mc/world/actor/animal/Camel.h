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

class Camel : public ::Animal {
public:
    // prevent constructor by default
    Camel& operator=(Camel const&);
    Camel(Camel const&);
    Camel();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Camel@@UEAA@XZ
    virtual ~Camel() = default;

    // vIndex: 19, symbol: ?getInterpolatedRidingOffset@Camel@@UEBA?AVVec3@@MH@Z
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;

    // vIndex: 26, symbol: ?normalTick@Camel@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 151, symbol: ?_playStepSound@Camel@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const&, class Block const& onBlock);

    // vIndex: 160, symbol: ?aiStep@Camel@@UEAAXXZ
    virtual void aiStep();

    // symbol: ??0Camel@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Camel(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?getDashCooldown@Camel@@QEBA?AV?$optional@VExpiringTick@@@std@@XZ
    MCAPI std::optional<class ExpiringTick> getDashCooldown() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_monitorSitting@Camel@@AEAAXXZ
    MCAPI void _monitorSitting();

    // NOLINTEND
};
