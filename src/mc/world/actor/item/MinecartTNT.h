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
#include "mc/enums/MinecartType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MinecartTNT : public ::Minecart {
public:
    // prevent constructor by default
    MinecartTNT& operator=(MinecartTNT const&);
    MinecartTNT(MinecartTNT const&);
    MinecartTNT();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1MinecartTNT@@UEAA@XZ
    virtual ~MinecartTNT() = default;

    // vIndex: 26, symbol: ?normalTick@MinecartTNT@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 75, symbol: ?handleEntityEvent@MinecartTNT@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent eventId, int data);

    // vIndex: 100, symbol: ?causeFallDamageToActor@MinecartTNT@@MEAAMMMVActorDamageSource@@@Z
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 148, symbol: ?_hurt@MinecartTNT@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 153, symbol: ?destroy@MinecartTNT@@UEAAXAEBVActorDamageSource@@_N@Z
    virtual void destroy(class ActorDamageSource const& source, bool dropMinecartComponents);

    // vIndex: 154, symbol: ?getType@MinecartTNT@@UEAA?AW4MinecartType@@XZ
    virtual ::MinecartType getType();

    // vIndex: 155, symbol: ?getDefaultDisplayBlock@MinecartTNT@@UEBAPEBVBlock@@XZ
    virtual class Block const* getDefaultDisplayBlock() const;

    // symbol: ??0MinecartTNT@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI MinecartTNT(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?primeFuse@MinecartTNT@@QEAAXW4ActorDamageCause@@@Z
    MCAPI void primeFuse(::ActorDamageCause cause);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DEFAULT_FUSE_LENGTH@MinecartTNT@@0HB
    MCAPI static int const DEFAULT_FUSE_LENGTH;

    // NOLINTEND
};
