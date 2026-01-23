#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class ItemStack;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class AbstractArrow : public ::PredictableProjectile {
public:
    // AbstractArrow inner types define
    enum class Data : int {
        OwnerID = 17,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mFavoredSlot;
    ::ll::TypedStorage<1, 1, bool> mIsPlayerOwned;
    ::ll::TypedStorage<1, 1, bool> mIsCreative;
    // NOLINTEND

public:
    // prevent constructor by default
    AbstractArrow();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void lerpMotion(::Vec3 const& delta) /*override*/;

    virtual void shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed);

    virtual void playerTouch(::Player& player) /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual ::ItemStack _getPickupItem() const = 0;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    virtual ~AbstractArrow() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AbstractArrow(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _playPickupSound();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Actor* spawnPlayerProjectile(::ActorDefinitionIdentifier const& id, ::Player& player, ::Vec3 aimDir);
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
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCFOLD void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $lerpMotion(::Vec3 const& delta);

    MCFOLD void $shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed);

    MCAPI void $playerTouch(::Player& player);

    MCAPI float $getShadowRadius() const;

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
