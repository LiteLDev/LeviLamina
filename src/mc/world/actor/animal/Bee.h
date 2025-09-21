#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class Bee : public ::Animal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mNormalLoop;
    ::ll::TypedStorage<8, 8, uint64> mAggressiveLoop;
    ::ll::TypedStorage<4, 4, float>  mLoopSoundSpeed;
    // NOLINTEND

public:
    // prevent constructor by default
    Bee();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual ~Bee() /*override*/;

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 93
    virtual void onSynchedDataUpdate(int dataId) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    Bee(::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext);

    MCAPI void _registerLoopingSounds();

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI void $onSynchedDataUpdate(int dataId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
