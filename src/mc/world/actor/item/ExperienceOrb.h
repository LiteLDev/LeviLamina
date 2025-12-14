#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Level;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class ExperienceOrb : public ::Actor {
public:
    // ExperienceOrb inner types define
    enum class DropType : uchar {
        NoType     = 0,
        FromBlock  = 1,
        FromMob    = 2,
        FromPlayer = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mFollowingPlayer;
    ::ll::TypedStorage<4, 4, int>             mFollowingTime;
    ::ll::TypedStorage<4, 4, int>             mAge;
    ::ll::TypedStorage<4, 4, int>             mHealth;
    ::ll::TypedStorage<4, 4, int>             mRandomPickupValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceOrb();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual void playerTouch(::Player& player) /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual bool _hurt(::ActorDamageSource const&, float damage, bool, bool) /*override*/;

    virtual void doWaterSplashEffect() /*override*/;

    virtual ~ExperienceOrb() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExperienceOrb(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _handleMending(::Player& player);

    MCAPI void _tryMergeExistingOrbs();

    MCAPI int getValue() const;

    MCAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _spawnOrb(::BlockSource& region, ::Level& level, ::Vec3 const& pos, int orbXPValue);

    MCAPI static bool _tryMergeIntoExistingOrbs(::BlockSource& region, ::Vec3 const& pos, int xpValue);

    MCAPI static void spawnOrbs(
        ::BlockSource&            region,
        ::Vec3 const&             pos,
        int                       xpValue,
        ::ExperienceOrb::DropType dropType,
        ::Player*                 owner
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $playerTouch(::Player& player);

    MCFOLD float $getShadowRadius() const;

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI bool $_hurt(::ActorDamageSource const&, float damage, bool, bool);

    MCFOLD void $doWaterSplashEffect();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
