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

class Spider : public ::Monster {
public:
    // prevent constructor by default
    Spider& operator=(Spider const&);
    Spider(Spider const&);
    Spider();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Spider@@UEAA@XZ
    virtual ~Spider() = default;

    // vIndex: 38, symbol: ?getShadowRadius@Spider@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 67, symbol: ?shouldRender@Spider@@UEBA_NXZ
    virtual bool shouldRender() const;

    // vIndex: 113, symbol: ?canBeAffected@Spider@@UEBA_NI@Z
    virtual bool canBeAffected(uint effectId) const;

    // vIndex: 151, symbol: ?_playStepSound@Spider@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const& pos, class Block const& onBlock);

    // vIndex: 193, symbol: ?getModelScale@Spider@@UEBAMXZ
    virtual float getModelScale() const;

    // symbol: ??0Spider@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Spider(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND
};
