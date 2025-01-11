#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/auth/CredentialReplaySubject.h"
#include "mc/certificates/identity/edu/auth/GenericCredentialsEvent.h"
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
struct EDUConfigData;
namespace Core { class SingleThreadedLock; }
namespace edu::auth { struct CredentialsAcquired; }
namespace edu::auth { struct CredentialsRefreshSuccess; }
namespace edu::auth { struct CredsAuthComplete; }
namespace edu::auth { struct CredsExpired; }
namespace edu::auth { struct CredsLost; }
namespace edu::auth { struct GraphCredsRefreshFailed; }
namespace edu::auth { struct SignInCredsRefreshFailed; }
// clang-format on

namespace edu::auth {

struct CredentialsObserver : public ::Core::Observer<::edu::auth::CredentialsObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CredentialsObserver() /*override*/ = default;

    // vIndex: 9
    virtual void onNotify(::edu::auth::CredentialsAcquired const&);

    // vIndex: 8
    virtual void onNotify(::edu::auth::CredentialsRefreshSuccess const&);

    // vIndex: 7
    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::SignInCredsRefreshFailed> const&);

    // vIndex: 6
    virtual void onNotify(::EDUConfigData const&);

    // vIndex: 5
    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsAuthComplete> const&);

    // vIndex: 4
    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const&);

    // vIndex: 3
    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsExpired> const&);

    // vIndex: 2
    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::GraphCredsRefreshFailed> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace edu::auth
