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
#include "mc/world/actor/Actor.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class EyeOfEnder : public ::Actor {
public:
    // prevent constructor by default
    EyeOfEnder& operator=(EyeOfEnder const&);
    EyeOfEnder(EyeOfEnder const&);
    EyeOfEnder();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@EyeOfEnder@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1EyeOfEnder@@UEAA@XZ
    virtual ~EyeOfEnder() = default;

    // vIndex: 24, symbol: ?lerpMotion@EyeOfEnder@@UEAAXAEBVVec3@@@Z
    virtual void lerpMotion(class Vec3 const& delta);

    // vIndex: 26, symbol: ?normalTick@EyeOfEnder@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 38, symbol: ?getShadowRadius@EyeOfEnder@@UEBAMXZ
    virtual float getShadowRadius() const;

    // symbol: ??0EyeOfEnder@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI EyeOfEnder(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?preNormalTick@EyeOfEnder@@QEAAXXZ
    MCAPI void preNormalTick();

    // symbol: ?signalTo@EyeOfEnder@@QEAAXAEBVPlayer@@AEAVBlockPos@@@Z
    MCAPI void signalTo(class Player const& player, class BlockPos& target);

    // NOLINTEND
};
