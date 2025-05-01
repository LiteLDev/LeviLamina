#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
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
    ::ll::UntypedStorage<4, 4> mUnk4ea9fa;
    ::ll::UntypedStorage<1, 1> mUnk49a741;
    ::ll::UntypedStorage<1, 1> mUnk38a4b9;
    // NOLINTEND

public:
    // prevent constructor by default
    AbstractArrow& operator=(AbstractArrow const&);
    AbstractArrow(AbstractArrow const&);
    AbstractArrow();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 22
    virtual void lerpMotion(::Vec3 const& delta) /*override*/;

    // vIndex: 138
    virtual void shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed);

    // vIndex: 39
    virtual void playerTouch(::Player& player) /*override*/;

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 139
    virtual ::ItemStack _getPickupItem() const = 0;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 84
    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    // vIndex: 8
    virtual ~AbstractArrow() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _playPickupSound();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Actor*
    spawnPlayerProjectile(::ActorDefinitionIdentifier const& id, ::Player& player, ::Vec3 aimDir);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $lerpMotion(::Vec3 const& delta);

    MCNAPI void $shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed);

    MCNAPI void $playerTouch(::Player& player);

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
