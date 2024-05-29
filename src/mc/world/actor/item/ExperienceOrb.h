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
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1ExperienceOrb@@UEAA@XZ
    virtual ~ExperienceOrb() = default;

    // vIndex: 38, symbol: ?getShadowRadius@ExperienceOrb@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 42, symbol: ?playerTouch@ExperienceOrb@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player& player);

    // vIndex: 70, symbol: ?isInvulnerableTo@ExperienceOrb@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 143, symbol: ?doWaterSplashEffect@ExperienceOrb@@MEAAXXZ
    virtual void doWaterSplashEffect();

    // vIndex: 148, symbol: ?_hurt@ExperienceOrb@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 149, symbol: ?readAdditionalSaveData@ExperienceOrb@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@ExperienceOrb@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 151, symbol: ?_playStepSound@ExperienceOrb@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const& pos, class Block const& onBlock);

    // symbol: ??0ExperienceOrb@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ExperienceOrb(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?getIconIndex@ExperienceOrb@@QEBAHXZ
    MCAPI int getIconIndex() const;

    // symbol: ?postNormalTick@ExperienceOrb@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?setValue@ExperienceOrb@@QEAAXH@Z
    MCAPI void setValue(int value);

    // symbol: ?spawnOrbs@ExperienceOrb@@SAXAEAVBlockSource@@AEBVVec3@@HW4DropType@1@PEAVPlayer@@@Z
    MCAPI static void spawnOrbs(
        class BlockSource&        region,
        class Vec3 const&         pos,
        int                       xpValue,
        ::ExperienceOrb::DropType dropType,
        class Player*             owner
    );

    // symbol: ?spawnOrbs@ExperienceOrb@@SAXAEAVBlockSource@@AEBVVec3@@HHW4DropType@1@PEAVPlayer@@@Z
    MCAPI static void spawnOrbs(
        class BlockSource&        region,
        class Vec3 const&         pos,
        int                       randValueMin,
        int                       randValueMax,
        ::ExperienceOrb::DropType dropType,
        class Player*             owner
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_handleMending@ExperienceOrb@@AEAAXAEAVPlayer@@@Z
    MCAPI void _handleMending(class Player& player);

    // symbol: ?_tryMergeExistingOrbs@ExperienceOrb@@AEAAXXZ
    MCAPI void _tryMergeExistingOrbs();

    // symbol: ?_spawnOrb@ExperienceOrb@@CAXAEAVBlockSource@@AEAVLevel@@AEBVVec3@@H@Z
    MCAPI static void _spawnOrb(class BlockSource& region, class Level& level, class Vec3 const& pos, int);

    // symbol: ?_tryMergeIntoExistingOrbs@ExperienceOrb@@CA_NAEAVBlockSource@@AEBVVec3@@H@Z
    MCAPI static bool _tryMergeIntoExistingOrbs(class BlockSource&, class Vec3 const&, int);

    // NOLINTEND
};
