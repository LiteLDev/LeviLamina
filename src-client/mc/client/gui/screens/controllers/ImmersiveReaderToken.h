#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/WebToken.h"
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"

// auto generated forward declare list
// clang-format off
namespace edu::auth { struct CredsLost; }
// clang-format on

class ImmersiveReaderToken : public ::edu::auth::CredentialsObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mTokenString;
    ::ll::TypedStorage<8, 128, ::WebToken>   mToken;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImmersiveReaderToken() /*override*/ = default;

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
