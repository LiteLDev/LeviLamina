#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/CredentialReplaySubject.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
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
#ifdef LL_PLAT_S
    virtual ~CredentialsObserver() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CredentialsObserver() /*override*/;
#endif

    virtual void onNotify(::edu::auth::CredentialsAcquired const& state);

    virtual void onNotify(::edu::auth::CredentialsRefreshSuccess const& state);

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::SignInCredsRefreshFailed> const& state);

    virtual void onNotify(::EDUConfigData const& config);

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsAuthComplete> const& state);

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state);

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsExpired> const& state);

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::GraphCredsRefreshFailed> const& state);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $onNotify(::edu::auth::CredentialsAcquired const& state);

    MCNAPI void $onNotify(::edu::auth::CredentialsRefreshSuccess const& state);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::SignInCredsRefreshFailed> const& state);

    MCNAPI void $onNotify(::EDUConfigData const& config);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsAuthComplete> const& state);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsExpired> const& state);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::GraphCredsRefreshFailed> const& state);
#endif


    // NOLINTEND
};

} // namespace edu::auth
