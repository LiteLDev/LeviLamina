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
    // prevent constructor by default
    ItemEventResponseFactory& operator=(ItemEventResponseFactory const&);
    ItemEventResponseFactory(ItemEventResponseFactory const&);
    ItemEventResponseFactory();

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
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemEventResponseFactory(::IPackLoadContext const& packLoadContext);
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFactory(::IPackLoadContext const& packLoadContext);

    MCAPI void $initSchema();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEventResponseFactory();

    MCAPI static void** $vftableForIPackLoadScoped();
    // NOLINTEND
};
