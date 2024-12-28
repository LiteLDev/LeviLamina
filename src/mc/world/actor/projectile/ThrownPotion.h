#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/Throwable.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class HashedString;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class ThrownPotion : public ::Throwable {
public:
    // prevent constructor by default
    ThrownPotion& operator=(ThrownPotion const&);
    ThrownPotion(ThrownPotion const&);
    ThrownPotion();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 122
    virtual void setAuxValue(int aux) /*override*/;

    // vIndex: 85
    virtual ::HashedString const& queryEntityRenderer() const /*override*/;

    // vIndex: 8
    virtual ~ThrownPotion() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ThrownPotion(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI short getPotionId() const;

    MCAPI void setLinger(bool linger);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& SPLASH_RANGE();
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $setAuxValue(int aux);

    MCAPI ::HashedString const& $queryEntityRenderer() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
