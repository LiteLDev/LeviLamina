#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/AbstractArrow.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class ItemStack;
class MobEffectInstance;
class Particle;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
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
    ::ll::TypedStorage<4, 4, int>                                 mEnchantFlame;
    ::ll::TypedStorage<4, 4, int>                                 mEnchantInfinity;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobEffectInstance>> mMobEffects;
    // NOLINTEND

public:
    // prevent constructor by default
    Arrow();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 138
    virtual void shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 39
    virtual void playerTouch(::Player& player) /*override*/;

    // vIndex: 120
    virtual void setAuxValue(int aux) /*override*/;

    // vIndex: 139
    virtual ::ItemStack _getPickupItem() const /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 140
    virtual void applyParticleColor(::Particle* p);

    // vIndex: 141
    virtual ::mce::Color getEffectColor();

    // vIndex: 8
    virtual ~Arrow() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Arrow(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void addMobEffect(::MobEffectInstance effect);

    MCAPI int getAuxValue() const;

    MCAPI void setCritical(bool isCrit);

    MCAPI void setEnchantFlame(int level);

    MCAPI void setEnchantPower(int level);

    MCAPI void setEnchantPunch(int level);
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

    MCAPI void $shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed);

    MCAPI void $normalTick();

    MCAPI void $playerTouch(::Player& player);

    MCAPI void $setAuxValue(int aux);

    MCAPI ::ItemStack $_getPickupItem() const;

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $applyParticleColor(::Particle* p);

    MCAPI ::mce::Color $getEffectColor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
