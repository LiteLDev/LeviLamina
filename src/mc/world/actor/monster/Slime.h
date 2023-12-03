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
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

class Slime : public ::Monster {
public:
    // prevent constructor by default
    Slime& operator=(Slime const&);
    Slime(Slime const&);
    Slime();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@Slime@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: ??1Slime@@UEAA@XZ
    virtual ~Slime();

    // vIndex: 13, symbol: ?remove@Slime@@UEAAXXZ
    virtual void remove();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: ?getShadowRadius@Slime@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 114, symbol: ?onSynchedDataUpdate@Slime@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 167, symbol: ?readAdditionalSaveData@Slime@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@Slime@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 181, symbol: ?aiStep@Slime@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 183, symbol: ?checkSpawnRules@Slime@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 208, symbol: ?_getWalkTargetValue@Slime@@MEAAMAEBVBlockPos@@@Z
    virtual float _getWalkTargetValue(class BlockPos const&);

    // vIndex: 217, symbol: ?getSquishSound@Slime@@UEAA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getSquishSound();

    // vIndex: 218, symbol: ?setSlimeSize@Slime@@MEAAXH@Z
    virtual void setSlimeSize(int);

    // vIndex: 219, symbol: ?doPlayJumpSound@Slime@@MEAA_NXZ
    virtual bool doPlayJumpSound();

    // vIndex: 220, symbol: ?doPlayLandSound@Slime@@MEAA_NXZ
    virtual bool doPlayLandSound();

    // vIndex: 221, symbol: ?playJumpSound@Slime@@MEAAXXZ
    virtual void playJumpSound();

    // vIndex: 222, symbol: ?playLandSound@Slime@@MEAAXXZ
    virtual void playLandSound();

    // vIndex: 223, symbol: ?decreaseSquish@Slime@@MEAAXXZ
    virtual void decreaseSquish();

    // vIndex: 224, symbol: ?createChild@Slime@@MEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@H@Z
    virtual class OwnerPtrT<struct EntityRefTraits> createChild(int);

    // symbol: ??0Slime@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Slime(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getOldSquishValue@Slime@@QEBAMXZ
    MCAPI float getOldSquishValue() const;

    // symbol: ?getSquishValue@Slime@@QEBAMXZ
    MCAPI float getSquishValue() const;

    // symbol: ?postNormalTick@Slime@@QEAAX_N@Z
    MCAPI void postNormalTick(bool);

    // symbol: ?preNormalTick@Slime@@QEAAXXZ
    MCAPI void preNormalTick();

    // symbol: ?getSpawnRulesCallback@Slime@@SA?AV?$function@$$A6A_NAEBVSpawnConditions@@AEAVBlockSource@@@Z@std@@XZ
    MCAPI static std::function<bool(class SpawnConditions const&, class BlockSource&)> getSpawnRulesCallback();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?justJumped@Slime@@IEAAXXZ
    MCAPI void justJumped();

    // symbol: ?justLanded@Slime@@IEAAXXZ
    MCAPI void justLanded();

    // NOLINTEND
};
