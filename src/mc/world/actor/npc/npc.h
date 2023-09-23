#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
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
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

class Npc : public ::Mob {
public:
    // prevent constructor by default
    Npc& operator=(Npc const&);
    Npc(Npc const&);
    Npc();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ?reloadHardcoded@Npc@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 12, symbol: ?initializeComponents@Npc@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 53, symbol: ?canShowNameTag@Npc@@UEBA_NXZ
    virtual bool canShowNameTag() const;

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 58, symbol:
    // ?getFormattedNameTag@Npc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getFormattedNameTag() const;

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 82, symbol: __unk_vfn_82
    virtual void __unk_vfn_82();

    // vIndex: 85, symbol: __unk_vfn_85
    virtual void __unk_vfn_85();

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 94, symbol: __unk_vfn_94
    virtual void __unk_vfn_94();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 97, symbol: __unk_vfn_97
    virtual void __unk_vfn_97();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 172, symbol: ?canBePulledIntoVehicle@Npc@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 180, symbol:
    // ?buildDebugInfo@Npc@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void buildDebugInfo(std::string&) const;

    // vIndex: 188, symbol: ?canBeAffected@Npc@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 220, symbol: ?die@Npc@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@Npc@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 247, symbol: ?_onSizeUpdated@Npc@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 249, symbol: ?knockback@Npc@@UEAAXPEAVActor@@HMMMMM@Z
    virtual void knockback(class Actor*, int, float, float, float, float, float);

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 307, symbol: ?canExistWhenDisallowMob@Npc@@UEBA_NXZ
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 312, symbol: ?newServerAiStep@Npc@@UEAAXXZ
    virtual void newServerAiStep();

    // vIndex: 313, symbol: ?_serverAiMobStep@Npc@@MEAAXXZ
    virtual void _serverAiMobStep();

    // symbol: ?breaksFallingBlocks@Npc@@UEBA_NXZ
    MCVAPI bool breaksFallingBlocks() const;

    // symbol: ?interactPreventDefault@Npc@@UEAA_NXZ
    MCVAPI bool interactPreventDefault();

    // symbol: ?isFishable@Npc@@UEBA_NXZ
    MCVAPI bool isFishable() const;

    // symbol: ?isTargetable@Npc@@UEBA_NXZ
    MCVAPI bool isTargetable() const;

    // symbol: ??0Npc@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Npc(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?SKIN_ID_TAG@Npc@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const SKIN_ID_TAG;

    // symbol:
    // ?Skins@Npc@@2V?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@B
    MCAPI static std::vector<std::pair<std::string, std::string>> const Skins;

    // NOLINTEND
};
