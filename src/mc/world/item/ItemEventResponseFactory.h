#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IPackLoadScoped.h"
#include "mc/util/EventResponseFactory.h"

// auto generated forward declare list
// clang-format off
class IPackLoadContext;
// clang-format on

class ItemEventResponseFactory : public ::EventResponseFactory, public ::IPackLoadScoped {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemEventResponseFactory() /*override*/;

    // vIndex: 1
    virtual void initializeFactory(::IPackLoadContext const& packLoadContext) /*override*/;

    // vIndex: 2
    virtual void initSchema() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeFactory(::IPackLoadContext const& packLoadContext);

    MCNAPI void $initSchema();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEventResponseFactory();

    MCNAPI static void** $vftableForIPackLoadScoped();
    // NOLINTEND
};
