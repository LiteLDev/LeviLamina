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
    ::ll::UntypedStorage<4, 4>  mUnk3d577d;
    ::ll::UntypedStorage<4, 4>  mUnk5b628b;
    ::ll::UntypedStorage<4, 4>  mUnkbc8193;
    ::ll::UntypedStorage<8, 24> mUnk5ddff5;
    // NOLINTEND

public:
    // prevent constructor by default
    Arrow& operator=(Arrow const&);
    Arrow(Arrow const&);
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
    MCNAPI Arrow(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void addMobEffect(::MobEffectInstance effect);

    MCNAPI int getAuxValue() const;

    MCNAPI void setCritical(bool isCrit);

    MCNAPI void setEnchantFlame(int level);

    MCNAPI void setEnchantPower(int level);

    MCNAPI void setEnchantPunch(int level);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed);

    MCNAPI void $normalTick();

    MCNAPI void $playerTouch(::Player& player);

    MCNAPI void $setAuxValue(int aux);

    MCNAPI ::ItemStack $_getPickupItem() const;

    MCNAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $applyParticleColor(::Particle* p);

    MCNAPI ::mce::Color $getEffectColor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
