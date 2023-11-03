#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
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
#include "mc/world/actor/monster/Slime.h"
#include "mc/world/item/components/ItemUseMethod.h"

class LavaSlime : public ::Slime {
public:
    // prevent constructor by default
    LavaSlime& operator=(LavaSlime const&);
    LavaSlime(LavaSlime const&);
    LavaSlime();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@LavaSlime@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

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

    // vIndex: 46, symbol: ?getBrightness@LavaSlime@@UEBAMMAEBVIConstBlockSource@@@Z
    virtual float getBrightness(float, class IConstBlockSource const&) const;

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 59, symbol: ?isOnFire@LavaSlime@@MEBA_NXZ
    virtual bool isOnFire() const;

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 183, symbol: ?checkSpawnRules@LavaSlime@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 191, symbol: ?getArmorValue@LavaSlime@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 216, symbol: ?isDarkEnoughToSpawn@LavaSlime@@UEBA_NXZ
    virtual bool isDarkEnoughToSpawn() const;

    // vIndex: 220, symbol: ?doPlayLandSound@LavaSlime@@MEAA_NXZ
    virtual bool doPlayLandSound();

    // vIndex: 223, symbol: ?decreaseSquish@LavaSlime@@MEAAXXZ
    virtual void decreaseSquish();

    // vIndex: 224, symbol: ?createChild@LavaSlime@@MEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@H@Z
    virtual class OwnerPtrT<struct EntityRefTraits> createChild(int);

    // symbol: ??0LavaSlime@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI LavaSlime(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // NOLINTEND
};
