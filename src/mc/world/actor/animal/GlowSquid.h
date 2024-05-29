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
#include "mc/world/actor/animal/Squid.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class GlowSquid : public ::Squid {
public:
    // prevent constructor by default
    GlowSquid& operator=(GlowSquid const&);
    GlowSquid(GlowSquid const&);
    GlowSquid();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1GlowSquid@@UEAA@XZ
    virtual ~GlowSquid() = default;

    // vIndex: 26, symbol: ?normalTick@GlowSquid@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 75, symbol: ?handleEntityEvent@GlowSquid@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 148, symbol: ?_hurt@GlowSquid@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 186, symbol: ?_getWalkTargetValue@GlowSquid@@UEAAMAEBVBlockPos@@@Z
    virtual float _getWalkTargetValue(class BlockPos const& pos);

    // vIndex: 192, symbol: ?_getInkSquirtSoundEvent@GlowSquid@@MEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent _getInkSquirtSoundEvent() const;

    // symbol: ??0GlowSquid@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI GlowSquid(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_startGoingDark@GlowSquid@@AEAAXXZ
    MCAPI void _startGoingDark();

    // NOLINTEND
};
