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

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@Skeleton@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 64, symbol: ?setTarget@Skeleton@@UEAAXPEAVActor@@@Z
    virtual void setTarget(class Actor*);

    // vIndex: 101, symbol: ?canFreeze@Skeleton@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 124, symbol: ?canBeAffected@Skeleton@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 134, symbol:
    // ?getDebugText@Skeleton@@EEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual void getDebugText(std::vector<std::string>&);

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 147, symbol: ?die@Skeleton@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 186, symbol: ?doHurtTarget@Skeleton@@UEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
    virtual bool doHurtTarget(class Actor*, ::ActorDamageCause const&);

    // symbol: ??0Skeleton@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Skeleton(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?setWitherParent@Skeleton@@QEAAXPEAVWitherBoss@@@Z
    MCAPI void setWitherParent(class WitherBoss*);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?SPEED_MODIFIER_ATTACK_UUID@Skeleton@@0VUUID@mce@@B
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACK_UUID;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $SPEED_MODIFIER_ATTACK_UUID() { return SPEED_MODIFIER_ATTACK_UUID; }

    // NOLINTEND
};
