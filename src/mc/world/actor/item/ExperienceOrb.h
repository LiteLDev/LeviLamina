#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

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
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~ExperienceOrb() = default;

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 42
    virtual void playerTouch(class Player& player);

    // vIndex: 69
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 141
    virtual void doWaterSplashEffect();

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const&, float damage, bool, bool);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper&);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 149
    virtual void _playStepSound(class BlockPos const&, class Block const&);

    MCAPI ExperienceOrb(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI int getIconIndex() const;

    MCAPI void postNormalTick();

    MCAPI void setValue(int value);

    MCAPI static void spawnOrbs(
        class BlockSource&        region,
        class Vec3 const&         pos,
        int                       xpValue,
        ::ExperienceOrb::DropType dropType,
        class Player*             owner
    );

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
    MCAPI void _handleMending(class Player& player);

    MCAPI void _tryMergeExistingOrbs();

    MCAPI static void _spawnOrb(class BlockSource& region, class Level& level, class Vec3 const& pos, int orbXPValue);

    MCAPI static bool _tryMergeIntoExistingOrbs(class BlockSource& region, class Vec3 const& pos, int xpValue);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI bool _hurt$(class ActorDamageSource const&, float damage, bool, bool);

    MCAPI void _playStepSound$(class BlockPos const&, class Block const&);

    MCAPI void addAdditionalSaveData$(class CompoundTag& tag) const;

    MCAPI void doWaterSplashEffect$();

    MCAPI float getShadowRadius$() const;

    MCAPI bool isInvulnerableTo$(class ActorDamageSource const& source) const;

    MCAPI void playerTouch$(class Player& player);

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    // NOLINTEND
};
