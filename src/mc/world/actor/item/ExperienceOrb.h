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
    // vIndex: 4, symbol:
    // ?reloadHardcoded@ExperienceOrb@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: ?getShadowRadius@ExperienceOrb@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: ?playerTouch@ExperienceOrb@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player&);

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 79, symbol: ?isInvulnerableTo@ExperienceOrb@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 160, symbol: ?doWaterSplashEffect@ExperienceOrb@@MEAAXXZ
    virtual void doWaterSplashEffect();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@ExperienceOrb@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 167, symbol: ?readAdditionalSaveData@ExperienceOrb@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@ExperienceOrb@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 169, symbol: ?_playStepSound@ExperienceOrb@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const&, class Block const&);

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

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
