#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class PrimedTnt : public ::PredictableProjectile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk783b5f;
    ::ll::UntypedStorage<4, 4> mUnkb08415;
    // NOLINTEND

public:
    // prevent constructor by default
    PrimedTnt& operator=(PrimedTnt const&);
    PrimedTnt(PrimedTnt const&);
    PrimedTnt();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual void normalTick() /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    virtual ::ActorType getOwnerEntityType() /*override*/;

    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ~PrimedTnt() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PrimedTnt(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void postNormalTick();
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
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI void $normalTick();

    MCFOLD float $getShadowRadius() const;

    MCAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCFOLD ::ActorType $getOwnerEntityType();

    MCFOLD void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCFOLD void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
