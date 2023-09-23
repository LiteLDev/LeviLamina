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
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/components/ItemUseMethod.h"

class AbstractArrow : public ::PredictableProjectile {
public:
    // prevent constructor by default
    AbstractArrow& operator=(AbstractArrow const&);
    AbstractArrow(AbstractArrow const&);
    AbstractArrow();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol:
    // ?reloadHardcoded@AbstractArrow@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 12, symbol:
    // ?initializeComponents@AbstractArrow@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 41, symbol: ?lerpMotion@AbstractArrow@@UEAAXAEBVVec3@@@Z
    virtual void lerpMotion(class Vec3 const&);

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 67, symbol: ?getShadowHeightOffs@AbstractArrow@@UEAAMXZ
    virtual float getShadowHeightOffs();

    // vIndex: 68, symbol: ?getShadowRadius@AbstractArrow@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 77, symbol: ?playerTouch@AbstractArrow@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player&);

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

    // vIndex: 153, symbol: ?getSourceUniqueID@AbstractArrow@@MEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 161, symbol: ?canChangeDimensionsUsingPortal@AbstractArrow@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

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

    // vIndex: 239, symbol: ?readAdditionalSaveData@AbstractArrow@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@AbstractArrow@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 249, symbol: ?shoot@AbstractArrow@@UEAAXAEBVVec3@@MM0@Z
    virtual void shoot(class Vec3 const&, float, float, class Vec3 const&);

    // vIndex: 250, symbol: ?_playPickupSound@AbstractArrow@@MEAAXXZ
    virtual void _playPickupSound();

    // vIndex: 251, symbol: ?_getPickupItem@ThrownTrident@@MEBA?AVItemStack@@XZ
    virtual class ItemStack _getPickupItem() const = 0;

    // symbol: ??1AbstractArrow@@UEAA@XZ
    MCVAPI ~AbstractArrow();

    // symbol: ??0AbstractArrow@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI AbstractArrow(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?isPlayerOwned@AbstractArrow@@QEBA_NXZ
    MCAPI bool isPlayerOwned() const;

    // symbol: ?setFavoredSlot@AbstractArrow@@QEAAXH@Z
    MCAPI void setFavoredSlot(int);

    // symbol: ?setIsCreative@AbstractArrow@@QEAAX_N@Z
    MCAPI void setIsCreative(bool);

    // symbol: ?spawnPlayerProjectile@AbstractArrow@@SAPEAVActor@@AEBUActorDefinitionIdentifier@@AEAVPlayer@@VVec3@@@Z
    MCAPI static class Actor* spawnPlayerProjectile(struct ActorDefinitionIdentifier const&, class Player&, class Vec3);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canPickup@AbstractArrow@@IEBA_NAEBVPlayer@@@Z
    MCAPI bool _canPickup(class Player const&) const;

    // NOLINTEND
};
