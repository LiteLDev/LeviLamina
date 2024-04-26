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

class TripodCamera : public ::Mob {
public:
    // prevent constructor by default
    TripodCamera& operator=(TripodCamera const&);
    TripodCamera(TripodCamera const&);
    TripodCamera();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@TripodCamera@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1TripodCamera@@UEAA@XZ
    virtual ~TripodCamera() = default;

    // vIndex: 13, symbol: ?remove@TripodCamera@@UEAAXXZ
    virtual void remove();

    // vIndex: 38, symbol: ?getShadowRadius@TripodCamera@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 45, symbol: ?isPickable@TripodCamera@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 54, symbol: ?isTargetable@TripodCamera@@UEBA_NXZ
    virtual bool isTargetable() const;

    // vIndex: 146, symbol: ?updateEntitySpecificMolangVariables@TripodCamera@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 148, symbol: ?_hurt@TripodCamera@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 187, symbol: ?canExistWhenDisallowMob@TripodCamera@@UEBA_NXZ
    virtual bool canExistWhenDisallowMob() const;

    // symbol: ??0TripodCamera@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI TripodCamera(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?interactWithPlayer@TripodCamera@@QEAA_NAEAVPlayer@@@Z
    MCAPI bool interactWithPlayer(class Player& player);

    // symbol: ?isActivated@TripodCamera@@QEBA_NXZ
    MCAPI bool isActivated() const;

    // symbol: ?startTakingPicture@TripodCamera@@QEAAXAEAVPlayer@@@Z
    MCAPI void startTakingPicture(class Player& player);

    // NOLINTEND
};
