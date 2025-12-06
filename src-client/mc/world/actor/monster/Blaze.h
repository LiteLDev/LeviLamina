#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
class IConstBlockSource;
struct ActorDefinitionIdentifier;
// clang-format on

class Blaze : public ::Monster {
public:
    // Blaze inner types define
    using DataFlagIdType = char;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mAllowedHeightOffset;
    ::ll::TypedStorage<4, 4, int>   mNextHeightOffsetChangeTick;
    // NOLINTEND

public:
    // prevent constructor by default
    Blaze();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 38
    virtual float getBrightness(float a, ::IConstBlockSource const& region) const /*override*/;

    // vIndex: 146
    virtual void aiStep() /*override*/;

    // vIndex: 48
    virtual bool isOnFire() const /*override*/;

    // vIndex: 178
    virtual bool isDarkEnoughToSpawn() const /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 8
    virtual ~Blaze() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Blaze(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void preTravel();
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
    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCFOLD float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCAPI void $aiStep();

    MCAPI bool $isOnFire() const;

    MCFOLD bool $isDarkEnoughToSpawn() const;

    MCAPI void $normalTick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
