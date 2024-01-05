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

class Npc : public ::Mob {
public:
    // prevent constructor by default
    Npc& operator=(Npc const&);
    Npc(Npc const&);
    Npc();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@Npc@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 6, symbol: ?initializeComponents@Npc@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1Npc@@UEAA@XZ
    virtual ~Npc() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 38, symbol: ?canShowNameTag@Npc@@UEBA_NXZ
    virtual bool canShowNameTag() const;

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: ?getNameTagTextColor@Npc@@UEBA?AVColor@mce@@XZ
    virtual class mce::Color getNameTagTextColor() const;

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

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 115, symbol: ?canBePulledIntoVehicle@Npc@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 121, symbol:
    // ?buildDebugInfo@Npc@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void buildDebugInfo(std::string& out) const;

    // vIndex: 124, symbol: ?canBeAffected@Npc@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 147, symbol: ?die@Npc@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?_hurt@Npc@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float, bool, bool);

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 169, symbol: ?knockback@Npc@@UEAAXPEAVActor@@HMMMMM@Z
    virtual void knockback(class Actor*, int, float, float, float, float, float);

    // vIndex: 205, symbol: ?canExistWhenDisallowMob@Npc@@UEBA_NXZ
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 207, symbol: ?newServerAiStep@Npc@@UEAAXXZ
    virtual void newServerAiStep();

    // symbol: ?breaksFallingBlocks@Npc@@UEBA_NXZ
    MCVAPI bool breaksFallingBlocks() const;

    // symbol: ?interactPreventDefault@Npc@@UEAA_NXZ
    MCVAPI bool interactPreventDefault();

    // symbol: ?isTargetable@Npc@@UEBA_NXZ
    MCVAPI bool isTargetable() const;

    // symbol: ??0Npc@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI
    Npc(class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext);

    // symbol: ?SKIN_ID_TAG@Npc@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const SKIN_ID_TAG;

    // symbol:
    // ?Skins@Npc@@2V?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@B
    MCAPI static std::vector<std::pair<std::string, std::string>> const Skins;

    // NOLINTEND
};
