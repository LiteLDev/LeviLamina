#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IPackLoadScoped.h"
#include "mc/util/Factory.h"

// auto generated forward declare list
// clang-format off
class ActorEventResponse;
class IPackLoadContext;
// clang-format on

class ActorEventResponseFactory : public ::Factory<::ActorEventResponse>, public ::IPackLoadScoped {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkbc0631;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorEventResponseFactory& operator=(ActorEventResponseFactory const&);
    ActorEventResponseFactory(ActorEventResponseFactory const&);
    ActorEventResponseFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorEventResponseFactory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorEventResponseFactory(::IPackLoadContext const& packLoadContext);

    MCAPI void initSchema();

    MCAPI void initializeFactory(::IPackLoadContext const& packLoadContext);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IPackLoadContext const& packLoadContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
