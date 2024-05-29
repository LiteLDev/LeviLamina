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
#include "mc/world/actor/monster/HumanoidMonster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class EvocationIllager : public ::HumanoidMonster {
public:
    // prevent constructor by default
    EvocationIllager& operator=(EvocationIllager const&);
    EvocationIllager(EvocationIllager const&);
    EvocationIllager();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol:
    // ?reloadHardcoded@EvocationIllager@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1EvocationIllager@@UEAA@XZ
    virtual ~EvocationIllager() = default;

    // vIndex: 133, symbol: ?die@EvocationIllager@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 160, symbol: ?aiStep@EvocationIllager@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 168, symbol: ?isAlliedTo@EvocationIllager@@UEAA_NPEAVMob@@@Z
    virtual bool isAlliedTo(class Mob* other);

    // vIndex: 170, symbol: ?getArmorValue@EvocationIllager@@MEBAHXZ
    virtual int getArmorValue() const;

    // symbol: ??0EvocationIllager@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI EvocationIllager(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND
};
