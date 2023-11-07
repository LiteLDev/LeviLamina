#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/monster/HumanoidMonster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
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

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@Skeleton@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 65, symbol: ?setTarget@Skeleton@@UEAAXPEAVActor@@@Z
    virtual void setTarget(class Actor*);

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 103, symbol: ?canFreeze@Skeleton@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 120, symbol: __unk_vfn_120
    virtual void __unk_vfn_120();

    // vIndex: 126, symbol: ?canBeAffected@Skeleton@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 136, symbol:
    // ?getDebugText@Skeleton@@EEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual void getDebugText(std::vector<std::string>&);

    // vIndex: 142, symbol: __unk_vfn_142
    virtual void __unk_vfn_142();

    // vIndex: 143, symbol: __unk_vfn_143
    virtual void __unk_vfn_143();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 150, symbol: ?die@Skeleton@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 154, symbol: __unk_vfn_154
    virtual void __unk_vfn_154();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 190, symbol: ?doHurtTarget@Skeleton@@UEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
    virtual bool doHurtTarget(class Actor*, ::ActorDamageCause const&);

    // vIndex: 204, symbol: __unk_vfn_204
    virtual void __unk_vfn_204();

    // vIndex: 212, symbol: __unk_vfn_212
    virtual void __unk_vfn_212();

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
