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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8bbde8;
    ::ll::UntypedStorage<4, 4> mUnk54d31f;
    // NOLINTEND

public:
    // prevent constructor by default
    Blaze& operator=(Blaze const&);
    Blaze(Blaze const&);
    Blaze();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual float getBrightness(float a, ::IConstBlockSource const& region) const /*override*/;

    virtual void aiStep() /*override*/;

    virtual bool isOnFire() const /*override*/;

    virtual bool isDarkEnoughToSpawn() const /*override*/;

    virtual void normalTick() /*override*/;

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
