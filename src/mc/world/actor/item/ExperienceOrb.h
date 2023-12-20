#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
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

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

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
    // vIndex: 4, symbol: ?reloadHardcoded@ExperienceOrb@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __gen_??1ExperienceOrb@@UEAA@XZ
    virtual ~ExperienceOrb() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: ?getShadowRadius@ExperienceOrb@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: ?playerTouch@ExperienceOrb@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player&);

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 78, symbol: ?isInvulnerableTo@ExperienceOrb@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 157, symbol: ?doWaterSplashEffect@ExperienceOrb@@MEAAXXZ
    virtual void doWaterSplashEffect();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?_hurt@ExperienceOrb@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 164, symbol: ?readAdditionalSaveData@ExperienceOrb@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 165, symbol: ?addAdditionalSaveData@ExperienceOrb@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 166, symbol: ?_playStepSound@ExperienceOrb@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const&, class Block const&);

    // symbol: ??0ExperienceOrb@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ExperienceOrb(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getIconIndex@ExperienceOrb@@QEBAHXZ
    MCAPI int getIconIndex() const;

    // symbol: ?postNormalTick@ExperienceOrb@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?setValue@ExperienceOrb@@QEAAXH@Z
    MCAPI void setValue(int);

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

    // symbol: ?_tryMergeExistingOrbs@ExperienceOrb@@AEAAXXZ
    MCAPI void _tryMergeExistingOrbs();

    // symbol: ?_spawnOrb@ExperienceOrb@@CAXAEAVBlockSource@@AEAVLevel@@AEBVVec3@@H@Z
    MCAPI static void _spawnOrb(class BlockSource&, class Level&, class Vec3 const&, int);

    // symbol: ?_tryMergeIntoExistingOrbs@ExperienceOrb@@CA_NAEAVBlockSource@@AEBVVec3@@H@Z
    MCAPI static bool _tryMergeIntoExistingOrbs(class BlockSource&, class Vec3 const&, int);

    // NOLINTEND
};
