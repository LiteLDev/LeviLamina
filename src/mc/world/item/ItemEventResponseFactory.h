#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IPackLoadScoped.h"
#include "mc/util/EventResponseFactory.h"

// auto generated forward declare list
// clang-format off
class PackLoadContext;
// clang-format on

class ItemEventResponseFactory : public ::EventResponseFactory, public ::IPackLoadScoped {
public:
    // prevent constructor by default
    ItemEventResponseFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemEventResponseFactory() /*override*/;

    virtual void initializeFactory(::PackLoadContext const& packLoadContext) /*override*/;

    virtual void initSchema() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemEventResponseFactory(::PackLoadContext const& packLoadContext);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PackLoadContext const& packLoadContext);
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
    MCNAPI static void** $vftableForEventResponseFactory();

    MCNAPI static void** $vftableForIPackLoadScoped();
    // NOLINTEND
};
