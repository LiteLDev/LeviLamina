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

class Warden : public ::Monster {
public:
    // prevent constructor by default
    Warden& operator=(Warden const&);
    Warden(Warden const&);
    Warden();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Warden@@UEAA@XZ
    virtual ~Warden() = default;

    // vIndex: 22, symbol: ?canDisableShield@Warden@@UEAA_NXZ
    virtual bool canDisableShield();

    // vIndex: 26, symbol: ?normalTick@Warden@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 56, symbol: ?setTarget@Warden@@UEAAXPEAVActor@@@Z
    virtual void setTarget(class Actor* target);

    // vIndex: 70, symbol: ?isInvulnerableTo@Warden@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 101, symbol: ?onSynchedDataUpdate@Warden@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 137, symbol: ?onPush@Warden@@UEAAXAEAVActor@@@Z
    virtual void onPush(class Actor& source);

    // vIndex: 148, symbol: ?_hurt@Warden@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 162, symbol: ?checkSpawnRules@Warden@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 163, symbol: ?checkSpawnObstruction@Warden@@UEBA_NXZ
    virtual bool checkSpawnObstruction() const;

    // vIndex: 169, symbol: ?doHurtTarget@Warden@@MEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
    virtual bool doHurtTarget(class Actor* target, ::ActorDamageCause const& cause);

    // symbol: ??0Warden@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Warden(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND
};
