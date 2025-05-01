#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class MobEffectInstance;
class Random;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct EffectDuration;
struct VariantParameterList;
namespace mce { class Color; }
// clang-format on

class AreaEffectCloud : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkce8056;
    ::ll::UntypedStorage<1, 1>  mUnk156f46;
    ::ll::UntypedStorage<8, 8>  mUnkdb5778;
    ::ll::UntypedStorage<4, 4>  mUnkc6f235;
    ::ll::UntypedStorage<4, 4>  mUnk710b83;
    ::ll::UntypedStorage<4, 4>  mUnke886ed;
    ::ll::UntypedStorage<4, 4>  mUnk2cbab8;
    ::ll::UntypedStorage<8, 24> mUnk92e9be;
    ::ll::UntypedStorage<8, 64> mUnk66cb21;
    // NOLINTEND

public:
    // prevent constructor by default
    AreaEffectCloud& operator=(AreaEffectCloud const&);
    AreaEffectCloud(AreaEffectCloud const&);
    AreaEffectCloud();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    // vIndex: 55
    virtual void setOwner(::ActorUniqueID const ownerId) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 8
    virtual ~AreaEffectCloud() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AreaEffectCloud(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void _spawnParticles(::Random& random, uint numParticles, float radius);

    MCNAPI void addAreaEffect(::MobEffectInstance effect);

    MCNAPI void calculateAndSetRadiusPerTick();

    MCNAPI float getEffectiveRadius() const;

    MCNAPI void setDuration(::EffectDuration duration);

    MCNAPI void setInitialRadius(float radius);

    MCNAPI void setParticle(::ParticleType type);

    MCNAPI void setParticleColor(::mce::Color& c);

    MCNAPI void setPickupCount(int useCount);

    MCNAPI void setPotion(short potionAUX);

    MCNAPI void setRadiusChangeOnPickup(float changeAmount);

    MCNAPI void setRadiusPerTick(float radiusPerTick);
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
    MCNAPI void $setOwner(::ActorUniqueID const ownerId);

    MCNAPI void $normalTick();

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
