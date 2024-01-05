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

class Witch : public ::HumanoidMonster {
public:
    // prevent constructor by default
    Witch& operator=(Witch const&);
    Witch(Witch const&);
    Witch();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Witch@@UEAA@XZ
    virtual ~Witch() = default;

    // vIndex: 15, symbol: ?getFiringPos@Witch@@UEBA?AVVec3@@XZ
    virtual class Vec3 getFiringPos() const;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

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

    // vIndex: 63, symbol: ?canAttack@Witch@@UEBA_NPEAVActor@@_N@Z
    virtual bool canAttack(class Actor* actor, bool allowInvulnerable) const;

    // vIndex: 83, symbol: ?handleEntityEvent@Witch@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int data);

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 160, symbol: ?updateEntitySpecificMolangVariables@Witch@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 198, symbol: ?getDamageAfterEnchantReduction@Witch@@MEBAMAEBVActorDamageSource@@M@Z
    virtual float getDamageAfterEnchantReduction(class ActorDamageSource const& source, float damage) const;

    // symbol: ??0Witch@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Witch(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?preAiStep@Witch@@QEAAXXZ
    MCAPI void preAiStep();

    // NOLINTEND
};
