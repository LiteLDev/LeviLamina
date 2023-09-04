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
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

class Slime : public ::Monster {
public:
    // prevent constructor by default
    Slime& operator=(Slime const&) = delete;
    Slime(Slime const&)            = delete;
    Slime()                        = delete;

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ?reloadHardcoded@Slime@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 19, symbol: ?remove@Slime@@UEAAXXZ
    virtual void remove();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 69, symbol: ?getShadowRadius@Slime@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

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

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 173, symbol: ?onSynchedDataUpdate@Slime@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

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

    // vIndex: 243, symbol: ?readAdditionalSaveData@Slime@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 244, symbol: ?addAdditionalSaveData@Slime@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 264, symbol: ?aiStep@Slime@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 268, symbol: ?checkSpawnRules@Slime@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 276, symbol: __unk_vfn_276
    virtual void __unk_vfn_276();

    // vIndex: 280, symbol: __unk_vfn_280
    virtual void __unk_vfn_280();

    // vIndex: 312, symbol: ?_getWalkTargetValue@Slime@@MEAAMAEBVBlockPos@@@Z
    virtual float _getWalkTargetValue(class BlockPos const&);

    // vIndex: 323, symbol: __unk_vfn_323
    virtual void __unk_vfn_323();

    // vIndex: 326, symbol: ?getSquishSound@Slime@@UEAA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getSquishSound();

    // vIndex: 327, symbol: ?setSlimeSize@Slime@@MEAAXH@Z
    virtual void setSlimeSize(int);

    // vIndex: 328, symbol: ?doPlayJumpSound@Slime@@MEAA_NXZ
    virtual bool doPlayJumpSound();

    // vIndex: 329, symbol: ?doPlayLandSound@Slime@@MEAA_NXZ
    virtual bool doPlayLandSound();

    // vIndex: 330, symbol: ?playJumpSound@Slime@@MEAAXXZ
    virtual void playJumpSound();

    // vIndex: 331, symbol: ?playLandSound@Slime@@MEAAXXZ
    virtual void playLandSound();

    // vIndex: 332, symbol: ?decreaseSquish@Slime@@MEAAXXZ
    virtual void decreaseSquish();

    // vIndex: 333, symbol: ?createChild@Slime@@MEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@H@Z
    virtual class OwnerPtrT<struct EntityRefTraits> createChild(int);

    // symbol: ??1Slime@@UEAA@XZ
    MCVAPI ~Slime();

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
