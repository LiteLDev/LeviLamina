#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerContentChangeListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
// clang-format on

class LegacyActorArmorChangedListener : public ::ContainerContentChangeListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka51d7e;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyActorArmorChangedListener& operator=(LegacyActorArmorChangedListener const&);
    LegacyActorArmorChangedListener(LegacyActorArmorChangedListener const&);
    LegacyActorArmorChangedListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void containerContentChanged(int) /*override*/;

    // vIndex: 1
    virtual ~LegacyActorArmorChangedListener() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void containerContentChanged(::Actor& actor);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void initializeEntity(::EntityContext& entity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $containerContentChanged(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
