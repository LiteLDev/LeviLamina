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
    ::ll::UntypedStorage<8, 8> mUnk4f7897;
    ::ll::UntypedStorage<8, 8> mUnka3e2c3;
    ::ll::UntypedStorage<4, 4> mUnka93c64;
    // NOLINTEND

public:
    // prevent constructor by default
    Bee& operator=(Bee const&);
    Bee(Bee const&);
    Bee();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Bee() /*override*/ = default;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

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
