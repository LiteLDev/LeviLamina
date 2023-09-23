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
    Slime& operator=(Slime const&);
    Slime(Slime const&);
    Slime();

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

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 68, symbol: ?getShadowRadius@Slime@@UEBAMXZ
    virtual float getShadowRadius() const;

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

    // vIndex: 169, symbol: ?onSynchedDataUpdate@Slime@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

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

    // vIndex: 239, symbol: ?readAdditionalSaveData@Slime@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@Slime@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 259, symbol: ?aiStep@Slime@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 262, symbol: ?checkSpawnRules@Slime@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 306, symbol: ?_getWalkTargetValue@Slime@@MEAAMAEBVBlockPos@@@Z
    virtual float _getWalkTargetValue(class BlockPos const&);

    // vIndex: 319, symbol: ?getSquishSound@Slime@@UEAA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getSquishSound();

    // vIndex: 320, symbol: ?setSlimeSize@Slime@@MEAAXH@Z
    virtual void setSlimeSize(int);

    // vIndex: 321, symbol: ?doPlayJumpSound@Slime@@MEAA_NXZ
    virtual bool doPlayJumpSound();

    // vIndex: 322, symbol: ?doPlayLandSound@Slime@@MEAA_NXZ
    virtual bool doPlayLandSound();

    // vIndex: 323, symbol: ?playJumpSound@Slime@@MEAAXXZ
    virtual void playJumpSound();

    // vIndex: 324, symbol: ?playLandSound@Slime@@MEAAXXZ
    virtual void playLandSound();

    // vIndex: 325, symbol: ?decreaseSquish@Slime@@MEAAXXZ
    virtual void decreaseSquish();

    // vIndex: 326, symbol: ?createChild@Slime@@MEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@H@Z
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
