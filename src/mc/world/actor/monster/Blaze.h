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

class Blaze : public ::Monster {
public:
    // prevent constructor by default
    Blaze& operator=(Blaze const&);
    Blaze(Blaze const&);
    Blaze();

public:
    // NOLINTBEGIN
    // vIndex: 5, symbol: ?reloadHardcodedClient@Blaze@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1Blaze@@UEAA@XZ
    virtual ~Blaze() = default;

    // vIndex: 26, symbol: ?normalTick@Blaze@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 41, symbol: ?getBrightness@Blaze@@UEBAMMAEBVIConstBlockSource@@@Z
    virtual float getBrightness(float, class IConstBlockSource const&) const;

    // vIndex: 52, symbol: ?isOnFire@Blaze@@UEBA_NXZ
    virtual bool isOnFire() const;

    // vIndex: 160, symbol: ?aiStep@Blaze@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 192, symbol: ?isDarkEnoughToSpawn@Blaze@@UEBA_NXZ
    virtual bool isDarkEnoughToSpawn() const;

    // symbol: ??0Blaze@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Blaze(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?preTravel@Blaze@@QEAAXXZ
    MCAPI void preTravel();

    // NOLINTEND
};
