#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IPackLoadScoped.h"
#include "mc/util/EventResponseFactory.h"

// auto generated forward declare list
// clang-format off
class PackLoadContext;
// clang-format on

class BlockEventResponseFactory : public ::EventResponseFactory, public ::IPackLoadScoped {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockEventResponseFactory() /*override*/;

    virtual void initializeFactory(::PackLoadContext const& packLoadContext) /*override*/;

    virtual void initSchema() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFactory(::PackLoadContext const& packLoadContext);

    MCAPI void $initSchema();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIPackLoadScoped();

    MCNAPI static void** $vftableForEventResponseFactory();
    // NOLINTEND
};
