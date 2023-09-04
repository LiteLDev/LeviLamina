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
    AbstractArrow& operator=(AbstractArrow const&) = delete;
    AbstractArrow(AbstractArrow const&)            = delete;
    AbstractArrow()                                = delete;

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

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 68, symbol: ?getShadowHeightOffs@AbstractArrow@@UEAAMXZ
    virtual float getShadowHeightOffs();

    // vIndex: 69, symbol: ?getShadowRadius@AbstractArrow@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 78, symbol: ?playerTouch@AbstractArrow@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player&);

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 86, symbol: __unk_vfn_86
    virtual void __unk_vfn_86();

    // vIndex: 93, symbol: __unk_vfn_93
    virtual void __unk_vfn_93();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: __unk_vfn_96
    virtual void __unk_vfn_96();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 155, symbol: ?getSourceUniqueID@AbstractArrow@@MEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 163, symbol: ?canChangeDimensionsUsingPortal@AbstractArrow@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 243, symbol: ?readAdditionalSaveData@AbstractArrow@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 244, symbol: ?addAdditionalSaveData@AbstractArrow@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 254, symbol: ?shoot@AbstractArrow@@UEAAXAEBVVec3@@MM0@Z
    virtual void shoot(class Vec3 const&, float, float, class Vec3 const&);

    // vIndex: 255, symbol: ?_playPickupSound@AbstractArrow@@MEAAXXZ
    virtual void _playPickupSound();

    // vIndex: 256, symbol: ?_getPickupItem@ThrownTrident@@MEBA?AVItemStack@@XZ
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
