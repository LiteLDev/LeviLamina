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
#include "mc/enums/ParticleType.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/projectile/Fireball.h"
#include "mc/world/item/components/ItemUseMethod.h"

class WitherSkull : public ::Fireball {
public:
    // prevent constructor by default
    WitherSkull& operator=(WitherSkull const&);
    WitherSkull(WitherSkull const&);
    WitherSkull();

public:
    // NOLINTBEGIN
    // vIndex: 6, symbol:
    // ?initializeComponents@WitherSkull@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 51, symbol: ?isPickable@WitherSkull@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 59, symbol: ?isOnFire@WitherSkull@@UEBA_NXZ
    virtual bool isOnFire() const;

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 142, symbol: ?canDestroyBlock@WitherSkull@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroyBlock(class Block const&) const;

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@WitherSkull@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 173, symbol: ?getInertia@WitherSkull@@MEAAMXZ
    virtual float getInertia();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // symbol: ?shouldBurn@WitherSkull@@UEAA_NXZ
    MCVAPI bool shouldBurn();

    // symbol: ??0WitherSkull@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI WitherSkull(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // NOLINTEND
};
