#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
namespace mce { class UUID; }
// clang-format on

namespace Social {

class MultiplayerServiceObserver
: public ::Core::Observer<::Social::MultiplayerServiceObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onInvalidPlayerJoinedLobby(::mce::UUID const& uuid, ::std::string const& xuid);

    virtual void onUserDisconnectedBecauseConcurrentLogin(::std::string const& id);

    virtual ~MultiplayerServiceObserver() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onUserDisconnectedBecauseConcurrentLogin(::std::string const& id);

#ifdef LL_PLAT_C
    MCNAPI void $onInvalidPlayerJoinedLobby(::mce::UUID const& uuid, ::std::string const& xuid);
#endif


    // NOLINTEND
};

} // namespace Social
