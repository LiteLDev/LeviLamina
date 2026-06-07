#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
namespace Social { struct Nonce; }
namespace mce { class UUID; }
namespace Social { struct OnlineId; }
// clang-format on

namespace Social {

class MultiplayerServiceObserver
: public ::Core::Observer<::Social::MultiplayerServiceObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onInvalidPlayerJoinedLobby(::mce::UUID const& uuid, ::std::string const& xuid);

    virtual void onUserDisconnectedBecauseConcurrentLogin(::std::string const&);

    virtual void onPlayerJoinedLobby(::Social::OnlineId const& player, ::Social::Nonce const& nonce);

    virtual void onPlayerLeftLobby(::Social::OnlineId const& player);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onUserDisconnectedBecauseConcurrentLogin(::std::string const&);

#ifdef LL_PLAT_C
    MCFOLD void $onInvalidPlayerJoinedLobby(::mce::UUID const& uuid, ::std::string const& xuid);

    MCFOLD void $onPlayerJoinedLobby(::Social::OnlineId const& player, ::Social::Nonce const& nonce);

    MCFOLD void $onPlayerLeftLobby(::Social::OnlineId const& player);
#endif


    // NOLINTEND
};

} // namespace Social
