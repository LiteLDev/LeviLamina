#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"

// auto generated forward declare list
// clang-format off
namespace Invites { struct Invite; }
// clang-format on

namespace Realms {

class IInvitesApi {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IInvitesApi() = default;

    // vIndex: 1
    virtual void getPendingInviteCount(::std::function<void(::Realms::GenericStatus, int)>) = 0;

    // vIndex: 2
    virtual void getPendingInviteCountFriendsOnly(::std::function<void(::Realms::GenericStatus, int)>, ::std::vector<::std::string> const&) = 0;

    // vIndex: 3
    virtual void listInvites(::std::function<void(::Realms::GenericStatus, ::std::vector<::Invites::Invite>)>, bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
