#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/NavigationDescription.h"

struct NavigationSwimDescription : public ::NavigationDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkeddfd9;
    ::ll::UntypedStorage<1, 1> mUnkd523a9;
    ::ll::UntypedStorage<4, 4> mUnkd83b80;
    ::ll::UntypedStorage<4, 4> mUnka8bf2d;
    ::ll::UntypedStorage<4, 4> mUnkaf77de;
    ::ll::UntypedStorage<4, 4> mUnk3e2dea;
    ::ll::UntypedStorage<4, 4> mUnkfc6d83;
    ::ll::UntypedStorage<4, 4> mUnk5d31a0;
    // NOLINTEND

public:
    // prevent constructor by default
    NavigationSwimDescription& operator=(NavigationSwimDescription const&);
    NavigationSwimDescription(NavigationSwimDescription const&);
    NavigationSwimDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 1
    virtual ~NavigationSwimDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getJsonName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
