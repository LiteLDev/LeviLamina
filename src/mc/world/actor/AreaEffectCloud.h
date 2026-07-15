#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/effect/EffectDuration.h"
#include "mc/world/effect/MobEffectInstance.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
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
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    virtual void setOwner(::ActorUniqueID const ownerId) /*override*/;

    virtual void normalTick() /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AreaEffectCloud(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void addAreaEffect(::MobEffectInstance effect);

    MCAPI void calculateAndSetRadiusPerTick();

    MCAPI float getEffectiveRadius() const;

    MCAPI void notifyPickup();

    MCAPI void setDuration(::EffectDuration duration);

    MCAPI void setInitialRadius(float radius);

    MCAPI void setParticleColor(::mce::Color& c);
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

    // NOLINTEND
};
