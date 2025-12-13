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
    virtual void containerContentChanged(int) /*override*/;

    virtual ~LegacyActorArmorChangedListener() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void containerContentChanged(::Actor& actor);

    MCNAPI void validateFlyEnabledItem(::Actor& actor);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void initializeEntity(::EntityContext& entity);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $containerContentChanged(int);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
