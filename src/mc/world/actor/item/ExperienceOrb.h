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
#include "mc/world/item/components/ItemUseMethod.h"

class ExperienceOrb : public ::Actor {
public:
    // ExperienceOrb inner types define
    enum class DropType {};

public:
    // prevent constructor by default
    ExperienceOrb& operator=(ExperienceOrb const&);
    ExperienceOrb(ExperienceOrb const&);
    ExperienceOrb();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol:
    // ?reloadHardcoded@ExperienceOrb@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 68, symbol: ?getShadowRadius@ExperienceOrb@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 77, symbol: ?playerTouch@ExperienceOrb@@UEAAXAEAVPlayer@@@Z
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

    // vIndex: 119, symbol: ?isInvulnerableTo@ExperienceOrb@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

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

    // vIndex: 230, symbol: ?doWaterSplashEffect@ExperienceOrb@@MEAAXXZ
    virtual void doWaterSplashEffect();

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@ExperienceOrb@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 239, symbol: ?readAdditionalSaveData@ExperienceOrb@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@ExperienceOrb@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 241, symbol: ?_playStepSound@ExperienceOrb@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const&, class Block const&);

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // symbol: ??0ExperienceOrb@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ExperienceOrb(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getIconIndex@ExperienceOrb@@QEBAHXZ
    MCAPI int getIconIndex() const;

    // symbol: ?postNormalTick@ExperienceOrb@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?spawnOrbs@ExperienceOrb@@SAXAEAVBlockSource@@AEBVVec3@@HW4DropType@1@PEAVPlayer@@@Z
    MCAPI static void spawnOrbs(class BlockSource&, class Vec3 const&, int, ::ExperienceOrb::DropType, class Player*);

    // symbol: ?spawnOrbs@ExperienceOrb@@SAXAEAVBlockSource@@AEBVVec3@@HHW4DropType@1@PEAVPlayer@@@Z
    MCAPI static void
    spawnOrbs(class BlockSource&, class Vec3 const&, int, int, ::ExperienceOrb::DropType, class Player*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_handleMending@ExperienceOrb@@AEAAXAEAVPlayer@@@Z
    MCAPI void _handleMending(class Player&);

    // symbol: ?_spawnOrb@ExperienceOrb@@CAXAEAVBlockSource@@AEAVLevel@@AEBVVec3@@H@Z
    MCAPI static void _spawnOrb(class BlockSource&, class Level&, class Vec3 const&, int);

    // symbol: ?_tryMergeIntoExistingOrbs@ExperienceOrb@@CA_NAEAVBlockSource@@AEBVVec3@@H@Z
    MCAPI static bool _tryMergeIntoExistingOrbs(class BlockSource&, class Vec3 const&, int);

    // NOLINTEND
};
