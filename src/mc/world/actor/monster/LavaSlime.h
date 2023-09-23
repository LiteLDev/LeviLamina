#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
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
    // vIndex: 10, symbol: ?reloadHardcoded@LavaSlime@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 75, symbol: ?getBrightness@LavaSlime@@UEBAMMAEBVIConstBlockSource@@@Z
    virtual float getBrightness(float, class IConstBlockSource const&) const;

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 82, symbol: __unk_vfn_82
    virtual void __unk_vfn_82();

    // vIndex: 85, symbol: __unk_vfn_85
    virtual void __unk_vfn_85();

    // vIndex: 90, symbol: ?isOnFire@LavaSlime@@MEBA_NXZ
    virtual bool isOnFire() const;

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

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 262, symbol: ?checkSpawnRules@LavaSlime@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 279, symbol: ?getArmorValue@LavaSlime@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 318, symbol: ?isDarkEnoughToSpawn@LavaSlime@@UEBA_NXZ
    virtual bool isDarkEnoughToSpawn() const;

    // vIndex: 322, symbol: ?doPlayLandSound@LavaSlime@@MEAA_NXZ
    virtual bool doPlayLandSound();

    // vIndex: 325, symbol: ?decreaseSquish@LavaSlime@@MEAAXXZ
    virtual void decreaseSquish();

    // vIndex: 326, symbol: ?createChild@LavaSlime@@MEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@H@Z
    virtual class OwnerPtrT<struct EntityRefTraits> createChild(int);

    // symbol: ??0LavaSlime@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI LavaSlime(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // NOLINTEND
};
