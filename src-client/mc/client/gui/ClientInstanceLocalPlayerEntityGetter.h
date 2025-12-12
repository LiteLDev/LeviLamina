#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ILocalPlayerEntityGetter.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class IClientInstance;
// clang-format on

class ClientInstanceLocalPlayerEntityGetter : public ::ILocalPlayerEntityGetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke4079a;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstanceLocalPlayerEntityGetter& operator=(ClientInstanceLocalPlayerEntityGetter const&);
    ClientInstanceLocalPlayerEntityGetter(ClientInstanceLocalPlayerEntityGetter const&);
    ClientInstanceLocalPlayerEntityGetter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceLocalPlayerEntityGetter() /*override*/ = default;

    virtual ::EntityContext* getLocalPlayerEntityContext() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientInstanceLocalPlayerEntityGetter(::IClientInstance const& clientInstance);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance const& clientInstance);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EntityContext* $getLocalPlayerEntityContext() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
