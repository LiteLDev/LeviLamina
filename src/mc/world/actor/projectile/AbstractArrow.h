#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
class ItemStack;
class Player;
class Vec3;
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool _canPickup(::Player const& player) const;
#endif

#ifdef LL_PLAT_S
    MCNAPI bool _canPickup(::Player const& player) const;
#endif

    MCNAPI void _defineEntityData();
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
