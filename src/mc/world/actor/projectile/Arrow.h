#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/AbstractArrow.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
class ItemStack;
class MobEffectInstance;
class Player;
class Vec3;
struct VariantParameterList;
namespace mce { class Color; }
// clang-format on

class Arrow : public ::AbstractArrow {
public:
    // Arrow inner types define
    enum class Data : int {
        IsCritical     = 16,
        TippedAuxValue = 18,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                 mLife;
    ::ll::TypedStorage<1, 1, bool>                                mHasSkippedFirstCritParticle;
    ::ll::TypedStorage<4, 4, int>                                 mEnchantFlame;
    ::ll::TypedStorage<4, 4, int>                                 mEnchantInfinity;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobEffectInstance>> mMobEffects;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed) /*override*/;

    virtual void normalTick() /*override*/;

    virtual void playerTouch(::Player& player) /*override*/;

    virtual void setAuxValue(int aux) /*override*/;

    virtual ::ItemStack _getPickupItem() const /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ::mce::Color getEffectColor();

    virtual ~Arrow() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addMobEffect(::MobEffectInstance effect);

    MCAPI int getAuxValue() const;

    MCAPI void setCritical(bool isCrit);

    MCAPI void setEnchantFlame(int level);

    MCAPI void setEnchantPower(int level);

    MCAPI void setEnchantPunch(int level);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed);

    MCAPI void $normalTick();

    MCAPI void $playerTouch(::Player& player);

    MCAPI void $setAuxValue(int aux);

    MCAPI ::ItemStack $_getPickupItem() const;

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::mce::Color $getEffectColor();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
