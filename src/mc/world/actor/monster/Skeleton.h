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
namespace mce { class UUID; }
// clang-format on

class Skeleton : public ::HumanoidMonster {
public:
    // prevent constructor by default
    Skeleton& operator=(Skeleton const&);
    Skeleton(Skeleton const&);
    Skeleton();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Skeleton@@UEAA@XZ
    virtual ~Skeleton() = default;

    // vIndex: 26, symbol: ?normalTick@Skeleton@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 56, symbol: ?setTarget@Skeleton@@UEAAXPEAVActor@@@Z
    virtual void setTarget(class Actor* target);

    // vIndex: 93, symbol: ?canFreeze@Skeleton@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 113, symbol: ?canBeAffected@Skeleton@@UEBA_NI@Z
    virtual bool canBeAffected(uint effectId) const;

    // vIndex: 121, symbol:
    // ?getDebugText@Skeleton@@EEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual void getDebugText(std::vector<std::string>& outputInfo);

    // vIndex: 133, symbol: ?die@Skeleton@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 169, symbol: ?doHurtTarget@Skeleton@@UEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
    virtual bool doHurtTarget(class Actor* target, ::ActorDamageCause const& cause);

    // symbol: ??0Skeleton@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Skeleton(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?setWitherParent@Skeleton@@QEAAXPEAVWitherBoss@@@Z
    MCAPI void setWitherParent(class WitherBoss* wither);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?SPEED_MODIFIER_ATTACK_UUID@Skeleton@@0VUUID@mce@@B
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACK_UUID;

    // NOLINTEND
};
