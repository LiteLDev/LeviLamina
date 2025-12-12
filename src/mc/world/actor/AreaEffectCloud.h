#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class MobEffectInstance;
class Random;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
namespace mce { class Color; }
// clang-format on

class AreaEffectCloud : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mOwnerId;
    ::ll::TypedStorage<1, 1, bool>                                        mAffectOwner;
    ::ll::TypedStorage<8, 8, int64>                                       mSpawnTickClient;
    ::ll::TypedStorage<4, 4, int>                                         mReapplicationDelay;
    ::ll::TypedStorage<4, 4, ::EffectDuration>                            mDurationOnUse;
    ::ll::TypedStorage<4, 4, int>                                         mLocalPickupCount;
    ::ll::TypedStorage<4, 4, float>                                       mRadiusOnUse;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobEffectInstance>>         mMobAreaEffects;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, int>> mVictims;
    // NOLINTEND

public:
    // prevent constructor by default
    AreaEffectCloud();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void setOwner(::ActorUniqueID const ownerId) /*override*/;

    virtual void normalTick() /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ~AreaEffectCloud() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AreaEffectCloud(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _spawnParticles(::Random& random, uint numParticles, float radius);

    MCAPI void addAreaEffect(::MobEffectInstance effect);

    MCAPI void calculateAndSetRadiusPerTick();

    MCAPI float getEffectiveRadius() const;

    MCAPI void setDuration(::EffectDuration duration);

    MCAPI void setInitialRadius(float radius);

    MCAPI void setParticle(::ParticleType type);

    MCAPI void setParticleColor(::mce::Color& c);

    MCAPI void setPickupCount(int useCount);

    MCAPI void setPotion(short potionAUX);

    MCAPI void setRadiusChangeOnPickup(float changeAmount);
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

    MCAPI void $setOwner(::ActorUniqueID const ownerId);

    MCAPI void $normalTick();

    MCFOLD float $getShadowRadius() const;

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
